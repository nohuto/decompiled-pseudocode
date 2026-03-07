char __fastcall PpmEventDomainPerfStateChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // di
  _OWORD *v7; // rdx
  bool v8; // cf
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int v11; // r8d
  _OWORD *v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rax
  REGHANDLE v23; // rcx
  int v25; // [rsp+48h] [rbp-C0h] BYREF
  int v26; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned int v27; // [rsp+50h] [rbp-B8h] BYREF
  int v28; // [rsp+54h] [rbp-B4h] BYREF
  _DWORD v29[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int64 v31; // [rsp+68h] [rbp-A0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+78h] [rbp-90h] BYREF
  unsigned int *v33; // [rsp+88h] [rbp-80h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  int *v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  _OWORD v37[32]; // [rsp+4F8h] [rbp+3F0h] BYREF
  _UNKNOWN *retaddr; // [rsp+720h] [rbp+618h] BYREF

  v1 = &retaddr;
  if ( !*(_DWORD *)(a1 + 304) )
  {
    v26 = *(_DWORD *)(a1 + 768);
    v27 = *(_DWORD *)(a1 + 780);
    LOBYTE(v1) = WmiPerfStateDomainEventEnabled;
    if ( WmiPerfStateDomainEventEnabled )
    {
      v29[0] = v26;
      v3 = *(_QWORD *)(a1 + 32);
      v4 = *(_QWORD *)(a1 + 16);
      v31 = v3;
      v30 = v27;
      v29[1] = 0;
      LOBYTE(v1) = PpmFireWmiEvent(v4 - 136, &PPM_PERFSTATE_DOMAIN_CHANGE_GUID, 24LL, v29);
    }
    if ( PpmEtwRegistered )
    {
      LOBYTE(v1) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE);
      if ( (_BYTE)v1 )
      {
        v5 = 0;
        v6 = 0;
        LOWORD(v25) = 0;
        do
        {
          v7 = &v37[v5];
          v8 = v6 < LOWORD(KeActiveProcessors[0]);
          *v7 = 0LL;
          *((_WORD *)v7 + 4) = v6;
          if ( v8 )
            v9 = qword_140D1EFE8[v6];
          else
            v9 = 0LL;
          *(_QWORD *)v7 = v9;
          v10 = (unsigned int)KeAndGroupAffinityEx((_WORD *)(a1 + 24), (__int64)v7, (char *)v7) == 0;
          v5 = v25;
          if ( !v10 )
          {
            v5 = v25 + 1;
            LOWORD(v25) = v25 + 1;
          }
          ++v6;
        }
        while ( v6 < 0x20u );
        *(_QWORD *)&UserData.Size = 4LL;
        UserData.Ptr = (ULONGLONG)&v26;
        v33 = &v27;
        v34 = 4LL;
        v35 = &v25;
        v36 = 2LL;
        v11 = 3;
        if ( v5 )
        {
          v12 = v37;
          v13 = v5;
          do
          {
            v14 = 2LL * v11;
            *(&UserData.Ptr + v14) = (ULONGLONG)v12 + 8;
            *((_QWORD *)&UserData.Size + v14) = 2LL;
            v15 = 2LL * (v11 + 1);
            v11 += 2;
            *(&UserData.Ptr + v15) = (ULONGLONG)v12++;
            *((_QWORD *)&UserData.Size + v15) = 8LL;
            --v13;
          }
          while ( v13 );
        }
        v16 = 2LL * v11;
        *(&UserData.Ptr + v16) = a1 + 776;
        *((_QWORD *)&UserData.Size + v16) = 4LL;
        v17 = v11 + 1;
        v18 = v11 + 2;
        v17 *= 2LL;
        *(&UserData.Ptr + v17) = a1 + 784;
        *((_QWORD *)&UserData.Size + v17) = 4LL;
        v19 = 2LL * v18;
        *(&UserData.Ptr + v19) = a1 + 788;
        *((_QWORD *)&UserData.Size + v19) = 4LL;
        v20 = v18 + 1;
        v18 += 2;
        v20 *= 2LL;
        *(&UserData.Ptr + v20) = a1 + 792;
        v21 = *(unsigned __int8 *)(a1 + 804);
        *((_QWORD *)&UserData.Size + v20) = 4LL;
        v28 = v21;
        v22 = 2LL * v18;
        *(&UserData.Ptr + v22) = (ULONGLONG)&v28;
        v23 = PpmEtwHandle;
        *((_QWORD *)&UserData.Size + v22) = 4LL;
        LOBYTE(v1) = EtwWriteEx(v23, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE, 0LL, 0, 0LL, 0LL, v18 + 1, &UserData);
      }
    }
  }
  return (char)v1;
}
