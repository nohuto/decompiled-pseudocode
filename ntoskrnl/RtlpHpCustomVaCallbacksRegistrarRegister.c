/*
 * XREFs of RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B3B00
 * Callers:
 *     RtlpHpRegisterEnvironment @ 0x1403759F0 (RtlpHpRegisterEnvironment.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     RtlpHpMetadataFree @ 0x1402B6D30 (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x1402B71FC (RtlpHpMetadataAlloc.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     RtlpHpCustomVaCallbacksEncodedComparison @ 0x1405B3A80 (RtlpHpCustomVaCallbacksEncodedComparison.c)
 */

__int64 __fastcall RtlpHpCustomVaCallbacksRegistrarRegister(__int64 a1, char *a2, __int64 *a3, __int128 *a4)
{
  __int64 v6; // rax
  unsigned __int8 *v7; // r8
  __int64 v9; // r13
  __int64 v10; // r9
  __int64 v11; // rax
  volatile signed __int64 *v12; // r14
  _QWORD *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r10
  int v17; // r9d
  unsigned int v18; // r15d
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 *v21; // rcx
  signed __int64 v22; // r12
  __int64 v23; // r10
  unsigned int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  bool v28; // zf
  __int128 v30; // [rsp+30h] [rbp-98h] BYREF
  __int64 v31; // [rsp+40h] [rbp-88h]
  __int64 *v32; // [rsp+48h] [rbp-80h]
  __int128 v33; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v34[4]; // [rsp+60h] [rbp-68h] BYREF

  v6 = RtlpHpHeapGlobals ^ *(_QWORD *)a2;
  v31 = a1;
  v32 = a3;
  *(_QWORD *)&v30 = a4;
  v34[0] = (unsigned __int64)v34 ^ v6;
  v7 = (unsigned __int8 *)v34;
  v9 = 314159LL;
  v34[1] = (unsigned __int64)v34 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 1);
  v10 = 4LL;
  v34[2] = (unsigned __int64)v34 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 2);
  v34[3] = (unsigned __int64)v34 ^ RtlpHpHeapGlobals ^ *((_QWORD *)a2 + 3);
  do
  {
    v11 = *v7;
    v7 += 8;
    v9 = *(v7 - 1)
       + 37
       * (*(v7 - 2)
        + 37
        * (*(v7 - 3) + 37 * (*(v7 - 4) + 37 * (*(v7 - 5) + 37 * (*(v7 - 6) + 37 * (*(v7 - 7) + 37 * (v11 + 37 * v9)))))));
    --v10;
  }
  while ( v10 );
  v33 = *a4;
  v12 = (volatile signed __int64 *)(a1 + 16);
  v13 = (_QWORD *)RtlpHpMetadataAlloc(0x38uLL, 0x38uLL, 0, &v33);
  RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 16), *(_DWORD *)a4 & 1);
  v14 = 0LL;
  v15 = 0LL;
LABEL_4:
  v16 = v9 & (-1LL << (*(_BYTE *)(v31 + 4) & 0x1F));
  if ( v15 )
    goto LABEL_7;
  v17 = *(_DWORD *)(v31 + 4) >> 5;
  if ( v17 )
  {
    v15 = *(_QWORD *)(v31 + 8)
        + 8LL
        * ((37
          * (BYTE6(v16)
           + 37
           * (BYTE5(v16)
            + 37
            * (BYTE4(v16)
             + 37 * (BYTE3(v16) + 37 * (BYTE2(v16) + 37 * (BYTE1(v16) + 37 * ((unsigned __int8)v16 + 11623883)))))))
          + HIBYTE(v16)) & (unsigned int)(v17 - 1));
LABEL_7:
    while ( 1 )
    {
      v15 = *(_QWORD *)v15;
      if ( (v15 & 1) != 0 )
        break;
      if ( v16 == ((-1LL << (*(_BYTE *)(v31 + 4) & 0x1F)) & *(_QWORD *)(v15 + 8)) )
      {
        if ( !v15 )
          break;
        if ( RtlpHpCustomVaCallbacksEncodedComparison((_QWORD *)v15, (unsigned __int64)v34) )
        {
          if ( v13 )
          {
            v30 = *(_OWORD *)v30;
            RtlpHpMetadataFree((__int64)v13, &v30);
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 48)) <= 1 )
            __fastfail(0xEu);
          v18 = 0;
          v14 = v15 + 16;
          goto LABEL_21;
        }
        goto LABEL_4;
      }
    }
  }
  if ( v13 )
  {
    v19 = (__int64)(v13 + 2);
    v20 = 4LL;
    v21 = v13 + 2;
    v22 = a2 - (char *)(v13 + 2);
    do
    {
      *v21 = v19 ^ RtlpHpHeapGlobals ^ *(__int64 *)((char *)v21 + v22);
      ++v21;
      --v20;
    }
    while ( v20 );
    v23 = v31;
    v13[6] = 1LL;
    v24 = *(_DWORD *)(v23 + 4);
    *(_QWORD *)&v30 = v13[1] & (-1LL << (v24 & 0x1F));
    v25 = *(_QWORD *)(v23 + 8);
    v26 = (37
         * (BYTE6(v30)
          + 37
          * (BYTE5(v30)
           + 37
           * (BYTE4(v30)
            + 37 * (BYTE3(v30) + 37 * (BYTE2(v30) + 37 * (BYTE1(v30) + 37 * ((unsigned __int8)v30 + 11623883)))))))
         + BYTE7(v30)) & ((v24 >> 5) - 1);
    *v13 = *(_QWORD *)(v25 + 8 * v26);
    *(_QWORD *)(v25 + 8 * v26) = v13;
    v18 = 0;
    ++*(_DWORD *)v23;
    v14 = v19;
  }
  else
  {
    v18 = -1073741801;
  }
LABEL_21:
  *v32 = v14;
  if ( (_InterlockedExchangeAdd64(v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v12);
  KeAbPostRelease((ULONG_PTR)v12);
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v28 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v18;
}
