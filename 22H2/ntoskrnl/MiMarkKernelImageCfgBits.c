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
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // edx
  unsigned __int64 v13; // r8
  __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v18; // [rsp+68h] [rbp-A0h]
  __int64 v19; // [rsp+6Ch] [rbp-9Ch]
  int v20; // [rsp+74h] [rbp-94h]
  __int64 v21; // [rsp+78h] [rbp-90h]
  __int64 v22; // [rsp+80h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-78h]
  _QWORD v25[14]; // [rsp+98h] [rbp-70h] BYREF

  v16 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v22 = 0LL;
  v24 = 0LL;
  v15 = 0LL;
  LODWORD(v14) = 0;
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
      v17[0] = a1;
      v17[1] = 0LL;
      v21 = 0LL;
      v23 = 0LL;
      v18 = (v8 >> 12) + ((v6 & 0xFFF) != 0);
      KernelCfgBitmapPageTables = VslCompleteSecureDriverLoad(*(_QWORD *)(a1 + 112), v7, v6);
      MiUnlockDriverPages(v17);
      if ( KernelCfgBitmapPageTables >= 0 )
      {
        LOBYTE(v9) = 1;
        v10 = RtlImageDirectoryEntryToData(*(_QWORD *)(a1 + 48), v9, 10, (int)&v14);
        v11 = v10;
        if ( v10 && (unsigned int)v14 >= 0xB0 && *(_QWORD *)(v10 + 168) )
        {
          v12 = 0;
          while ( 1 )
          {
            v12 = MiSnapDriverRange(a1, v12, 2, 0LL, &v15, &v16);
            if ( v15 )
            {
              v13 = *(_QWORD *)(v11 + 160);
              if ( v13 >= (__int64)(v15 << 25) >> 16 && v13 <= (__int64)((v16 << 25) | 0xFFF0000) >> 16 )
                break;
            }
            if ( !v12 )
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
    memset(v25, 0, 0x68uLL);
    v25[1] = *(_QWORD *)(a1 + 48);
    KernelCfgBitmapPageTables = VslpEnterIumSecureMode(2u, 217, 0, (__int64)v25);
    if ( (MiFlags & 0x80000) != 0 )
      MiFlushKernelCfgBitmap(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64));
  }
  else
  {
    return 0;
  }
  return (unsigned int)KernelCfgBitmapPageTables;
}
