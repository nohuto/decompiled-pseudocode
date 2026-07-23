/*
 * XREFs of PopBatteryCheckCompositeCapacity @ 0x14077FFD0
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14077FB1C (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14025F340 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14025FE1C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x14034B7DC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 */

void __fastcall PopBatteryCheckCompositeCapacity(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned __int8 v6; // r9
  unsigned int v7; // ebx
  const CHAR *v8; // rsi
  const CHAR *v9; // r14
  const CHAR *v10; // r15
  const CHAR *v11; // r12
  const CHAR *v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  const CHAR *v20; // rdx
  bool v21; // zf
  const CHAR *v22; // rdx
  const CHAR *v23; // r9
  const CHAR *v24; // rdx
  unsigned __int8 v25; // r8
  const CHAR *v26; // r9
  const CHAR *v27; // rdx
  const CHAR *v28; // r9
  const CHAR *v29; // rdx
  const CHAR *v30; // r9
  const CHAR *v31; // rdx
  const CHAR *v32; // r9
  const CHAR *v33; // rdx
  int v34; // r10d
  unsigned int v35; // r11d
  __int64 v36; // r9
  unsigned int v37; // eax
  unsigned __int64 v38; // rax
  const CHAR *v39; // r8
  unsigned __int8 v40; // r11
  const CHAR *v41; // r8
  const CHAR *v42; // r8
  const CHAR *v43; // r8
  const CHAR *v44; // rdx
  const CHAR *v45; // r8
  const CHAR *v46; // rdx
  int v47; // r10d
  __int64 v48; // r11
  __int64 v49; // r9
  unsigned int v50; // eax
  unsigned __int64 v51; // rax
  int Buffer; // [rsp+40h] [rbp-C0h] BYREF
  int v53; // [rsp+44h] [rbp-BCh] BYREF
  int v54; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-B4h] BYREF
  int v56; // [rsp+50h] [rbp-B0h] BYREF
  int v57; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v58; // [rsp+58h] [rbp-A8h] BYREF
  int v59; // [rsp+5Ch] [rbp-A4h] BYREF
  int v60; // [rsp+60h] [rbp-A0h] BYREF
  int v61; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63[2]; // [rsp+70h] [rbp-90h] BYREF
  int *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  int *v66; // [rsp+A0h] [rbp-60h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  _BYTE v68[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v69[16]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v70[16]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v71[16]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v72[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v73[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v74[16]; // [rsp+110h] [rbp+10h] BYREF
  unsigned int *v75; // [rsp+120h] [rbp+20h]
  __int64 v76; // [rsp+128h] [rbp+28h]
  int *v77; // [rsp+130h] [rbp+30h]
  __int64 v78; // [rsp+138h] [rbp+38h]
  int *v79; // [rsp+140h] [rbp+40h]
  __int64 v80; // [rsp+148h] [rbp+48h]
  unsigned int *v81; // [rsp+150h] [rbp+50h]
  __int64 v82; // [rsp+158h] [rbp+58h]
  int *v83; // [rsp+160h] [rbp+60h]
  __int64 v84; // [rsp+168h] [rbp+68h]
  int *v85; // [rsp+170h] [rbp+70h]
  __int64 v86; // [rsp+178h] [rbp+78h]
  int *p_Buffer; // [rsp+180h] [rbp+80h]
  __int64 v88; // [rsp+188h] [rbp+88h]
  __int64 *v89; // [rsp+190h] [rbp+90h]
  __int64 v90; // [rsp+198h] [rbp+98h]

  *a3 = 0;
  if ( !dword_140C23C34 )
  {
    v6 = 0;
    dword_140C23DB8 = 0;
LABEL_3:
    LOBYTE(v7) = 0;
LABEL_4:
    dword_140C23DD8 = 0;
    goto LABEL_5;
  }
  v13 = (unsigned int)a1[1];
  LODWORD(v14) = 100000;
  if ( HIDWORD(qword_140C23C80) > (unsigned int)v13 )
  {
    if ( HIDWORD(qword_140C23C80) )
      v14 = 100000 * v13 / (unsigned __int64)HIDWORD(qword_140C23C80);
    else
      LODWORD(v14) = 0;
  }
  v15 = 0;
  if ( dword_140C23DAC != -1 )
    v15 = v14 - dword_140C23DAC;
  v16 = ((int)v14 + 500) / 0x3E8u;
  v17 = (dword_140C23DAC + 500) / 0x3E8u;
  if ( v16 != v17 )
    *a3 = v16 - v17;
  v6 = byte_140C23DBC;
  LOBYTE(v7) = byte_140C23DA8;
  dword_140C23DAC = v14;
  if ( a2 == 1 )
  {
    v6 = 0;
    dword_140C23DB8 = 0;
    LOBYTE(v7) = 1;
    goto LABEL_4;
  }
  if ( a2 != ((unk_140C23C60 & 1) == 0) )
  {
    v6 = 0;
LABEL_20:
    dword_140C23DB8 = v14;
    goto LABEL_3;
  }
  if ( byte_140C23C38 )
  {
    if ( byte_140C23DBC )
      goto LABEL_3;
    goto LABEL_20;
  }
  v18 = dword_140C23DB8;
  if ( dword_140C23DB8 < (unsigned int)v14 )
  {
    v18 = v14;
    dword_140C23DB8 = v14;
  }
  if ( v18 > (int)v14 + WeakChargerChargeDropMilliPercent )
    v6 = 1;
  v19 = v15 + dword_140C23DD8;
  dword_140C23DD8 = v19;
  if ( (int)abs32(v19) >= BatteryChargeTrajectoryThresholdMilliPercent )
  {
    v7 = v19 >> 31;
    goto LABEL_4;
  }
