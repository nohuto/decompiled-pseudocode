__int64 __fastcall PpmEventTraceProcessorIdleAccounting(__int64 a1)
{
  void *v2; // rbx
  _BYTE *v3; // rax
  _DWORD *v4; // r14
  int v5; // esi
  unsigned int v6; // edi
  __int64 Pool2; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // r14
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  void *v14; // r12
  __int16 v15; // cx
  ULONG UserDataCount; // eax
  __int16 v18; // [rsp+48h] [rbp-49h] BYREF
  unsigned int v19; // [rsp+4Ch] [rbp-45h] BYREF
  unsigned __int64 v20; // [rsp+50h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+58h] [rbp-39h] BYREF
  __int16 *v22; // [rsp+68h] [rbp-29h]
  __int64 v23; // [rsp+70h] [rbp-21h]
  __int64 v24; // [rsp+78h] [rbp-19h]
  __int64 v25; // [rsp+80h] [rbp-11h]
  unsigned __int64 *v26; // [rsp+88h] [rbp-9h]
  __int64 v27; // [rsp+90h] [rbp-1h]
  int *v28; // [rsp+98h] [rbp+7h]
  __int64 v29; // [rsp+A0h] [rbp+Fh]
  void *v30; // [rsp+A8h] [rbp+17h]
  int v31; // [rsp+B0h] [rbp+1Fh]
  int v32; // [rsp+B4h] [rbp+23h]

  v2 = 0LL;
  v18 = 0;
  v19 = 0;
  v20 = 0LL;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_IDLE_ACCOUNTING_RUNDOWN) )
    {
      v3 = *(_BYTE **)(a1 + 33600);
      if ( v3 )
      {
        v4 = *(_DWORD **)(a1 + 33608);
        if ( v4 )
        {
          v5 = 0;
          v6 = *v4;
          if ( *v3 == 1 )
          {
            v5 = 80 * v6;
            Pool2 = ExAllocatePool2(64LL, 80 * v6, 1699565648LL);
            v2 = (void *)Pool2;
            if ( !Pool2 )
              return 0LL;
            if ( v6 )
            {
              v8 = (_QWORD *)(Pool2 + 32);
              v9 = (__int64 *)(v4 + 38);
              v10 = v6;
              do
              {
                *(v8 - 4) = *(v9 - 1);
                v11 = *v9;
                v9 += 126;
                *(v8 - 2) = v11;
                *(v8 - 1) = *(v9 - 131);
                v12 = *(v9 - 130);
                *v8 = v12;
                *v8 = *(v9 - 120) + v12;
                v8 += 10;
                *(v8 - 7) = *(v9 - 133);
                *(v8 - 6) = *(v9 - 134);
                *(v8 - 5) = *(v9 - 135);
                *(v8 - 13) = *(v9 - 125);
                *(v8 - 9) = *(v9 - 123);
                *(v8 - 8) = *(v9 - 124);
                --v10;
              }
              while ( v10 );
            }
          }
          v13 = ExAllocatePool2(64LL, 416 * v6 + 24, 1699565648LL);
          v14 = (void *)v13;
          if ( v13 )
          {
            PpmTranslateIdleAccounting((_QWORD *)(a1 + 33600), v13, &v20);
            v15 = *(unsigned __int8 *)(a1 + 208);
            v22 = &v18;
            UserData.Ptr = (ULONGLONG)v14;
            v24 = a1 + 209;
            v26 = &v20;
            UserData.Size = 416 * v6 + 24;
            UserDataCount = 5;
            UserData.Reserved = 0;
            v18 = v15;
            v23 = 2LL;
            v25 = 1LL;
            v27 = 8LL;
            if ( v2 )
            {
              UserDataCount = 6;
              v30 = v2;
              v31 = v5;
              v32 = 0;
            }
            else
            {
              v6 = 0;
            }
            v19 = v6;
            v28 = (int *)&v19;
            v29 = 4LL;
            EtwWriteEx(PpmEtwHandle, &PPM_ETW_IDLE_ACCOUNTING_RUNDOWN, 0LL, 0, 0LL, 0LL, UserDataCount, &UserData);
            ExFreePoolWithTag(v14, 0x654D5050u);
          }
          if ( v2 )
            ExFreePoolWithTag(v2, 0x654D5050u);
        }
      }
    }
  }
  return 0LL;
}
