/*
 * XREFs of MiInitializeKernelCfg @ 0x140A55E64
 * Callers:
 *     MiInitSystem @ 0x140A53E5C (MiInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiMakeZeroedPageTablesEx @ 0x14027D47C (MiMakeZeroedPageTablesEx.c)
 *     RtlImageNtHeader @ 0x14029CFE0 (RtlImageNtHeader.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     MiProcessKernelCfgImage @ 0x1403725A4 (MiProcessKernelCfgImage.c)
 *     VslInitializeSecureKernelCfg @ 0x1404FC548 (VslInitializeSecureKernelCfg.c)
 *     MiProcessKernelCfgImageLoadConfig @ 0x14075C764 (MiProcessKernelCfgImageLoadConfig.c)
 *     MiMarkKernelImageCfgBits @ 0x140772E64 (MiMarkKernelImageCfgBits.c)
 *     MiProcessKernelCfgAddressTakenImports @ 0x1408D7910 (MiProcessKernelCfgAddressTakenImports.c)
 */

NTSTATUS __fastcall MiInitializeKernelCfg(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // rbx
  ULONG_PTR v6; // rax
  struct _KTHREAD *CurrentThread; // rdi
  PVOID *i; // rbx
  PVOID v9; // rcx
  PIMAGE_NT_HEADERS v10; // rax

  if ( (MiFlags & 0x80000) == 0 )
    return 0;
  v5 = qword_140C4FB28;
  v6 = MiReservePtes((__int64)&qword_140C4EF40, 0x20u, a3, a4);
  if ( !v6 )
    return -1073741670;
  result = VslInitializeSecureKernelCfg(v5, (__int64)(v6 << 25) >> 16);
  if ( result >= 0 )
  {
    qword_140C4CC38 = v5;
    qword_140C4CC30 = 0x100000000000LL;
    if ( (unsigned int)MiMakeZeroedPageTablesEx(
                         ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         (((v5 + 0x1FFFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                         4u,
                         9,
                         0) )
    {
      qword_140C4CC40 = 0LL;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
      for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
      {
        if ( ((_DWORD)i[13] & 0x2000) == 0 )
        {
          v9 = i[6];
          if ( v9 == PsNtosImageBase )
          {
            v10 = RtlImageNtHeader(v9);
            MiMarkKernelImageCfgBits((__int64)i, (__int64)v10);
            *((_DWORD *)i + 26) |= 0x2000u;
          }
          else
          {
            MiProcessKernelCfgImageLoadConfig((__int64)i, 0LL);
            MiProcessKernelCfgImage((__int64)i, 0, 0LL);
          }
        }
      }
      MiProcessKernelCfgAddressTakenImports((PVOID *)PsLoadedModuleList);
      ExReleaseResourceLite(&PsLoadedModuleResource);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      guard_icall_bitmap = qword_140C4CC38 - 0x3FFFE0000000000LL;
      return 0;
    }
    return -1073741670;
  }
  return result;
}
