/*
 * XREFs of PpmEventTraceSoftCoreParkingSelection @ 0x14045AE9E
 * Callers:
 *     PpmParkCalculateCoreParkingMask @ 0x1402E7970 (PpmParkCalculateCoreParkingMask.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
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
        char a10,
        char a11)
{
  _UNKNOWN **v11; // rax
  __int64 v12; // rsi
  REGHANDLE v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  char v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int64 v27; // [rsp+78h] [rbp-88h]
  __int64 *v28; // [rsp+80h] [rbp-80h]
  __int64 v29; // [rsp+88h] [rbp-78h]
  __int64 *v30; // [rsp+90h] [rbp-70h]
  __int64 v31; // [rsp+98h] [rbp-68h]
  __int64 *v32; // [rsp+A0h] [rbp-60h]
  __int64 v33; // [rsp+A8h] [rbp-58h]
  char *v34; // [rsp+B0h] [rbp-50h]
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char *v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C8h] [rbp-38h]
  char *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  char *v40; // [rsp+E0h] [rbp-20h]
  __int64 v41; // [rsp+E8h] [rbp-18h]
  __int64 *v42; // [rsp+F0h] [rbp-10h]
  __int64 v43; // [rsp+F8h] [rbp-8h]
  char *v44; // [rsp+100h] [rbp+0h]
  __int64 v45; // [rsp+108h] [rbp+8h]
  __int64 v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  char *v48; // [rsp+120h] [rbp+20h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  char *v50; // [rsp+130h] [rbp+30h]
  __int64 v51; // [rsp+138h] [rbp+38h]
  char *v52; // [rsp+140h] [rbp+40h]
  __int64 v53; // [rsp+148h] [rbp+48h]
  char *v54; // [rsp+150h] [rbp+50h]
  __int64 v55; // [rsp+158h] [rbp+58h]
  __int64 v56; // [rsp+160h] [rbp+60h]
  __int64 v57; // [rsp+168h] [rbp+68h]
  _UNKNOWN *retaddr; // [rsp+198h] [rbp+98h] BYREF
  char v59; // [rsp+1B0h] [rbp+B0h] BYREF
  char v60; // [rsp+1B8h] [rbp+B8h] BYREF

  v11 = &retaddr;
  v60 = a4;
  v59 = a3;
  v12 = a2;
  if ( PpmEtwRegistered )
  {
    v14 = PpmEtwHandle;
    LOBYTE(v11) = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_SOFT_PARKING_SELECTION);
    if ( (_BYTE)v11 )
    {
      v15 = a1[4];
      v16 = a1[23] + 104 * v12;
      v17 = *(_QWORD *)(v16 + 16);
      a8 &= v17;
      v22 = v17 & v15;
      v18 = v17 & a1[3];
      v26 = v16 + 16;
      v23 = v18;
      v19 = v17 & a1[5];
      v21 = v12;
      v24 = v19;
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)a1 + 4;
      v28 = &v22;
      v30 = &v23;
      v32 = &v24;
      v34 = &v60;
      v36 = &a5;
      v38 = &a6;
      v40 = &a7;
      v42 = &a8;
      v44 = &a9;
      v46 = v16 + 4;
      v48 = &v59;
      v50 = &a10;
      v52 = &a11;
      v54 = &v21;
      v56 = v16 + 3;
      v27 = 8LL;
      v29 = 8LL;
      v31 = 8LL;
      v33 = 8LL;
      v35 = 1LL;
      v37 = 1LL;
      v39 = 8LL;
      v41 = 8LL;
      v43 = 8LL;
      v45 = 8LL;
      v47 = 1LL;
      v49 = 1LL;
      v51 = 4LL;
      v53 = 4LL;
      v55 = 1LL;
      v57 = 1LL;
      LOBYTE(v11) = EtwWriteEx(v14, &PPM_ETW_SOFT_PARKING_SELECTION, 0LL, 0, 0LL, 0LL, 0x11u, &UserData);
    }
  }
  return (char)v11;
}
