/*
 * XREFs of MiMarkKernelImageCfgBits @ 0x140772E64
 * Callers:
 *     MiProcessKernelCfgImage @ 0x1403725A4 (MiProcessKernelCfgImage.c)
 *     MiUnloadSystemImage @ 0x1406FEA98 (MiUnloadSystemImage.c)
 *     MiInitializeKernelCfg @ 0x140A55E64 (MiInitializeKernelCfg.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     VslpEnterIumSecureMode @ 0x1402624F0 (VslpEnterIumSecureMode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     MiFlushKernelCfgBitmap @ 0x14055392C (MiFlushKernelCfgBitmap.c)
 *     MiSnapDriverRange @ 0x14075E738 (MiSnapDriverRange.c)
 *     VslCompleteSecureDriverLoad @ 0x14077D304 (VslCompleteSecureDriverLoad.c)
 *     MiUnlockDriverPages @ 0x1408C4E10 (MiUnlockDriverPages.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x1408D77E0 (MiAllocateKernelCfgBitmapPageTables.c)
 *     MiReleaseKernelCfgLock @ 0x1408D7958 (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiMarkKernelImageCfgBits(__int64 a1, __int64 a2)
{
  NTSTATUS KernelCfgBitmapPageTables; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned int v8; // eax
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  unsigned int v11; // edx
  unsigned __int64 v12; // r8
  ULONG Size[2]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v14; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v16[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v17; // [rsp+68h] [rbp-A0h]
  __int64 v18; // [rsp+6Ch] [rbp-9Ch]
  int v19; // [rsp+74h] [rbp-94h]
  __int64 v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  __int64 v23; // [rsp+90h] [rbp-78h]
  _QWORD v24[14]; // [rsp+98h] [rbp-70h] BYREF

  v15 = 0LL;
  v18 = 0LL;
  v19 = 0;
  v21 = 0LL;
  v23 = 0LL;
  v14 = 0LL;
  Size[0] = 0;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CC40, 0LL);
    KernelCfgBitmapPageTables = MiAllocateKernelCfgBitmapPageTables(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
    MiReleaseKernelCfgLock();
    if ( KernelCfgBitmapPageTables >= 0 )
    {
      v6 = *(unsigned int *)(a1 + 64);
      v7 = *(_QWORD *)(a1 + 48);
      v8 = *(_DWORD *)(a1 + 64);
      v16[0] = a1;
      v16[1] = 0LL;
      v20 = 0LL;
      v22 = 0LL;
      v17 = (v8 >> 12) + ((v6 & 0xFFF) != 0);
      KernelCfgBitmapPageTables = VslCompleteSecureDriverLoad(*(_QWORD *)(a1 + 112), v7, v6);
      MiUnlockDriverPages(v16);
      if ( KernelCfgBitmapPageTables >= 0 )
      {
        v9 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, Size);
        v10 = v9;
        if ( v9 && Size[0] >= 0xB0 && v9[21] )
        {
          v11 = 0;
          while ( 1 )
          {
            v11 = MiSnapDriverRange(a1, v11, 2, 0LL, &v14, &v15);
            if ( v14 )
            {
              v12 = v10[20];
              if ( v12 >= (__int64)(v14 << 25) >> 16 && v12 <= (__int64)((v15 << 25) | 0xFFF0000) >> 16 )
                break;
            }
            if ( !v11 )
              return (unsigned int)KernelCfgBitmapPageTables;
          }
          *(_DWORD *)(a1 + 104) |= 0x800u;
        }
        else
        {
          *(_DWORD *)(a1 + 104) |= 0x100u;
        }
      }
    }
  }
  else if ( (MiFlags & 0x8000) != 0 )
  {
    memset(v24, 0, 0x68uLL);
    v24[1] = *(_QWORD *)(a1 + 48);
    KernelCfgBitmapPageTables = VslpEnterIumSecureMode(2u, 217, 0, (__int64)v24);
    if ( (MiFlags & 0x80000) != 0 )
      MiFlushKernelCfgBitmap(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64));
  }
  else
  {
    return 0;
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
