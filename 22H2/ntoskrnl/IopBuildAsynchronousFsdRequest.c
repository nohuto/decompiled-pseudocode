/*
 * XREFs of IopBuildAsynchronousFsdRequest @ 0x140358DF0
 * Callers:
 *     IoBuildAsynchronousFsdRequest @ 0x140358DB0 (IoBuildAsynchronousFsdRequest.c)
 *     IopBuildSynchronousFsdRequest @ 0x1406FF1D0 (IopBuildSynchronousFsdRequest.c)
 * Callees:
 *     IopVerifierExAllocatePool @ 0x14022C350 (IopVerifierExAllocatePool.c)
 *     PsGetIoPriorityThread @ 0x140242180 (PsGetIoPriorityThread.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14029C670 (IoSetDiskIoAttributionFromThread.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IoFreeIrp @ 0x1402D3CF0 (IoFreeIrp.c)
 *     IopProbeAndLockPages_1 @ 0x140358FB0 (IopProbeAndLockPages_1.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x14035AB60 (IoFreeMdl.c)
 *     memmove @ 0x140413540 (memmove.c)
 */

__int64 __fastcall IopBuildAsynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6)
{
  SIZE_T v6; // r12
  __int64 Irp; // rbx
  __int64 v11; // rdi
  int v12; // eax
  int v14; // eax
  unsigned int v15; // eax
  PMDL Mdl; // rax
  int v17; // edx
  PVOID Pool; // rax
  int v19; // eax

  v6 = a4;
  Irp = IopAllocateIrpExReturn();
  if ( Irp )
  {
    *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
    v11 = *(_QWORD *)(Irp + 184);
    *(_BYTE *)(v11 - 72) = a1;
    if ( a1 <= 0x1B )
    {
      v12 = 138478080;
      if ( _bittest(&v12, a1) )
      {
LABEL_4:
        *(_DWORD *)(Irp + 16) = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(*(_QWORD *)(Irp + 152))
                                                                     + 1) << 17);
        *(_QWORD *)(Irp + 72) = a6;
        return Irp;
      }
    }
    v14 = *(_DWORD *)(a2 + 48);
    if ( (v14 & 4) != 0 )
    {
      Pool = IopVerifierExAllocatePool(NonPagedPoolNxCacheAligned, v6);
      *(_QWORD *)(Irp + 24) = Pool;
      if ( Pool )
      {
        if ( a1 == 4 )
        {
          memmove(Pool, a3, v6);
          v19 = 48;
        }
        else
        {
          *(_QWORD *)(Irp + 112) = a3;
          v19 = 112;
        }
        *(_DWORD *)(Irp + 16) = v19;
        LODWORD(v6) = a4;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (v14 & 0x10) == 0 )
      {
        *(_QWORD *)(Irp + 112) = a3;
LABEL_8:
        *(_DWORD *)(v11 - 64) = v6;
        if ( a5 )
          *(_QWORD *)(v11 - 48) = *a5;
        v15 = *(_DWORD *)(a2 + 72);
        if ( v15 >= 7 && (v15 <= 9 || v15 == 36) )
          IoSetDiskIoAttributionFromThread(Irp, *(struct _KTHREAD **)(Irp + 152));
        goto LABEL_4;
      }
      Mdl = IoAllocateMdl(a3, v6, 0, 0, 0LL);
      *(_QWORD *)(Irp + 8) = Mdl;
      if ( Mdl )
      {
        IopProbeAndLockPages_1((_DWORD)Mdl, v17, a1 == 3, a2, *(unsigned __int8 *)(v11 - 72));
        goto LABEL_8;
      }
    }
    IoFreeIrp((PIRP)Irp);
  }
  return 0LL;
}
