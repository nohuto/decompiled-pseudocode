_UNKNOWN **__fastcall PpmPerfRecordMostActiveWorkloadClass(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v2; // bl
  __int64 v3; // rdi
  char v4; // r15
  char v5; // si
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int16 *v9; // rax
  __int64 v10; // rdi
  __int64 Prcb; // rax
  __int64 v12; // rdx
  bool v13; // cc
  unsigned __int64 v14; // rcx
  unsigned int v15; // edi
  bool v16; // cf
  char v17; // dl
  char v18; // [rsp+28h] [rbp-E0h]
  char v19; // [rsp+29h] [rbp-DFh]
  unsigned int v20; // [rsp+2Ch] [rbp-DCh] BYREF
  unsigned int v21; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v22; // [rsp+40h] [rbp-C8h]
  unsigned __int64 v23; // [rsp+48h] [rbp-C0h]
  __int64 v24; // [rsp+50h] [rbp-B8h]
  unsigned __int16 *v25[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v26; // [rsp+68h] [rbp-A0h]
  int v27; // [rsp+6Ah] [rbp-9Eh]
  __int16 v28; // [rsp+6Eh] [rbp-9Ah]
  _QWORD v29[32]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v30[32]; // [rsp+178h] [rbp+70h] BYREF
  _UNKNOWN *retaddr; // [rsp+2B0h] [rbp+1A8h] BYREF

  result = &retaddr;
  v2 = 0;
  v24 = a1;
  v3 = a1;
  v27 = 0;
  v28 = 0;
  v20 = 0;
  if ( PpmHeteroHgsParkingEnabled && (unsigned int)PpmHeteroWorkloadClasses <= 0x20 )
  {
    v4 = -1;
    v5 = -1;
    v6 = 0LL;
    v7 = 0LL;
    memset(v30, 0, sizeof(v30));
    memset(v29, 0, sizeof(v29));
    v21 = 0;
    if ( PpmHeteroWorkloadClasses )
    {
      do
      {
        v8 = v6;
        v26 = *(_WORD *)(v3 + 4);
        v9 = *(unsigned __int16 **)(v3 + 16);
        v10 = v21;
        v25[1] = v9;
        v22 = v7;
        v19 = v5;
        v23 = v7;
        v18 = v4;
        v25[0] = 0LL;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v20, v25) )
        {
          Prcb = KeGetPrcb(v20);
          v12 = *(_QWORD *)(Prcb + 34136);
          v30[v10] += *(_QWORD *)(*(_QWORD *)(Prcb + 34144) + 8 * v10 + 8);
          v29[v10] += *(_QWORD *)(v12 + 8 * v10 + 8);
        }
        v13 = v30[v10] <= v6;
        v5 = v10;
        v6 = v30[v10];
        v14 = v29[v10];
        if ( v13 )
          v6 = v8;
        v4 = v10;
        v7 = v29[v10];
        if ( v13 )
          v4 = v18;
        if ( v14 <= v22 )
          v7 = v22;
        if ( v14 <= v23 )
          v5 = v19;
        v15 = v10 + 1;
        v16 = v15 < PpmHeteroWorkloadClasses;
        v21 = v15;
        v3 = v24;
      }
      while ( v16 );
    }
    v17 = 0;
    *(_QWORD *)(v3 + 176) = v7;
    if ( v5 != -1 )
      v17 = v5;
    *(_QWORD *)(v3 + 168) = v6;
    *(_BYTE *)(v3 + 164) = v17;
    if ( v4 != -1 )
      v2 = v4;
    *(_BYTE *)(v3 + 163) = v2;
    return (_UNKNOWN **)PpmEventHgsActiveWorkloadClass(v3, v30, v29);
  }
  return result;
}
