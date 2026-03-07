void __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r11
  char v11; // al
  _QWORD *v12; // r9
  int v13; // r10d
  char v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+68h] [rbp-98h] BYREF
  __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24[6]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v25[16]; // [rsp+B0h] [rbp-50h] BYREF
  int *v26; // [rsp+C0h] [rbp-40h]
  __int64 v27; // [rsp+C8h] [rbp-38h]
  __int64 *v28; // [rsp+D0h] [rbp-30h]
  __int64 v29; // [rsp+D8h] [rbp-28h]
  __int64 *v30; // [rsp+E0h] [rbp-20h]
  __int64 v31; // [rsp+E8h] [rbp-18h]
  __int64 *v32; // [rsp+F0h] [rbp-10h]
  __int64 v33; // [rsp+F8h] [rbp-8h]
  __int64 *v34; // [rsp+100h] [rbp+0h]
  __int64 v35; // [rsp+108h] [rbp+8h]
  __int64 *v36; // [rsp+110h] [rbp+10h]
  __int64 v37; // [rsp+118h] [rbp+18h]
  int *v38; // [rsp+120h] [rbp+20h]
  __int64 v39; // [rsp+128h] [rbp+28h]
  __int64 *v40; // [rsp+130h] [rbp+30h]
  __int64 v41; // [rsp+138h] [rbp+38h]

  v16 = 0LL;
  v15 = 0;
  if ( *(_QWORD *)&qword_140C69568 )
  {
    MiFillLogProcessInfo(a1, &v15, &v16);
    if ( *v8 > 5u )
    {
      if ( (unsigned __int8)tlgKeywordOn(v8, 1LL) )
      {
        v11 = *(_BYTE *)(v10 + 184) & 7;
        v24[5] = v9;
        v14 = v11;
        v24[4] = (__int64)&v14;
        tlgCreate1Sz_char(v25, v16);
        v26 = &v17;
        v17 = v15;
        v28 = &v19;
        v27 = 4LL;
        v30 = &v20;
        v21 = v12[2152];
        v32 = &v21;
        v22 = v12[2200];
        v34 = &v22;
        v23 = v12[2228];
        v36 = &v23;
        v38 = &v18;
        LODWORD(v16) = a5;
        v40 = &v16;
        v19 = a2;
        v29 = 8LL;
        v20 = a3;
        v31 = 8LL;
        v33 = 8LL;
        v35 = 8LL;
        v37 = 8LL;
        v18 = a4;
        v39 = 4LL;
        v41 = 4LL;
        tlgWriteEx_EtwWriteEx(v13, (int)&byte_1400384D0, 0, 1, 0, 0, 0xCu, (__int64)v24);
      }
    }
  }
}
