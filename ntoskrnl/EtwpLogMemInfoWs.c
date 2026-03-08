/*
 * XREFs of EtwpLogMemInfoWs @ 0x1408A21C4
 * Callers:
 *     EtwpPerfMemInfoWork @ 0x1408A27F0 (EtwpPerfMemInfoWork.c)
 *     EtwpLogMemInfoRundown @ 0x1409EBF14 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1404129D0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsGetNextProcess @ 0x1406AA530 (PsGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x1408A1FF4 (SmProcessQueryStoreStats.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1408A25EC (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpLogMemInfoWsHelper @ 0x1409E3278 (EtwpLogMemInfoWsHelper.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpLogMemInfoWs(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // esi
  unsigned int v5; // r12d
  unsigned int v6; // r15d
  unsigned int *Pool2; // rax
  unsigned int *v8; // rdi
  unsigned int *v9; // rbx
  unsigned int *v10; // r14
  unsigned __int64 v11; // rax
  __int64 *NextProcess; // rsi
  __int64 v13; // r13
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  unsigned int *v18; // rax
  unsigned int *v19; // r14
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rcx
  int v24; // [rsp+28h] [rbp-59h]
  int v25; // [rsp+2Ch] [rbp-55h]
  _DWORD *v26; // [rsp+30h] [rbp-51h]
  unsigned __int64 v27; // [rsp+38h] [rbp-49h] BYREF
  unsigned __int64 v28; // [rsp+40h] [rbp-41h] BYREF
  __int64 v29; // [rsp+48h] [rbp-39h]
  _QWORD v30[8]; // [rsp+58h] [rbp-29h] BYREF
  _DWORD v31[4]; // [rsp+98h] [rbp+17h] BYREF

  v29 = a1;
  v31[0] = 81;
  v31[1] = 119;
  v31[2] = 120;
  memset(v30, 0, sizeof(v30));
  v4 = 0;
  v27 = 0LL;
  v28 = 0LL;
  EtwpLogSessionWorkingSetInfo(a1);
  v24 = -1;
  v5 = 4356;
  v6 = 64;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, 4356LL, 1953985605LL);
  v8 = Pool2;
  if ( !Pool2 )
    return;
  v9 = Pool2 + 1;
  *Pool2 = 0;
  v26 = Pool2 + 1089;
  v10 = v31;
  do
  {
    v25 = *v10;
    if ( (unsigned int)ZwQuerySystemInformation(*v10, (__int64)v30) )
      goto LABEL_31;
    *v9 = v24;
    v11 = v30[0] >> 12;
    *(_QWORD *)(v9 + 1) = v30[0] >> 12;
    *(_QWORD *)(v9 + 7) = v11;
    *(_QWORD *)(v9 + 3) = v11;
    *(_QWORD *)(v9 + 15) = 0LL;
    *(_QWORD *)(v9 + 5) = v11;
    *(_QWORD *)(v9 + 11) = 0LL;
    *(_QWORD *)(v9 + 9) = 0LL;
    *(_QWORD *)(v9 + 13) = 0LL;
    if ( v25 == 119 && a2 > v11 )
    {
      *(_QWORD *)(v9 + 3) = a2;
      *(_QWORD *)(v9 + 5) = a2;
    }
    ++*v8;
    v9 += 17;
    --v24;
    ++v4;
    ++v10;
  }
  while ( v4 < 3 );
  NextProcess = (__int64 *)PsIdleProcess;
  v13 = v29;
  if ( !PsIdleProcess )
  {
LABEL_30:
    EtwpLogMemInfoWsHelper(v13, v8);
    goto LABEL_31;
  }
  v14 = (__int64)v26;
  while ( 1 )
  {
    v15 = *((_DWORD *)NextProcess + 281);
    if ( (v15 & 0x4000000) != 0
      && ((v15 & 4) == 0
       || !*((_DWORD *)NextProcess + 1)
       || *((_DWORD *)NextProcess + 380)
       || (__int64 *)NextProcess[6] != NextProcess + 6) )
    {
      break;
    }
LABEL_27:
    if ( NextProcess == PsIdleProcess )
      NextProcess = 0LL;
    NextProcess = PsGetNextProcess(NextProcess);
    if ( !NextProcess )
      goto LABEL_30;
  }
  if ( v9 != (unsigned int *)v14 )
  {
LABEL_20:
    *v9 = *((_DWORD *)NextProcess + 272);
    *(_QWORD *)(v9 + 1) = NextProcess[224];
    *(_QWORD *)(v9 + 7) = NextProcess[225];
    *(_QWORD *)(v9 + 3) = NextProcess[201];
    *(_QWORD *)(v9 + 15) = NextProcess[293];
    *(_QWORD *)(v9 + 5) = (unsigned __int64)NextProcess[147] >> 12;
    v20 = *(_QWORD *)(v9 + 3);
    v21 = *(_QWORD *)(v9 + 5);
    *(_QWORD *)(v9 + 9) = 0LL;
    *(_QWORD *)(v9 + 11) = 0LL;
    if ( v20 >= v21 )
      v20 = v21;
    v22 = *(_QWORD *)(v9 + 1);
    *(_QWORD *)(v9 + 3) = v20;
    v23 = *(_QWORD *)(v9 + 7);
    if ( v23 >= v22 )
      v23 = v22;
    *(_QWORD *)(v9 + 7) = v23;
    *(_QWORD *)(v9 + 13) = NextProcess[233];
    if ( (int)SmProcessQueryStoreStats((struct _EPROCESS *)NextProcess, &v27, &v28) >= 0 )
    {
      *(_QWORD *)(v9 + 9) = v27 >> 12;
      *(_QWORD *)(v9 + 11) = v28 >> 12;
    }
    v9 += 17;
    ++*v8;
    goto LABEL_27;
  }
  if ( v6 >= 0x100 )
  {
    EtwpLogMemInfoWsHelper(v13, v8);
    v9 = v8 + 1;
    *v8 = 0;
    goto LABEL_20;
  }
  v16 = 68 * v6;
  v17 = v5;
  v6 *= 2;
  v5 += v16;
  v18 = (unsigned int *)ExAllocatePool2(64LL, v5, 1953985605LL);
  v19 = v18;
  if ( v18 )
  {
    memmove(v18, v8, v17);
    ExFreePoolWithTag(v8, 0);
    v8 = v19;
    v9 = &v19[17 * *v19 + 1];
    v14 = (__int64)&v19[17 * v6 + 1];
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
LABEL_31:
  ExFreePoolWithTag(v8, 0);
}
