void __fastcall MiStoreLogWriteIssueRetry(__int64 a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v7; // r8
  int v8; // r9d
  __int64 v9; // r10
  __int64 *v10; // r11
  __int64 v11; // rax
  int v12; // [rsp+20h] [rbp-81h]
  int v13; // [rsp+28h] [rbp-79h]
  int v14; // [rsp+40h] [rbp-61h] BYREF
  int v15; // [rsp+44h] [rbp-5Dh] BYREF
  int v16; // [rsp+48h] [rbp-59h] BYREF
  int v17; // [rsp+4Ch] [rbp-55h] BYREF
  __int64 v18; // [rsp+50h] [rbp-51h] BYREF
  __int64 v19; // [rsp+58h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v20; // [rsp+60h] [rbp-41h] BYREF
  __int64 *v21; // [rsp+80h] [rbp-21h]
  int v22; // [rsp+88h] [rbp-19h]
  int v23; // [rsp+8Ch] [rbp-15h]
  __int64 *v24; // [rsp+90h] [rbp-11h]
  int v25; // [rsp+98h] [rbp-9h]
  int v26; // [rsp+9Ch] [rbp-5h]
  int *v27; // [rsp+A0h] [rbp-1h]
  int v28; // [rsp+A8h] [rbp+7h]
  int v29; // [rsp+ACh] [rbp+Bh]
  int *v30; // [rsp+B0h] [rbp+Fh]
  int v31; // [rsp+B8h] [rbp+17h]
  int v32; // [rsp+BCh] [rbp+1Bh]
  int *v33; // [rsp+C0h] [rbp+1Fh]
  int v34; // [rsp+C8h] [rbp+27h]
  int v35; // [rsp+CCh] [rbp+2Bh]
  int *v36; // [rsp+D0h] [rbp+2Fh]
  int v37; // [rsp+D8h] [rbp+37h]
  int v38; // [rsp+DCh] [rbp+3Bh]

  if ( *(_QWORD *)&qword_140C69568 && **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 2LL) )
    {
      v11 = *v10;
      v23 = 0;
      v26 = 0;
      v29 = 0;
      v32 = 0;
      v35 = 0;
      v38 = 0;
      v18 = v11;
      v21 = &v18;
      v19 = v10[1];
      v24 = &v19;
      v27 = &v14;
      v30 = &v15;
      v33 = &v16;
      v17 = a5;
      v36 = &v17;
      v16 = v8;
      v22 = 8;
      v25 = 8;
      v28 = 4;
      v31 = 4;
      v34 = 4;
      v37 = 4;
      v14 = a2;
      v15 = a3;
      tlgWriteEx_EtwWriteEx(v9, (unsigned __int8 *)&unk_140039738, v7, 1u, v12, v13, 8u, &v20);
    }
  }
}
