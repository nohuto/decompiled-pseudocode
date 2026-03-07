char __fastcall PpmEventQosClassPolicyV1(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  unsigned int v5; // ecx
  int v6; // eax
  __int64 v7; // rcx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  int v10; // [rsp+34h] [rbp-35h] BYREF
  _WORD v11[3]; // [rsp+38h] [rbp-31h] BYREF
  int v12; // [rsp+3Eh] [rbp-2Bh]
  char v13; // [rsp+42h] [rbp-27h]
  int v14; // [rsp+43h] [rbp-26h]
  int v15; // [rsp+47h] [rbp-22h]
  char v16; // [rsp+4Bh] [rbp-1Eh]
  char v17; // [rsp+4Ch] [rbp-1Dh]
  int v18; // [rsp+4Dh] [rbp-1Ch]
  char v19; // [rsp+51h] [rbp-18h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-9h] BYREF
  int *v21; // [rsp+70h] [rbp+7h]
  int v22; // [rsp+78h] [rbp+Fh]
  int v23; // [rsp+7Ch] [rbp+13h]
  __int64 v24; // [rsp+80h] [rbp+17h]
  int v25; // [rsp+88h] [rbp+1Fh]
  int v26; // [rsp+8Ch] [rbp+23h]
  int *v27; // [rsp+90h] [rbp+27h]
  int v28; // [rsp+98h] [rbp+2Fh]
  int v29; // [rsp+9Ch] [rbp+33h]
  _WORD *v30; // [rsp+A0h] [rbp+37h]
  int v31; // [rsp+A8h] [rbp+3Fh]
  int v32; // [rsp+ACh] [rbp+43h]

  v2 = &PPM_ETW_PERF_QOS_CLASS_POLICY_V2;
  v3 = (const EVENT_DESCRIPTOR *)PPM_ETW_PERF_QOS_CLASS_POLICY_RUNDOWN_V2;
  if ( !a2 )
    v3 = &PPM_ETW_PERF_QOS_CLASS_POLICY_V2;
  if ( PpmEtwRegistered )
  {
    LOBYTE(v2) = EtwEventEnabled(PpmEtwHandle, v3);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v9 = 0;
      UserData.Ptr = a1 + 432;
      LODWORD(v2) = 0;
      v5 = 0;
      UserData.Size = 4;
      do
      {
        v23 = 0;
        v26 = 0;
        v21 = &v9;
        v22 = 4;
        v25 = 4;
        v24 = a1 + 4 * ((unsigned int)v2 + 180LL);
        v6 = *(unsigned __int16 *)(a1 + 2LL * v5 + 748);
        v29 = 0;
        v10 = v6;
        v7 = 28LL * v5;
        v27 = &v10;
        v28 = 4;
        v15 = *(unsigned __int8 *)(v7 + a1 + 545);
        v12 = *(_DWORD *)(v7 + a1 + 536);
        v13 = *(_BYTE *)(v7 + a1 + 540);
        v17 = *(_BYTE *)(v7 + a1 + 547);
        v11[1] = *(_WORD *)(v7 + a1 + 528);
        v11[0] = *(_WORD *)(v7 + a1 + 524);
        v11[2] = *(_WORD *)(v7 + a1 + 532);
        v16 = *(_BYTE *)(v7 + a1 + 546);
        v14 = *(unsigned __int8 *)(v7 + a1 + 544);
        v18 = *(unsigned __int8 *)(v7 + a1 + 549);
        LOBYTE(v6) = *(_BYTE *)(v7 + a1 + 548);
        v32 = 0;
        v19 = v6;
        v30 = v11;
        v31 = 26;
        EtwWrite(PpmEtwHandle, v3, 0LL, 5u, &UserData);
        LODWORD(v2) = v9 + 1;
        v9 = (int)v2;
        v5 = (unsigned int)v2;
      }
      while ( (unsigned int)v2 < 7 );
    }
  }
  return (char)v2;
}
