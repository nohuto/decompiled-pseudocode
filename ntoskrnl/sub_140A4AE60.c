/*
 * XREFs of sub_140A4AE60 @ 0x140A4AE60
 * Callers:
 *     sub_1406B6FF4 @ 0x1406B6FF4 (sub_1406B6FF4.c)
 * Callees:
 *     IoAllocateMdl @ 0x14020CAD0 (IoAllocateMdl.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     ZwProtectVirtualMemory @ 0x140412D10 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall sub_140A4AE60(PVOID VirtualAddress, ULONG Length, struct _MDL **a3, _QWORD *a4)
{
  struct _MDL *v8; // rbx
  int v9; // esi
  int v10; // edi
  struct _MDL *Mdl; // rax
  PVOID MappedSystemVa; // rax
  _QWORD v14[3]; // [rsp+48h] [rbp-40h] BYREF

  v8 = 0LL;
  v9 = 0;
  v14[0] = VirtualAddress;
  v10 = ZwProtectVirtualMemory(-1LL, (__int64)v14);
  if ( v10 >= 0 )
  {
    Mdl = IoAllocateMdl(VirtualAddress, Length, 0, 0, 0LL);
    v8 = Mdl;
    if ( Mdl )
    {
      v9 = 1;
      MmProbeAndLockPages(Mdl, 1, IoModifyAccess);
      if ( (v8->MdlFlags & 5) != 0 )
        MappedSystemVa = v8->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v8, 0, MmCached, 0LL, 0, 0x40000020u);
      v14[1] = MappedSystemVa;
      if ( MappedSystemVa )
      {
        if ( a4 )
          *a4 = MappedSystemVa;
        if ( a3 )
        {
          *a3 = v8;
          v8 = 0LL;
        }
      }
      else
      {
        v10 = -1073741801;
      }
    }
    else
    {
      v10 = -1073741801;
    }
  }
  if ( v8 )
  {
    if ( v9 )
      MmUnlockPages(v8);
    IoFreeMdl(v8);
  }
  return (unsigned int)v10;
}
