void __fastcall PpmEventTraceParkNodeRundown(__int64 a1)
{
  unsigned int v2; // edx
  __int64 v3; // rcx
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // [rsp+30h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-29h] BYREF
  __int64 v8; // [rsp+50h] [rbp-19h]
  int v9; // [rsp+58h] [rbp-11h]
  int v10; // [rsp+5Ch] [rbp-Dh]
  __int64 v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  __int64 v14; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  __int64 v17; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  __int64 *v20; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  __int64 v23; // [rsp+A0h] [rbp+37h]
  int v24; // [rsp+A8h] [rbp+3Fh]
  int v25; // [rsp+ACh] [rbp+43h]

  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN) )
  {
    UserData.Reserved = 0;
    v10 = 0;
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v6 = 0LL;
    v2 = *(unsigned __int8 *)(a1 + 11);
    UserData.Ptr = a1 + 4;
    v8 = a1 + 16;
    v11 = a1 + 24;
    v14 = a1 + 112;
    v17 = a1 + 114;
    UserData.Size = 2;
    v9 = 8;
    v12 = 8;
    v15 = 1;
    v18 = 1;
    if ( (_BYTE)v2 )
    {
      v3 = 0LL;
      v4 = (_QWORD *)(*(_QWORD *)(a1 + 184) + 24LL);
      v5 = v2;
      do
      {
        v3 |= *v4;
        v4 += 13;
        v6 = v3;
        --v5;
      }
      while ( v5 );
    }
    v22 = 0;
    v25 = 0;
    v20 = &v6;
    v23 = a1 + 40;
    v21 = 8;
    v24 = 8;
    EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_RUNDOWN, 0LL, 7u, &UserData);
  }
}
