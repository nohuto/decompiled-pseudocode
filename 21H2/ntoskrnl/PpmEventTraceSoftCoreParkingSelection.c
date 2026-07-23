/*
 * XREFs of PpmEventTraceSoftCoreParkingSelection @ 0x14057B280
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x14022C800 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwWriteEx @ 0x14027F840 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall PpmEventTraceSoftCoreParkingSelection(
        _QWORD *a1,
        unsigned int a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        __int64 a8,
        char a9,
        char a10)
{
  _UNKNOWN **v10; // rax
  __int64 v11; // rsi
  REGHANDLE v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v24; // [rsp+78h] [rbp-90h]
  __int64 v25; // [rsp+80h] [rbp-88h]
  __int64 *v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  __int64 *v28; // [rsp+98h] [rbp-70h]
  __int64 v29; // [rsp+A0h] [rbp-68h]
  __int64 *v30; // [rsp+A8h] [rbp-60h]
  __int64 v31; // [rsp+B0h] [rbp-58h]
  char *v32; // [rsp+B8h] [rbp-50h]
  __int64 v33; // [rsp+C0h] [rbp-48h]
  char *v34; // [rsp+C8h] [rbp-40h]
  __int64 v35; // [rsp+D0h] [rbp-38h]
  char *v36; // [rsp+D8h] [rbp-30h]
  __int64 v37; // [rsp+E0h] [rbp-28h]
  char *v38; // [rsp+E8h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-18h]
  __int64 *v40; // [rsp+F8h] [rbp-10h]
  __int64 v41; // [rsp+100h] [rbp-8h]
  char *v42; // [rsp+108h] [rbp+0h]
  __int64 v43; // [rsp+110h] [rbp+8h]
  char *v44; // [rsp+118h] [rbp+10h]
  __int64 v45; // [rsp+120h] [rbp+18h]
  char *v46; // [rsp+128h] [rbp+20h]
  __int64 v47; // [rsp+130h] [rbp+28h]
  char *v48; // [rsp+138h] [rbp+30h]
  __int64 v49; // [rsp+140h] [rbp+38h]
  _UNKNOWN *retaddr; // [rsp+170h] [rbp+68h] BYREF
  char v51; // [rsp+188h] [rbp+80h] BYREF
  char v52; // [rsp+190h] [rbp+88h] BYREF

  v10 = &retaddr;
  v52 = a4;
  v51 = a3;
  v11 = a2;
  if ( PpmEtwRegistered )
  {
    v13 = PpmEtwHandle;
    LOBYTE(v10) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_SELECTION);
    if ( (_BYTE)v10 )
    {
      v14 = a1[5];
      v15 = &a1[v11 + 2];
      *(_QWORD *)&UserData.Size = 2LL;
      v16 = *v15;
      a8 &= *v15;
      v20 = v16 & v14;
      v17 = v16 & a1[4];
      v24 = v15;
      v21 = v17;
      v18 = v16 & a1[6];
      v25 = 8LL;
      v22 = v18;
      v27 = 8LL;
      UserData.Ptr = (ULONGLONG)a1 + 4;
      v26 = &v20;
      v28 = &v21;
      v30 = &v22;
      v32 = &v52;
      v34 = &a5;
      v36 = &a6;
      v38 = &a7;
      v40 = &a8;
      v42 = &a9;
      v29 = 8LL;
      v44 = (char *)a1 + v11 + 138;
      v46 = &v51;
      v48 = &a10;
      v31 = 8LL;
      v33 = 1LL;
      v35 = 1LL;
      v37 = 8LL;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 1LL;
      v47 = 1LL;
      v49 = 4LL;
      LOBYTE(v10) = EtwWriteEx(v13, &PPM_ETW_SOFT_PARKING_SELECTION, 0LL, 0, 0LL, 0LL, 0xEu, &UserData);
    }
  }
  return (char)v10;
}
