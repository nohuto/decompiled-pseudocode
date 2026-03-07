void __fastcall SshpFlushBlockerDataCache(ULONG *a1)
{
  ULONG v2; // r11d
  ULONGLONG v3; // rbx
  ULONG v4; // edx
  int v5; // esi
  ULONG v6; // eax
  unsigned int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int16 *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  ULONGLONG v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbx
  char v22; // [rsp+30h] [rbp-D0h] BYREF
  ULONG v23; // [rsp+34h] [rbp-CCh] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+40h] [rbp-C0h] BYREF
  ULONG *v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]

  v24 = 0;
  v22 = 0;
  v25 = 0;
  if ( SshpTraceHandleRegistered )
  {
    v2 = a1[4];
    if ( v2 )
    {
      v23 = 0;
      v3 = (ULONGLONG)(a1 + 2);
      v4 = 0;
      v5 = 0;
      v6 = 0;
      do
      {
        v7 = v6 + 4 * v6 + 2;
        v8 = v4 + 1LL;
        v9 = 3 * v8;
        v10 = 2LL * (v7 + 2);
        v24 = **(unsigned __int16 **)&a1[6 * v8] >> 1;
        v11 = 2LL * (v7 + 1);
        v25 = LOWORD(a1[6 * v8 + 2]) >> 1;
        v12 = 2LL * v7;
        *(&v26.Ptr + v12) = v3;
        *((_QWORD *)&v26.Size + v12) = 16LL;
        *(&v26.Ptr + v11) = (ULONGLONG)&v24;
        *((_QWORD *)&v26.Size + v11) = 4LL;
        v13 = *(unsigned __int16 **)&a1[2 * v9];
        v14 = *v13;
        *(&v26.Ptr + v10) = *((_QWORD *)v13 + 1);
        v15 = 2LL * (v7 + 3);
        *(&v26.Size + 2 * v10) = v14;
        *(&v26.Reserved + 2 * v10) = 0;
        *(&v26.Ptr + v15) = (ULONGLONG)&v25;
        *((_QWORD *)&v26.Size + v15) = 4LL;
        v16 = 2LL * (v7 + 4);
        v17 = *(_QWORD *)&a1[2 * v9 + 4];
        *(&v26.Size + 2 * v16) = LOWORD(a1[2 * v9 + 2]);
        v4 = v5 + 1;
        *(&v26.Ptr + v16) = v17;
        v6 = v4;
        *(&v26.Reserved + 2 * v16) = 0;
        ++v5;
        v23 = v4;
      }
      while ( v4 < v2 );
      v22 = SshpSessionId;
      *(_QWORD *)&v26.Size = 1LL;
      v26.Ptr = (ULONGLONG)&v22;
      v18 = 2LL * (v2 + 4 * v2 + 2);
      v28 = 4LL;
      v27 = &v23;
      *(&v26.Ptr + v18) = (ULONGLONG)&SshpSessionId;
      *((_QWORD *)&v26.Size + v18) = 8LL;
      SSHSupportEtwWrite(v18, &SLEEPSTUDY_EVT_SCENARIO_BLOCKER_DATA, v14, v4 + 4 * v4 + 3, &v26);
    }
  }
  v23 = 0;
  if ( a1[4] )
  {
    v19 = 0LL;
    do
    {
      v20 = v19 + 1;
      v21 = 3 * v20;
      CmpFreeTransientPoolWithTag(*(void **)&a1[6 * v20 + 4], *a1);
      *(_OWORD *)&a1[2 * v21] = 0LL;
      *(_QWORD *)&a1[2 * v21 + 4] = 0LL;
      v19 = v23 + 1;
      v23 = v19;
    }
    while ( (unsigned int)v19 < a1[4] );
  }
  a1[4] = 0;
}
