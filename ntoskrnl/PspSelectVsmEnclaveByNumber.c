/*
 * XREFs of PspSelectVsmEnclaveByNumber @ 0x1408A13FA
 * Callers:
 *     PsCallEnclave @ 0x1409B3880 (PsCallEnclave.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall PspSelectVsmEnclaveByNumber(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v4; // rdi
  __int64 v8; // rsi
  __int64 v9; // r11
  int v10; // r10d
  __int64 v11; // rbp
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v15; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v4 = (signed __int64 *)(a1 + 2264);
  --CurrentThread->KernelApcDisable;
  v8 = 0LL;
  ExAcquirePushLockSharedEx(a1 + 2264, 0LL);
  v9 = *(_QWORD *)(a1 + 2248);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 4) >> 5;
    v11 = -1LL << (*(_BYTE *)(v9 + 4) & 0x1F);
    v12 = a2 & v11;
    if ( v10 )
    {
      v15 = a2 & v11;
      v13 = *(_QWORD *)(v9 + 8)
          + 8LL
          * ((37
            * (BYTE6(v15)
             + 37
             * (BYTE5(v15)
              + 37
              * (BYTE4(v15)
               + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v12 + 11623883)))))))
            + HIBYTE(v15)) & (unsigned int)(v10 - 1));
      while ( 1 )
      {
        v13 = *(_QWORD *)v13;
        if ( (v13 & 1) != 0 )
          break;
        if ( v12 == (v11 & *(_QWORD *)(v13 + 8)) )
          goto LABEL_8;
      }
      v13 = 0LL;
LABEL_8:
      if ( v13 )
      {
        v8 = v13;
        if ( *(_DWORD *)(v13 + 40) )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 16)) <= 1 )
            __fastfail(0xEu);
        }
        else
        {
          v8 = 0LL;
        }
      }
    }
  }
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( !v8 )
    return 3221225480LL;
  *a3 = v8;
  return 0LL;
}
