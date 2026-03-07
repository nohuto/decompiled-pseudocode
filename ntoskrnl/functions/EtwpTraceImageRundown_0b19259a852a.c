void __fastcall EtwpTraceImageRundown(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 *a3,
        int a4,
        __int64 a5,
        char a6,
        char a7)
{
  int v8; // r9d
  __int64 v10; // r10
  unsigned int v11; // r8d
  __int64 v12; // rdx
  _QWORD v13[2]; // [rsp+30h] [rbp-41h] BYREF
  int v14; // [rsp+40h] [rbp-31h]
  int v15; // [rsp+44h] [rbp-2Dh]
  int v16; // [rsp+48h] [rbp-29h]
  char v17; // [rsp+4Ch] [rbp-25h]
  char v18; // [rsp+4Dh] [rbp-24h]
  __int16 v19; // [rsp+4Eh] [rbp-23h]
  __int64 v20; // [rsp+50h] [rbp-21h]
  _BYTE v21[24]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v22[3]; // [rsp+70h] [rbp-1h] BYREF
  int v23; // [rsp+88h] [rbp+17h]
  int v24; // [rsp+8Ch] [rbp+1Bh]
  __int64 *v25; // [rsp+90h] [rbp+1Fh]
  __int64 v26; // [rsp+98h] [rbp+27h]

  if ( a3 )
  {
    v8 = *a3;
    memset(v21, 0, sizeof(v21));
    if ( (_WORD)v8 )
    {
      v10 = *((_QWORD *)a3 + 1);
      if ( v10 )
      {
        v11 = *(_DWORD *)a1;
        v12 = *(_QWORD *)(a1 + 1096);
        v14 = a4;
        v13[0] = *(_QWORD *)(a5 + 8);
        v13[1] = *(_QWORD *)(a5 + 24);
        v15 = *(_DWORD *)(a5 + 40);
        v17 = a6;
        v18 = a7;
        v20 = *(_QWORD *)(a5 + 16);
        v22[0] = v13;
        v23 = v8;
        v25 = &EtwpNull;
        v16 = 0;
        v19 = 0;
        *(_OWORD *)v21 = 0LL;
        v22[1] = 56LL;
        v22[2] = v10;
        v24 = 0;
        v26 = 2LL;
        EtwpLogKernelEvent((__int64)v22, v12, v11, 3u, a2, 0x401803u);
      }
    }
  }
}
