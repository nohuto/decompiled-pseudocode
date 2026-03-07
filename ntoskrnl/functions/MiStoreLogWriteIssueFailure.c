void __fastcall MiStoreLogWriteIssueFailure(int a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v8; // r8
  int v9; // r9d
  __int64 v10; // r10
  __int64 *v11; // r11
  int v12; // [rsp+20h] [rbp-E0h]
  int v13; // [rsp+28h] [rbp-D8h]
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  int v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+4Ch] [rbp-B4h] BYREF
  int v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+70h] [rbp-90h] BYREF
  int *v22; // [rsp+90h] [rbp-70h]
  int v23; // [rsp+98h] [rbp-68h]
  int v24; // [rsp+9Ch] [rbp-64h]
  __int64 *v25; // [rsp+A0h] [rbp-60h]
  int v26; // [rsp+A8h] [rbp-58h]
  int v27; // [rsp+ACh] [rbp-54h]
  __int64 *v28; // [rsp+B0h] [rbp-50h]
  int v29; // [rsp+B8h] [rbp-48h]
  int v30; // [rsp+BCh] [rbp-44h]
  int *v31; // [rsp+C0h] [rbp-40h]
  int v32; // [rsp+C8h] [rbp-38h]
  int v33; // [rsp+CCh] [rbp-34h]
  int *v34; // [rsp+D0h] [rbp-30h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  int *v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+E8h] [rbp-18h]
  int v39; // [rsp+ECh] [rbp-14h]
  int *v40; // [rsp+F0h] [rbp-10h]
  int v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+FCh] [rbp-4h]

  if ( *(_QWORD *)&qword_140C69568 && **(_DWORD **)&qword_140C69568 > 5u )
  {
    if ( tlgKeywordOn(*(__int64 *)&qword_140C69568, 2LL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v33 = 0;
      v36 = 0;
      v39 = 0;
      v42 = 0;
      v22 = &v14;
      v19 = *v11;
      v25 = &v19;
      v20 = v11[1];
      v28 = &v20;
      v31 = &v15;
      v34 = &v16;
      v17 = a5;
      v37 = &v17;
      v18 = a6;
      v40 = &v18;
      v16 = v9;
      v23 = 4;
      v26 = 8;
      v29 = 8;
      v32 = 4;
      v35 = 4;
      v38 = 4;
      v41 = 4;
      v14 = a1;
      v15 = a3;
      tlgWriteEx_EtwWriteEx(v10, (unsigned __int8 *)&dword_1400397BC, v8, 1u, v12, v13, 9u, &v21);
    }
  }
}