LABEL_5:
  v8 = "AC Power";
  v9 = "Battery Discharging";
  v10 = "Battery Charging";
  v11 = "Battery Critical";
  v12 = "Battery charge limiting mode";
  if ( byte_140C23DBC != v6 )
  {
    byte_140C23DBC = v6;
    Buffer = v6;
    ZwUpdateWnfStateData(&WNF_PO_WEAK_CHARGER, &Buffer, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140C02228 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
      {
        v64 = &v53;
        v20 = "AC Power";
        v54 = dword_140C23C34;
        v66 = &v54;
        v21 = (*a1 & 1) == 0;
        v53 = (unsigned __int8)byte_140C23DBC;
        if ( v21 )
          v20 = "DC Power";
        v65 = 4LL;
        v67 = 4LL;
        tlgCreate1Sz_char((__int64)v68, v20);
        v22 = "Battery Discharging";
        if ( (*a1 & 2) == 0 )
          v22 = "-";
        tlgCreate1Sz_char((__int64)v69, v22);
        v24 = "Battery Charging";
        if ( ((unsigned __int8)*a1 & v25) == 0 )
          v24 = v23;
        tlgCreate1Sz_char((__int64)v70, v24);
        v27 = "Battery Critical";
        if ( (*a1 & 8) == 0 )
          v27 = v26;
        tlgCreate1Sz_char((__int64)v71, v27);
        v29 = "Battery charge limiting mode";
        if ( (*a1 & 0x10) == 0 )
          v29 = v28;
        tlgCreate1Sz_char((__int64)v72, v29);
        v31 = "Battery charging state power supply present";
        if ( (*a1 & 0x20) == 0 )
          v31 = v30;
        tlgCreate1Sz_char((__int64)v73, v31);
        v33 = "Battery charging state adequate";
        if ( (*a1 & 0x40) == 0 )
          v33 = v32;
        tlgCreate1Sz_char((__int64)v74, v33);
        v36 = (unsigned int)a1[1];
        if ( HIDWORD(qword_140C23C80) )
          v37 = (unsigned int)((HIDWORD(qword_140C23C80) >> 1) + 100 * v36) / HIDWORD(qword_140C23C80);
        else
          v37 = v35;
        v55 = v37;
        v75 = &v55;
        v76 = 4LL;
        if ( HIDWORD(qword_140C23C80) )
          v38 = 100000 * v36 / (unsigned __int64)HIDWORD(qword_140C23C80);
        else
          LODWORD(v38) = v35;
        v56 = v38;
        v57 = v36;
        v77 = &v56;
        v58 = HIDWORD(qword_140C23C80);
        v79 = &v57;
        v78 = 4LL;
        v81 = &v58;
        v59 = a1[2];
        v83 = &v59;
        v60 = a1[3];
        v85 = &v60;
        p_Buffer = &v61;
        v89 = &v62;
        v80 = 4LL;
        v82 = 4LL;
        v84 = 4LL;
        v86 = 4LL;
        v61 = v34;
        v88 = 4LL;
        v62 = 0x1000000LL;
        v90 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02228,
          (unsigned __int8 *)&dword_1400295E4,
          0LL,
          0LL,
          0x13u,
          v63);
      }
    }
  }
  if ( byte_140C23DA8 != (_BYTE)v7 )
  {
    byte_140C23DA8 = v7;
    v61 = (unsigned __int8)v7;
    ZwUpdateWnfStateData(&WNF_PO_BATTERY_DISCHARGING, &v61, 4u, 0LL, 0LL, 0, 0);
    if ( (unsigned int)dword_140C02228 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
      {
        v64 = &v60;
        v59 = dword_140C23C34;
        v66 = &v59;
        v21 = (*a1 & 1) == 0;
        v60 = (unsigned __int8)byte_140C23DA8;
        if ( v21 )
          v8 = "DC Power";
        v65 = 4LL;
        v67 = 4LL;
        tlgCreate1Sz_char((__int64)v68, v8);
        if ( (*a1 & 2) == 0 )
          v9 = "-";
        tlgCreate1Sz_char((__int64)v69, v9);
        if ( ((unsigned __int8)*a1 & v40) == 0 )
          v10 = v39;
        tlgCreate1Sz_char((__int64)v70, v10);
        if ( (*a1 & 8) == 0 )
          v11 = v41;
        tlgCreate1Sz_char((__int64)v71, v11);
        if ( (*a1 & 0x10) == 0 )
          v12 = v42;
        tlgCreate1Sz_char((__int64)v72, v12);
        v44 = "Battery charging state power supply present";
        if ( (*a1 & 0x20) == 0 )
          v44 = v43;
        tlgCreate1Sz_char((__int64)v73, v44);
        v46 = "Battery charging state adequate";
        if ( (*a1 & 0x40) == 0 )
          v46 = v45;
        tlgCreate1Sz_char((__int64)v74, v46);
        v49 = (unsigned int)a1[1];
        if ( HIDWORD(qword_140C23C80) )
          v50 = (unsigned int)((HIDWORD(qword_140C23C80) >> 1) + 100 * v49) / HIDWORD(qword_140C23C80);
        else
          v50 = 0;
        v58 = v50;
        v75 = &v58;
        v76 = v48;
        if ( HIDWORD(qword_140C23C80) )
          v51 = 100000 * v49 / (unsigned __int64)HIDWORD(qword_140C23C80);
        else
          LODWORD(v51) = 0;
        v57 = v51;
        v56 = v49;
        v77 = &v57;
        v55 = HIDWORD(qword_140C23C80);
        v79 = &v56;
        v78 = v48;
        v81 = &v55;
        v54 = a1[2];
        v83 = &v54;
        v53 = a1[3];
        v85 = &v53;
        p_Buffer = &Buffer;
        v80 = v48;
        v82 = v48;
        v84 = v48;
        v86 = v48;
        Buffer = v47;
        v88 = v48;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02228,
          (unsigned __int8 *)byte_140029799,
          0LL,
          0LL,
          0x12u,
          v63);
      }
    }
  }
}
