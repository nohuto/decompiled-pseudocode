/*
 * XREFs of PpmEventTraceProcessorPerformanceDomainRundown @ 0x1408F3CC8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407D5560 (PpmEventTraceControlCallback.c)
 * Callees:
 *     KeQueryGroupAffinity @ 0x140247ED0 (KeQueryGroupAffinity.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     KeAndGroupAffinityEx @ 0x1403741F0 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PpmEventTraceProcessorPerformanceDomainRundown(__int64 a1)
{
  _DWORD *PoolWithTag; // rsi
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
  ULONG v16; // ebx
  __int64 v17; // r10
  unsigned int v18; // r8d
  unsigned __int16 j; // dx
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  ULONG v24; // eax
  unsigned __int16 v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData[42]; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v28[20]; // [rsp+2E8h] [rbp+1E0h] BYREF

  PoolWithTag = 0LL;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PERF_DOMAIN_RUNDOWN) )
  {
    v3 = 0;
    v25 = 0;
    for ( i = 0; i < 0x14u; ++i )
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
    v12 = *(_DWORD *)(a1 + 200);
    v13 = 0;
    v14 = v7;
    v15 = 0LL;
    v16 = v7 + 1;
    v26 = 0;
    UserData[v14].Ptr = (ULONGLONG)&v26;
    *(_QWORD *)&UserData[v14].Size = 4LL;
    if ( v12 )
    {
      v17 = *(_QWORD *)(a1 + 216);
      do
      {
        if ( *(_DWORD *)(136LL * v13 + v17 + 16) == 1 )
        {
          v15 = (unsigned int)(v15 + 1);
          v26 = v15;
        }
        ++v13;
      }
      while ( v13 < v12 );
      if ( (_DWORD)v15 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4 * v15, 0x654D5050u);
        if ( !PoolWithTag )
          return;
        v18 = 0;
        for ( j = 0; (unsigned int)j < *(_DWORD *)(a1 + 200); ++j )
        {
          v20 = *(_QWORD *)(a1 + 216);
          v21 = 136LL * j;
          if ( *(_DWORD *)(v21 + v20 + 16) == 1 )
          {
            v22 = v18++;
            PoolWithTag[v22] = *(_DWORD *)(v21 + v20 + 20);
          }
        }
        v23 = v16;
        v24 = 4 * v26;
        ++v16;
        UserData[v23].Ptr = (ULONGLONG)PoolWithTag;
        UserData[v23].Size = v24;
        *(&UserData[0].Reserved + 1 * v23) = 0;
      }
    }
    EtwWrite(PpmEtwHandle, &PPM_ETW_PERF_DOMAIN_RUNDOWN, 0LL, v16, UserData);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x654D5050u);
  }
}
