/*
 * XREFs of MiLogTrimWs @ 0x140318224
 * Callers:
 *     MiTrimWorkingSet @ 0x140318000 (MiTrimWorkingSet.c)
 * Callees:
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     MiFillLogProcessInfo @ 0x1403182E0 (MiFillLogProcessInfo.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x14032C1BC (_tlgWriteEx_EtwWriteEx.c)
 *     _tlgCreate1Sz_char @ 0x14034B7DC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 */

void __fastcall MiLogTrimWs(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // al
  _QWORD *v14; // r9
  int v15; // r10d
  int v16; // r11d
  char v17; // [rsp+40h] [rbp-128h] BYREF
  int v18; // [rsp+44h] [rbp-124h] BYREF
  __int64 v19; // [rsp+48h] [rbp-120h] BYREF
  int v20; // [rsp+50h] [rbp-118h] BYREF
  int v21; // [rsp+54h] [rbp-114h] BYREF
  __int64 v22; // [rsp+58h] [rbp-110h] BYREF
  __int64 v23; // [rsp+60h] [rbp-108h] BYREF
  __int64 v24; // [rsp+68h] [rbp-100h] BYREF
  __int64 v25; // [rsp+70h] [rbp-F8h] BYREF
  __int64 v26; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v27[6]; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v28[16]; // [rsp+B0h] [rbp-B8h] BYREF
  int *v29; // [rsp+C0h] [rbp-A8h]
  __int64 v30; // [rsp+C8h] [rbp-A0h]
  __int64 *v31; // [rsp+D0h] [rbp-98h]
  __int64 v32; // [rsp+D8h] [rbp-90h]
  __int64 *v33; // [rsp+E0h] [rbp-88h]
  __int64 v34; // [rsp+E8h] [rbp-80h]
  __int64 *v35; // [rsp+F0h] [rbp-78h]
  __int64 v36; // [rsp+F8h] [rbp-70h]
  __int64 *v37; // [rsp+100h] [rbp-68h]
  __int64 v38; // [rsp+108h] [rbp-60h]
  __int64 *v39; // [rsp+110h] [rbp-58h]
  __int64 v40; // [rsp+118h] [rbp-50h]
  int *v41; // [rsp+120h] [rbp-48h]
  __int64 v42; // [rsp+128h] [rbp-40h]
  __int64 *v43; // [rsp+130h] [rbp-38h]
  __int64 v44; // [rsp+138h] [rbp-30h]

  v19 = 0LL;
  v18 = 0;
  if ( *(_QWORD *)&qword_140C4EEE0 )
  {
    MiFillLogProcessInfo(a1, &v18, &v19, *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174)));
    if ( *v9 > 5u )
    {
      if ( tlgKeywordOn((__int64)v9, 1LL) )
      {
        v13 = *(_BYTE *)(a1 + 184) & 7;
        v27[5] = v10;
        v17 = v13;
        v27[4] = (__int64)&v17;
        tlgCreate1Sz_char(v28, v19, v11, v12);
        v29 = &v20;
        v20 = v18;
        v31 = &v22;
        v30 = 4LL;
        v33 = &v23;
        v24 = v14[888];
        v35 = &v24;
        v25 = v14[936];
        v37 = &v25;
        v26 = v14[950];
        v39 = &v26;
        v41 = &v21;
        LODWORD(v19) = a5;
        v43 = &v19;
        v22 = a2;
        v32 = 8LL;
        v23 = a3;
        v34 = 8LL;
        v36 = 8LL;
        v38 = 8LL;
        v40 = 8LL;
        v21 = a4;
        v42 = 4LL;
        v44 = 4LL;
        tlgWriteEx_EtwWriteEx(v16, (int)&dword_140025E34, 0, v15, 0, 0, 0xCu, (__int64)v27);
      }
    }
  }
}
