void __fastcall PopBatteryCheckCompositeCapacity(_DWORD *a1, int a2, _DWORD *a3)
{
  unsigned int *v3; // rbx
  int v7; // r8d
  __int64 v8; // rax
  unsigned __int64 v9; // r9
  int v10; // r10d
  unsigned int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // edx
  const CHAR *v14; // rdx
  bool v15; // zf
  const CHAR *v16; // rdx
  const CHAR *v17; // r8
  const CHAR *v18; // rdx
  const CHAR *v19; // r8
  const CHAR *v20; // rdx
  const CHAR *v21; // r8
  const CHAR *v22; // rdx
  const CHAR *v23; // r8
  const CHAR *v24; // rdx
  const CHAR *v25; // r8
  const CHAR *v26; // rdx
  const CHAR *v27; // r8
  const CHAR *v28; // rdx
  int v29; // r11d
  int v30; // r8d
  unsigned int v31; // r10d
  unsigned int v32; // eax
  unsigned __int64 v33; // rax
  int v34; // [rsp+40h] [rbp-C0h] BYREF
  int v35; // [rsp+44h] [rbp-BCh] BYREF
  int v36; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+54h] [rbp-ACh] BYREF
  int v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41; // [rsp+5Ch] [rbp-A4h] BYREF
  int v42; // [rsp+60h] [rbp-A0h] BYREF
  int v43; // [rsp+64h] [rbp-9Ch] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+70h] [rbp-90h] BYREF
  int *v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  int *v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  char v49[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v50[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v51[16]; // [rsp+D0h] [rbp-30h] BYREF
  char v52[16]; // [rsp+E0h] [rbp-20h] BYREF
  char v53[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v54[16]; // [rsp+100h] [rbp+0h] BYREF
  char v55[16]; // [rsp+110h] [rbp+10h] BYREF
  char v56[16]; // [rsp+120h] [rbp+20h] BYREF
  unsigned int *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  int *v59; // [rsp+140h] [rbp+40h]
  __int64 v60; // [rsp+148h] [rbp+48h]
  int *v61; // [rsp+150h] [rbp+50h]
  __int64 v62; // [rsp+158h] [rbp+58h]
  int *v63; // [rsp+160h] [rbp+60h]
  __int64 v64; // [rsp+168h] [rbp+68h]
  int *v65; // [rsp+170h] [rbp+70h]
  __int64 v66; // [rsp+178h] [rbp+78h]
  int *v67; // [rsp+180h] [rbp+80h]
  __int64 v68; // [rsp+188h] [rbp+88h]
  int *v69; // [rsp+190h] [rbp+90h]
  __int64 v70; // [rsp+198h] [rbp+98h]

  v3 = a1 + 1;
  *a3 = 0;
  if ( !dword_140C3CB54 )
  {
    LOBYTE(v7) = 0;
LABEL_3:
    dword_140C3CCF8 = 0;
LABEL_4:
    PopWeakChargerMeasured = 0;
LABEL_5:
    HIDWORD(qword_140C3CCFC) = 0;
    goto LABEL_6;
  }
  v8 = *v3;
  LODWORD(v9) = 100000;
  if ( HIDWORD(qword_140C3CBA0) > (unsigned int)v8 )
  {
    if ( HIDWORD(qword_140C3CBA0) )
      v9 = 100000 * v8 / (unsigned __int64)HIDWORD(qword_140C3CBA0);
    else
      LODWORD(v9) = 0;
  }
  v10 = 0;
  if ( dword_140C3CCEC != -1 )
    v10 = v9 - dword_140C3CCEC;
  v11 = ((int)v9 + 500) / 0x3E8u;
  v12 = (dword_140C3CCEC + 500) / 0x3E8u;
  if ( v11 != v12 )
    *a3 = v11 - v12;
  LOBYTE(v7) = byte_140C3CCE8;
  dword_140C3CCEC = v9;
  if ( a2 == 1 )
  {
    LOBYTE(v7) = 1;
    goto LABEL_3;
  }
  if ( a2 != ((unk_140C3CB80 & 1) == 0) )
  {
    LOBYTE(v7) = 0;
    dword_140C3CCF8 = v9;
    goto LABEL_4;
  }
  if ( byte_140C3CB58 )
  {
    if ( !PopWeakChargerMeasured )
      dword_140C3CCF8 = v9;
    LOBYTE(v7) = 0;
    goto LABEL_5;
  }
  v13 = dword_140C3CCF8;
  if ( dword_140C3CCF8 < (unsigned int)v9 )
  {
    v13 = v9;
    dword_140C3CCF8 = v9;
  }
  if ( v13 > (int)v9 + WeakChargerChargeDropMilliPercent )
    PopWeakChargerMeasured = 1;
  HIDWORD(qword_140C3CCFC) += v10;
  if ( (int)abs32(SHIDWORD(qword_140C3CCFC)) >= BatteryChargeTrajectoryThresholdMilliPercent )
  {
    v7 = HIDWORD(qword_140C3CCFC) >> 31;
    goto LABEL_5;
  }
LABEL_6:
  if ( byte_140C3CCE8 != (_BYTE)v7 )
  {
    byte_140C3CCE8 = v7;
    v34 = (unsigned __int8)v7;
    ZwUpdateWnfStateData((__int64)&WNF_PO_BATTERY_DISCHARGING, (__int64)&v34);
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C03928, 0x400000000000LL) )
      {
        v45 = &v35;
        v14 = "AC Power";
        v36 = dword_140C3CB54;
        v47 = &v36;
        v15 = (*a1 & 1) == 0;
        v35 = (unsigned __int8)byte_140C3CCE8;
        if ( v15 )
          v14 = "DC Power";
        v46 = 4LL;
        v48 = 4LL;
        tlgCreate1Sz_char((__int64)v49, v14);
        v16 = "Battery Discharging";
        if ( (*a1 & 2) == 0 )
          v16 = "-";
        tlgCreate1Sz_char((__int64)v50, v16);
        v18 = "Battery Charging";
        if ( (*a1 & 4) == 0 )
          v18 = v17;
        tlgCreate1Sz_char((__int64)v51, v18);
        v20 = "Battery Critical";
        if ( (*a1 & 8) == 0 )
          v20 = v19;
        tlgCreate1Sz_char((__int64)v52, v20);
        v22 = "Battery charge limiting mode";
        if ( (*a1 & 0x10) == 0 )
          v22 = v21;
        tlgCreate1Sz_char((__int64)v53, v22);
        v24 = "Battery charging state power supply present";
        if ( (*a1 & 0x20) == 0 )
          v24 = v23;
        tlgCreate1Sz_char((__int64)v54, v24);
        v26 = "Battery charging state adequate";
        if ( (*a1 & 0x40) == 0 )
          v26 = v25;
        tlgCreate1Sz_char((__int64)v55, v26);
        v28 = "Platform BCL Enabled";
        if ( (byte_140C3CD58 & 1) == 0 )
          v28 = v27;
        tlgCreate1Sz_char((__int64)v56, v28);
        v30 = *v3;
        v31 = *v3;
        if ( HIDWORD(qword_140C3CBA0) )
          v32 = (unsigned int)((HIDWORD(qword_140C3CBA0) >> 1) + 100 * v30) / HIDWORD(qword_140C3CBA0);
        else
          v32 = 0;
        v37 = v32;
        v57 = &v37;
        v58 = 4LL;
        if ( HIDWORD(qword_140C3CBA0) )
        {
          v30 = v31;
          v33 = 100000 * (unsigned __int64)v31 / HIDWORD(qword_140C3CBA0);
        }
        else
        {
          LODWORD(v33) = 0;
        }
        v38 = v33;
        v39 = v30;
        v59 = &v38;
        v40 = HIDWORD(qword_140C3CBA0);
        v61 = &v39;
        v60 = 4LL;
        v63 = &v40;
        v41 = a1[2];
        v65 = &v41;
        v42 = a1[3];
        v67 = &v42;
        v69 = &v43;
        v62 = 4LL;
        v64 = 4LL;
        v66 = 4LL;
        v68 = 4LL;
        v43 = v29;
        v70 = 4LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03928,
          (unsigned __int8 *)&byte_1400307DF,
          0LL,
          0LL,
          0x13u,
          &v44);
      }
    }
  }
}
