/*
 * XREFs of PspSelectVsmEnclaveByNumber @ 0x14090E710
 * Callers:
 *     PsCallEnclave @ 0x14090D330 (PsCallEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PspSelectVsmEnclaveByNumber(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  signed __int64 *v8; // rdi
  __int64 v9; // r11
  int v10; // r10d
  __int64 v11; // rbp
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+50h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 2264);
  ExAcquirePushLockSharedEx(a1 + 2264, 0LL);
  v9 = *(_QWORD *)(a1 + 2248);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 4) >> 5;
    v11 = -1LL << (*(_BYTE *)(v9 + 4) & 0x1F);
    v12 = a2 & v11;
    if ( !v10 )
      goto LABEL_13;
    v18 = a2 & v11;
    v13 = *(_QWORD *)(v9 + 8)
        + 8LL
        * ((37
          * (BYTE6(v18)
           + 37
           * (BYTE5(v18)
            + 37
            * (BYTE4(v18)
             + 37 * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v12 + 11623883)))))))
          + HIBYTE(v18)) & (unsigned int)(v10 - 1));
    while ( 1 )
    {
      v13 = *(_QWORD *)v13;
      if ( (v13 & 1) != 0 )
        break;
      if ( v12 == (v11 & *(_QWORD *)(v13 + 8)) )
        goto LABEL_8;
    }
  }
  v13 = 0LL;
LABEL_8:
  if ( v13 )
  {
    v7 = v13;
    if ( *(_DWORD *)(v13 + 40) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v13 + 16)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v7 = 0LL;
    }
  }
LABEL_13:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
  if ( !v7 )
    return 3221225480LL;
  *a3 = v7;
  return 0LL;
}
