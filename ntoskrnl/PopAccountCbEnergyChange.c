/*
 * XREFs of PopAccountCbEnergyChange @ 0x14086E8D8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

int PopAccountCbEnergyChange()
{
  __int64 *v0; // rcx
  __int64 v1; // rax
  __int64 v2; // rcx
  int v3; // r8d
  const CHAR *v4; // rdx
  char v5; // r8
  const CHAR *v6; // rdx
  int v7; // r10d
  int v8; // esi
  unsigned __int8 v9; // r8
  const CHAR *v10; // rdx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r10
  const CHAR *v13; // rdx
  __int64 v14; // r9
  int v15; // r10d
  const CHAR *v16; // rdx
  unsigned __int8 v17; // r11
  char v18; // r8
  const CHAR *v19; // rdx
  unsigned __int8 v20; // r8
  const CHAR *v21; // rdx
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // r10
  const CHAR *v24; // rdx
  char v25; // r8
  const CHAR *v26; // rdx
  char v27; // r8
  const CHAR *v28; // rdx
  char v29; // r8
  const CHAR *v30; // rdx
  unsigned __int8 v31; // r11
  const CHAR *v32; // rdx
  unsigned int v33; // eax
  unsigned __int64 v34; // rax
  __int128 v36; // [rsp+30h] [rbp-D0h] BYREF
  int v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-BCh] BYREF
  int v39; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  int v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v46; // [rsp+90h] [rbp-70h]
  int v47; // [rsp+98h] [rbp-68h]
  int v48; // [rsp+9Ch] [rbp-64h]
  char v49[16]; // [rsp+A0h] [rbp-60h] BYREF
  char v50[16]; // [rsp+B0h] [rbp-50h] BYREF
  char v51[16]; // [rsp+C0h] [rbp-40h] BYREF
  char v52[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 *v53; // [rsp+E0h] [rbp-20h]
  int v54; // [rsp+E8h] [rbp-18h]
  int v55; // [rsp+ECh] [rbp-14h]
  int *v56; // [rsp+F0h] [rbp-10h]
  int v57; // [rsp+F8h] [rbp-8h]
  int v58; // [rsp+FCh] [rbp-4h]
  char v59[16]; // [rsp+100h] [rbp+0h] BYREF
  char v60[16]; // [rsp+110h] [rbp+10h] BYREF
  char v61[16]; // [rsp+120h] [rbp+20h] BYREF
  char v62[16]; // [rsp+130h] [rbp+30h] BYREF
  char v63[16]; // [rsp+140h] [rbp+40h] BYREF
  char v64[16]; // [rsp+150h] [rbp+50h] BYREF
  char v65[16]; // [rsp+160h] [rbp+60h] BYREF
  char v66[16]; // [rsp+170h] [rbp+70h] BYREF
  unsigned int *v67; // [rsp+180h] [rbp+80h]
  int v68; // [rsp+188h] [rbp+88h]
  int v69; // [rsp+18Ch] [rbp+8Ch]
  int *v70; // [rsp+190h] [rbp+90h]
  int v71; // [rsp+198h] [rbp+98h]
  int v72; // [rsp+19Ch] [rbp+9Ch]
  int *v73; // [rsp+1A0h] [rbp+A0h]
  int v74; // [rsp+1A8h] [rbp+A8h]
  int v75; // [rsp+1ACh] [rbp+ACh]
  int *v76; // [rsp+1B0h] [rbp+B0h]
  int v77; // [rsp+1B8h] [rbp+B8h]
  int v78; // [rsp+1BCh] [rbp+BCh]
  int *v79; // [rsp+1C0h] [rbp+C0h]
  int v80; // [rsp+1C8h] [rbp+C8h]
  int v81; // [rsp+1CCh] [rbp+CCh]
  int *v82; // [rsp+1D0h] [rbp+D0h]
  int v83; // [rsp+1D8h] [rbp+D8h]
  int v84; // [rsp+1DCh] [rbp+DCh]

  v0 = (__int64 *)qword_140C3CB60;
  v1 = 0LL;
  v36 = 0uLL;
  if ( (__int64 *)qword_140C3CB60 != &qword_140C3CB60 )
  {
    do
    {
      v1 += v0[25];
      v0 = (__int64 *)*v0;
    }
    while ( v0 != &qword_140C3CB60 );
    *((_QWORD *)&v36 + 1) = v1;
  }
  v2 = qword_140C3CB70;
  v3 = 0;
  LODWORD(v36) = 0;
  if ( (__int64 *)qword_140C3CB70 != &qword_140C3CB70 )
  {
    do
    {
      v3 |= *(_DWORD *)(v2 + 128);
      v2 = *(_QWORD *)v2;
    }
    while ( (__int64 *)v2 != &qword_140C3CB70 );
    LODWORD(v36) = v3;
  }
  if ( v3 != (_DWORD)xmmword_140C3CD48 || v1 != *((_QWORD *)&xmmword_140C3CD48 + 1) )
  {
    xmmword_140C3CD48 = v36;
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      v48 = 0;
      v44 = v1;
      v4 = "Energy Counter Unavailable";
      v46 = &v44;
      if ( (v3 & 1) == 0 )
        v4 = "-";
      v47 = 8;
      tlgCreate1Sz_char((__int64)v49, v4);
      v6 = "Relative Capacity Unit";
      if ( (v5 & 2) == 0 )
        v6 = "-";
      tlgCreate1Sz_char((__int64)v50, v6);
      v8 = v7 - 4;
      v10 = "FCC Unavailable";
      if ( (v9 & (unsigned __int8)(v7 - 4)) == 0 )
        v10 = "-";
      tlgCreate1Sz_char((__int64)v51, v10);
      v13 = "Capacity Unavailable";
      if ( (v11 & v12) == 0 )
        v13 = "-";
      tlgCreate1Sz_char((__int64)v52, v13);
      v55 = 0;
      v58 = 0;
      v16 = "AC Power";
      v53 = &v36;
      v37 = dword_140C3CB54;
      v56 = &v37;
      if ( (unk_140C3CB80 & v17) == 0 )
        v16 = "DC Power";
      *(_QWORD *)&v36 = v14;
      v54 = v15;
      v57 = v8;
      tlgCreate1Sz_char((__int64)v59, v16);
      v19 = "Battery Discharging";
      if ( (v18 & 2) == 0 )
        v19 = "-";
      tlgCreate1Sz_char((__int64)v60, v19);
      v21 = "Battery Charging";
      if ( (v20 & (unsigned __int8)v8) == 0 )
        v21 = "-";
      tlgCreate1Sz_char((__int64)v61, v21);
      v24 = "Battery Critical";
      if ( (v22 & v23) == 0 )
        v24 = "-";
      tlgCreate1Sz_char((__int64)v62, v24);
      v26 = "Battery charge limiting mode";
      if ( (v25 & 0x10) == 0 )
        v26 = "-";
      tlgCreate1Sz_char((__int64)v63, v26);
      v28 = "Battery charging state power supply present";
      if ( (v27 & 0x20) == 0 )
        v28 = "-";
      tlgCreate1Sz_char((__int64)v64, v28);
      v30 = "Battery charging state adequate";
      if ( (v29 & 0x40) == 0 )
        v30 = "-";
      tlgCreate1Sz_char((__int64)v65, v30);
      v32 = "Platform BCL Enabled";
      if ( (v31 & (unsigned __int8)byte_140C3CD58) == 0 )
        v32 = "-";
      tlgCreate1Sz_char((__int64)v66, v32);
      if ( HIDWORD(qword_140C3CBA0) )
        v33 = (100 * dword_140C3CB84 + (HIDWORD(qword_140C3CBA0) >> 1)) / HIDWORD(qword_140C3CBA0);
      else
        v33 = 0;
      v69 = 0;
      v38 = v33;
      v67 = &v38;
      v68 = v8;
      if ( HIDWORD(qword_140C3CBA0) )
        v34 = 100000 * (unsigned __int64)dword_140C3CB84 / HIDWORD(qword_140C3CBA0);
      else
        LODWORD(v34) = 0;
      v72 = 0;
      v75 = 0;
      v78 = 0;
      v81 = 0;
      v84 = 0;
      v39 = v34;
      v70 = &v39;
      v40 = dword_140C3CB84;
      v73 = (int *)&v40;
      v76 = &v41;
      v42 = unk_140C3CB88;
      v79 = &v42;
      v43 = qword_140C3CB8C;
      v82 = &v43;
      v41 = HIDWORD(qword_140C3CBA0);
      v71 = v8;
      v74 = v8;
      v77 = v8;
      v80 = v8;
      v83 = v8;
      LODWORD(v1) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140C03928,
                      (unsigned __int8 *)byte_1400305C9,
                      0LL,
                      0LL,
                      0x17u,
                      &v45);
    }
  }
  return v1;
}
