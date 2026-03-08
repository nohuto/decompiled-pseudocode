/*
 * XREFs of PopAccountBatteryEnergyChange @ 0x140991AC0
 * Callers:
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

int __fastcall PopAccountBatteryEnergyChange(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 v2; // rsi
  bool v3; // zf
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // r11
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // ecx
  const CHAR *v11; // rdx
  const CHAR *v12; // r10
  __int64 v13; // r8
  const CHAR *v14; // rdx
  const CHAR *v15; // r10
  __int64 v16; // r8
  const CHAR *v17; // rdx
  const CHAR *v18; // r10
  __int64 v19; // r8
  const CHAR *v20; // rdx
  int v21; // r9d
  const CHAR *v22; // rdx
  __int64 v23; // r8
  const CHAR *v24; // r10
  __int64 v25; // r8
  const CHAR *v26; // rdx
  const CHAR *v27; // r10
  __int64 v28; // r8
  const CHAR *v29; // rdx
  const CHAR *v30; // r10
  __int64 v31; // r8
  const CHAR *v32; // rdx
  const CHAR *v33; // r10
  __int64 v34; // r8
  const CHAR *v35; // rdx
  const CHAR *v36; // r10
  __int64 v37; // r8
  const CHAR *v38; // rdx
  const CHAR *v39; // r10
  __int64 v40; // r8
  const CHAR *v41; // rdx
  const CHAR *v42; // r10
  const CHAR *v43; // rdx
  unsigned int *v44; // r8
  unsigned __int64 v45; // r10
  __int64 v46; // r9
  unsigned int v47; // ecx
  int v48; // eax
  unsigned __int64 v49; // rcx
  int v51; // [rsp+38h] [rbp-D0h] BYREF
  int v52; // [rsp+3Ch] [rbp-CCh] BYREF
  int v53; // [rsp+40h] [rbp-C8h] BYREF
  int v54; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-C0h] BYREF
  int v56; // [rsp+4Ch] [rbp-BCh] BYREF
  int v57; // [rsp+50h] [rbp-B8h] BYREF
  int v58; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v59; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v60; // [rsp+5Ch] [rbp-ACh] BYREF
  __int128 v61; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v62; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+78h] [rbp-90h] BYREF
  _DWORD *v64; // [rsp+98h] [rbp-70h]
  __int64 v65; // [rsp+A0h] [rbp-68h]
  __int64 v66; // [rsp+A8h] [rbp-60h]
  _DWORD v67[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v68; // [rsp+B8h] [rbp-50h]
  __int64 v69; // [rsp+C0h] [rbp-48h]
  char v70[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v71[16]; // [rsp+D8h] [rbp-30h] BYREF
  char v72[16]; // [rsp+E8h] [rbp-20h] BYREF
  char v73[16]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 *v74; // [rsp+108h] [rbp+0h]
  __int64 v75; // [rsp+110h] [rbp+8h]
  int *v76; // [rsp+118h] [rbp+10h]
  __int64 v77; // [rsp+120h] [rbp+18h]
  int *v78; // [rsp+128h] [rbp+20h]
  __int64 v79; // [rsp+130h] [rbp+28h]
  int *v80; // [rsp+138h] [rbp+30h]
  __int64 v81; // [rsp+140h] [rbp+38h]
  int *v82; // [rsp+148h] [rbp+40h]
  __int64 v83; // [rsp+150h] [rbp+48h]
  char v84[16]; // [rsp+158h] [rbp+50h] BYREF
  char v85[16]; // [rsp+168h] [rbp+60h] BYREF
  char v86[16]; // [rsp+178h] [rbp+70h] BYREF
  char v87[16]; // [rsp+188h] [rbp+80h] BYREF
  char v88[16]; // [rsp+198h] [rbp+90h] BYREF
  char v89[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  char v90[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  char v91[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  unsigned int *v92; // [rsp+1D8h] [rbp+D0h]
  __int64 v93; // [rsp+1E0h] [rbp+D8h]
  int *v94; // [rsp+1E8h] [rbp+E0h]
  __int64 v95; // [rsp+1F0h] [rbp+E8h]
  int *v96; // [rsp+1F8h] [rbp+F0h]
  __int64 v97; // [rsp+200h] [rbp+F8h]
  int *v98; // [rsp+208h] [rbp+100h]
  __int64 v99; // [rsp+210h] [rbp+108h]
  unsigned int *v100; // [rsp+218h] [rbp+110h]
  __int64 v101; // [rsp+220h] [rbp+118h]
  unsigned int *v102; // [rsp+228h] [rbp+120h]
  __int64 v103; // [rsp+230h] [rbp+128h]
  _UNKNOWN *retaddr; // [rsp+260h] [rbp+158h] BYREF

  v1 = &retaddr;
  v2 = *(unsigned int *)(a1 + 208);
  v3 = (*(_DWORD *)(a1 + 112) & 0x40000000) == 0;
  v5 = *(unsigned int *)(a1 + 212);
  v6 = 0LL;
  v7 = *(unsigned int *)(a1 + 152);
  LODWORD(v8) = *(_DWORD *)(a1 + 208);
  v9 = *(unsigned int *)(a1 + 128);
  v61 = *(_OWORD *)(a1 + 192);
  *(_DWORD *)(a1 + 192) = 0;
  if ( v3 )
  {
    LODWORD(v1) = v9 - 1;
    if ( (unsigned int)(v9 - 1) > 0xFFFFFFFD )
    {
      *(_QWORD *)(a1 + 208) = 0LL;
      *(_DWORD *)(a1 + 192) = 4;
      v10 = 4;
    }
    else if ( (_DWORD)v7 == -1 )
    {
      *(_DWORD *)(a1 + 192) = 8;
      v10 = 8;
    }
    else if ( (_DWORD)v5 )
    {
      if ( (_DWORD)v5 != (_DWORD)v9 )
      {
        *(_DWORD *)(a1 + 212) = v9;
        v8 = v9 * (unsigned int)(100000 * v2 / v5) / 100000;
      }
      LODWORD(v1) = v8;
      v6 = v7 - (unsigned int)v8;
      *(_DWORD *)(a1 + 208) = v7;
      *(_QWORD *)(a1 + 200) += v6;
      v10 = 0;
    }
    else
    {
      *(_DWORD *)(a1 + 212) = v9;
      *(_DWORD *)(a1 + 208) = v7;
      *(_DWORD *)(a1 + 192) = 1;
      v10 = 1;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 192) = 2;
    v10 = 2;
  }
  if ( v10 != (_DWORD)v61 || (LODWORD(v1) = DWORD2(v61), *(_QWORD *)(a1 + 200) != *((_QWORD *)&v61 + 1)) )
  {
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      v65 = 2LL;
      v64 = v67;
      v11 = "Energy Counter Unavailable";
      v66 = *(_QWORD *)(a1 + 40);
      v67[0] = *(unsigned __int16 *)(a1 + 32);
      if ( (v10 & 1) == 0 )
        v11 = "-";
      v62 = *(_QWORD *)(a1 + 200);
      v68 = &v62;
      v67[1] = 0;
      v69 = 8LL;
      tlgCreate1Sz_char((__int64)v70, v11);
      v14 = "Relative Capacity Unit";
      if ( (*(_DWORD *)(v13 + 192) & 2) == 0 )
        v14 = v12;
      tlgCreate1Sz_char((__int64)v71, v14);
      v17 = "FCC Unavailable";
      if ( (*(_DWORD *)(v16 + 192) & 4) == 0 )
        v17 = v15;
      tlgCreate1Sz_char((__int64)v72, v17);
      v20 = "Capacity Unavailable";
      if ( (*(_DWORD *)(v19 + 192) & 8) == 0 )
        v20 = v18;
      tlgCreate1Sz_char((__int64)v73, v20);
      *(_QWORD *)&v61 = v6;
      v74 = &v61;
      v22 = "AC Power";
      v75 = 8LL;
      v76 = &v51;
      v51 = v2;
      v78 = &v52;
      v80 = &v53;
      v54 = dword_140C3CB54;
      v82 = &v54;
      v3 = (*(_DWORD *)(v23 + 148) & 1) == 0;
      v77 = 4LL;
      if ( v3 )
        v22 = "DC Power";
      v52 = v21;
      v79 = 4LL;
      v53 = v5;
      v81 = 4LL;
      v83 = 4LL;
      tlgCreate1Sz_char((__int64)v84, v22);
      v26 = "Battery Discharging";
      if ( (*(_DWORD *)(v25 + 148) & 2) == 0 )
        v26 = v24;
      tlgCreate1Sz_char((__int64)v85, v26);
      v29 = "Battery Charging";
      if ( (*(_DWORD *)(v28 + 148) & 4) == 0 )
        v29 = v27;
      tlgCreate1Sz_char((__int64)v86, v29);
      v32 = "Battery Critical";
      if ( (*(_DWORD *)(v31 + 148) & 8) == 0 )
        v32 = v30;
      tlgCreate1Sz_char((__int64)v87, v32);
      v35 = "Battery charge limiting mode";
      if ( (*(_DWORD *)(v34 + 148) & 0x10) == 0 )
        v35 = v33;
      tlgCreate1Sz_char((__int64)v88, v35);
      v38 = "Battery charging state power supply present";
      if ( (*(_DWORD *)(v37 + 148) & 0x20) == 0 )
        v38 = v36;
      tlgCreate1Sz_char((__int64)v89, v38);
      v41 = "Battery charging state adequate";
      if ( (*(_DWORD *)(v40 + 148) & 0x40) == 0 )
        v41 = v39;
      tlgCreate1Sz_char((__int64)v90, v41);
      v43 = "Platform BCL Enabled";
      if ( (byte_140C3CD58 & 1) == 0 )
        v43 = v42;
      tlgCreate1Sz_char((__int64)v91, v43);
      v45 = v44[32];
      v46 = v44[38];
      if ( (_DWORD)v45 )
        v47 = (((unsigned int)v45 >> 1) + 100 * (_DWORD)v46) / (unsigned int)v45;
      else
        v47 = 0;
      v55 = v47;
      v92 = &v55;
      v48 = v46;
      v93 = 4LL;
      if ( (_DWORD)v45 )
      {
        v49 = 100000 * v46 / v45;
        v48 = v46;
      }
      else
      {
        LODWORD(v49) = 0;
      }
      v57 = v48;
      v56 = v49;
      v96 = &v57;
      v94 = &v56;
      v98 = &v58;
      v59 = v44[39];
      v100 = &v59;
      v60 = v44[40];
      v102 = &v60;
      v95 = 4LL;
      v97 = 4LL;
      v58 = v45;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 4LL;
      LODWORD(v1) = tlgWriteTransfer_EtwWriteTransfer(
                      (__int64)&dword_140C03928,
                      (unsigned __int8 *)&word_140030366,
                      0LL,
                      0LL,
                      0x1Cu,
                      &v63);
    }
  }
  return (int)v1;
}
