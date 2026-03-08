/*
 * XREFs of PpmEventTraceProcessorPerformanceDomainRundown @ 0x140996930
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     KeAndGroupAffinityEx @ 0x140233690 (KeAndGroupAffinityEx.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     KeQueryGroupAffinity @ 0x140296080 (KeQueryGroupAffinity.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorPerformanceDomainRundown(__int64 a1)
{
  _DWORD *Pool2; // r14
  unsigned __int16 v3; // ax
  USHORT i; // di
  _OWORD *v5; // rbx
  bool v6; // zf
  unsigned int v7; // ebx
  _OWORD *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  unsigned __int16 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned __int16 j; // dx
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  ULONG v23; // eax
  __int64 v24; // rcx
  unsigned __int16 v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[68]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v28[32]; // [rsp+488h] [rbp+380h] BYREF

  Pool2 = 0LL;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_DOMAIN_RUNDOWN) )
  {
    v3 = 0;
    v25 = 0;
    for ( i = 0; i < 0x20u; ++i )
    {
      v5 = &v28[v3];
      *v5 = 0LL;
      *((_WORD *)v5 + 4) = i;
      *(_QWORD *)v5 = KeQueryGroupAffinity(i);
      v6 = (unsigned int)KeAndGroupAffinityEx((_WORD *)(a1 + 24), (__int64)v5, (char *)v5) == 0;
      v3 = v25;
      if ( !v6 )
        v3 = ++v25;
    }
    UserData[0].Ptr = (ULONGLONG)&v25;
    v7 = 1;
    *(_QWORD *)&UserData[0].Size = 2LL;
    if ( v3 )
    {
      v8 = v28;
      v9 = v3;
      do
      {
        v10 = v7;
        UserData[v10].Ptr = (ULONGLONG)v8 + 8;
        *(_QWORD *)&UserData[v10].Size = 2LL;
        v11 = v7 + 1;
        v7 += 2;
        UserData[v11].Ptr = (ULONGLONG)v8++;
        *(_QWORD *)&UserData[v11].Size = 8LL;
        --v9;
      }
      while ( v9 );
    }
    v12 = *(_DWORD *)(a1 + 296);
    v13 = 0;
    v14 = v7;
    v15 = 0LL;
    v16 = v7 + 1;
    v26 = 0;
    UserData[v14].Ptr = (ULONGLONG)&v26;
    *(_QWORD *)&UserData[v14].Size = 4LL;
    if ( v12 )
    {
      v17 = *(_QWORD *)(a1 + 312);
      do
      {
        if ( *(_DWORD *)(v17 + 144LL * v13 + 16) == 1 )
        {
          v15 = (unsigned int)(v15 + 1);
          v26 = v15;
        }
        ++v13;
      }
      while ( v13 < v12 );
      if ( (_DWORD)v15 )
      {
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4 * v15, 1699565648LL);
        if ( !Pool2 )
          return;
        v18 = 0;
        for ( j = 0; (unsigned int)j < *(_DWORD *)(a1 + 296); ++j )
        {
          v20 = *(_QWORD *)(a1 + 312);
          if ( *(_DWORD *)(v20 + 144LL * j + 16) == 1 )
          {
            v21 = v18++;
            Pool2[v21] = *(_DWORD *)(v20 + 144LL * j + 20);
          }
        }
        v22 = v16;
        v23 = 4 * v26;
        ++v16;
        UserData[v22].Ptr = (ULONGLONG)Pool2;
        UserData[v22].Size = v23;
        *(&UserData[0].Reserved + 1 * v22) = 0;
      }
    }
    v24 = v16;
    UserData[v24].Ptr = a1 + 432;
    *(_QWORD *)&UserData[v24].Size = 4LL;
    EtwWrite(PpmEtwHandle, &PPM_ETW_PERF_DOMAIN_RUNDOWN, 0LL, v16 + 1, UserData);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x654D5050u);
  }
}
