/*
 * XREFs of StorpMarkDeviceFailed @ 0x1C003C898
 * Callers:
 *     StorPortNotification @ 0x1C000E7B0 (StorPortNotification.c)
 * Callees:
 *     DbgLogRequest @ 0x1C0002BF8 (DbgLogRequest.c)
 *     RaidAdapterFindUnit @ 0x1C0006604 (RaidAdapterFindUnit.c)
 *     _tlgKeywordOn @ 0x1C000E4FC (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x1C0012468 (RaidDriverGetName.c)
 *     _tlgCreate1Sz_char @ 0x1C001AE84 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001B02C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001B0D4 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001D5B0 (__security_check_cookie.c)
 *     RaidAdapterGetFirstUnit @ 0x1C002CBF4 (RaidAdapterGetFirstUnit.c)
 *     McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer @ 0x1C0037850 (McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer.c)
 *     StorpPopulateErrorData @ 0x1C00435A0 (StorpPopulateErrorData.c)
 *     StorpPopulateLogData @ 0x1C0043700 (StorpPopulateLogData.c)
 *     StorpWheaReportError @ 0x1C0043774 (StorpWheaReportError.c)
 */

__int64 __fastcall StorpMarkDeviceFailed(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned __int16 a4,
        wchar_t *a5,
        unsigned __int16 a6,
        void *a7,
        unsigned __int16 a8,
        void *a9)
{
  __int64 v11; // rcx
  __int64 v12; // rdi
  char v13; // r13
  _BYTE *v14; // r12
  __int64 Unit; // rax
  char v16; // cl
  __int16 v17; // r8
  char v18; // al
  __int16 v19; // r15
  char v20; // r9
  unsigned __int8 v21; // r13
  __int64 FirstUnit; // rax
  char v23; // r8
  char v24; // cl
  void *v25; // r8
  void *Src; // rcx
  int v27; // edx
  int *v28; // r13
  int v29; // r8d
  int v30; // edx
  int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // r15
  const wchar_t *v35; // rcx
  const char *v36; // r8
  const char *v37; // rdx
  const char *v38; // rax
  const wchar_t *v39; // rcx
  const char *v40; // r8
  const char *v41; // rdx
  const char *v42; // rax
  const wchar_t *v43; // rcx
  const char *v44; // r8
  const char *v45; // rdx
  const char *v46; // rax
  _BYTE *v47; // rdx
  int v48; // r9d
  __int64 v49; // r8
  __int64 v50; // r9
  struct _DEVICE_OBJECT *v51; // rcx
  PEVENT_DATA_DESCRIPTOR v53; // [rsp+28h] [rbp-108h]
  size_t Size; // [rsp+40h] [rbp-F0h]
  __int16 v55; // [rsp+B0h] [rbp-80h]
  unsigned __int8 v56; // [rsp+B2h] [rbp-7Eh]
  int v57; // [rsp+B4h] [rbp-7Ch] BYREF
  char v58; // [rsp+B8h] [rbp-78h]
  char v59; // [rsp+B9h] [rbp-77h]
  unsigned __int16 v60; // [rsp+BAh] [rbp-76h]
  unsigned __int8 v61; // [rsp+BCh] [rbp-74h] BYREF
  __int16 v62; // [rsp+BDh] [rbp-73h] BYREF
  int v63; // [rsp+C0h] [rbp-70h]
  unsigned int v64; // [rsp+C4h] [rbp-6Ch]
  wchar_t *v65; // [rsp+C8h] [rbp-68h]
  void *v66; // [rsp+D0h] [rbp-60h]
  void *v67; // [rsp+D8h] [rbp-58h]
  __int64 v68; // [rsp+E0h] [rbp-50h]
  int v69; // [rsp+E8h] [rbp-48h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-40h]
  int v71[4]; // [rsp+F8h] [rbp-38h] BYREF
  int v72[4]; // [rsp+110h] [rbp-20h] BYREF
  __int128 v73; // [rsp+120h] [rbp-10h] BYREF
  __int64 v74[2]; // [rsp+130h] [rbp+0h] BYREF
  __int128 v75; // [rsp+140h] [rbp+10h]
  int v76; // [rsp+150h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v77; // [rsp+160h] [rbp+30h] BYREF
  __int128 *v78; // [rsp+180h] [rbp+50h]
  __int64 v79; // [rsp+188h] [rbp+58h]
  int *v80; // [rsp+190h] [rbp+60h]
  __int64 v81; // [rsp+198h] [rbp+68h]
  int *v82; // [rsp+1A0h] [rbp+70h]
  __int64 v83; // [rsp+1A8h] [rbp+78h]
  unsigned __int8 *v84; // [rsp+1B0h] [rbp+80h]
  __int64 v85; // [rsp+1B8h] [rbp+88h]
  __int16 *v86; // [rsp+1C0h] [rbp+90h]
  __int64 v87; // [rsp+1C8h] [rbp+98h]
  char *v88; // [rsp+1D0h] [rbp+A0h]
  __int64 v89; // [rsp+1D8h] [rbp+A8h]
  _DWORD *v90; // [rsp+1E0h] [rbp+B0h]
  __int64 v91; // [rsp+1E8h] [rbp+B8h]
  __int64 v92; // [rsp+1F0h] [rbp+C0h]
  _DWORD v93[2]; // [rsp+1F8h] [rbp+C8h] BYREF
  char v94[16]; // [rsp+200h] [rbp+D0h] BYREF
  char v95[16]; // [rsp+210h] [rbp+E0h] BYREF
  int *v96; // [rsp+220h] [rbp+F0h]
  __int64 v97; // [rsp+228h] [rbp+F8h]
  char v98[16]; // [rsp+230h] [rbp+100h] BYREF
  __int64 retaddr; // [rsp+288h] [rbp+158h]

  v65 = a5;
  v67 = a7;
  v11 = *(_QWORD *)(a1 + 16);
  v12 = 0LL;
  v66 = a9;
  v13 = 0;
  v57 = RaidNullAddress;
  v68 = a2;
  v76 = 0;
  v60 = a4;
  v63 = a3;
  v64 = 0;
  *(_OWORD *)v71 = 0LL;
  v59 = 0;
  *(_OWORD *)v72 = 0LL;
  *(_OWORD *)v74 = 0LL;
  v75 = 0LL;
  RaidDriverGetName(v11, (__int64)v71);
  v14 = &unk_1C005B660;
  v73 = *(_OWORD *)(a1 + 5192);
  if ( !a2 )
  {
    FirstUnit = RaidAdapterGetFirstUnit(a1);
    v23 = *(_BYTE *)(a1 + 104);
    v24 = *(_BYTE *)(a1 + 110);
    v12 = FirstUnit;
    v70 = *(_QWORD *)(a1 + 8);
    v19 = ((v23 >> 15) & 2) + 1;
    if ( (v24 & 0x40) == 0 )
    {
      v24 |= 0x40u;
      v13 = 1;
      *(_BYTE *)(a1 + 110) = v24;
    }
    v20 = v63;
    if ( (v63 & 3) != 1 || v23 < 0 || *(_DWORD *)(a1 + 92) )
    {
      v55 = *(_WORD *)((char *)&v57 + 1);
      v56 = v57;
    }
    else
    {
      HIBYTE(v55) = BYTE2(v57);
      v56 = v57;
      if ( (v24 & 4) == 0 )
      {
        v59 = 1;
        *(_BYTE *)(a1 + 110) = v24 | 4;
      }
      LOBYTE(v55) = BYTE1(v57);
    }
    goto LABEL_24;
  }
  if ( *(_WORD *)a2 != 1 || *(_DWORD *)(a2 + 4) < 4u )
  {
    v21 = v57;
    v64 = -1056964601;
    v55 = *(_WORD *)((char *)&v57 + 1);
    goto LABEL_46;
  }
  LOBYTE(v57) = *(_BYTE *)(a2 + 8);
  v56 = v57;
  *(_WORD *)((char *)&v57 + 1) = *(_WORD *)(a2 + 9);
  v55 = *(_WORD *)((char *)&v57 + 1);
  Unit = RaidAdapterFindUnit(a1, v57);
  v12 = Unit;
  if ( Unit )
  {
    *(_OWORD *)v72 = *(_OWORD *)(Unit + 1976);
    v16 = *(_BYTE *)(Unit + 450);
    v70 = *(_QWORD *)(Unit + 8);
    v17 = v16 & 1;
    v18 = *(_BYTE *)(Unit + 451);
    v19 = 2 * v17;
    if ( (v18 & 8) == 0 )
    {
      v13 = 1;
      *(_BYTE *)(v12 + 451) = v18 | 8;
    }
    v20 = v63;
    if ( (v63 & 3) == 1 && !(_BYTE)v17 && !*(_DWORD *)(v12 + 916) && (v16 & 0x20) == 0 )
    {
      v59 = 1;
      *(_BYTE *)(v12 + 450) = v16 | 0x20;
    }
LABEL_24:
    if ( v13 && !_InterlockedCompareExchange(&WheaPendingError, 1, 0) )
    {
      if ( (v19 & 2) == 0 || (v58 = 1, (v20 & 2) != 0) )
        v58 = 0;
      v25 = (void *)(v12 + 169);
      if ( v12 )
      {
        Src = (void *)(v12 + 160);
      }
      else
      {
        v25 = &unk_1C005B660;
        Src = &unk_1C005B660;
      }
      if ( v68 )
        v27 = *(_DWORD *)(v12 + 3280);
      else
        v27 = *(_DWORD *)(a1 + 4420);
      v28 = (int *)&v73;
      if ( v68 )
        v28 = v72;
      LODWORD(Size) = a6;
      StorpPopulateErrorData((int)v28, v27, (int)v71, (int)v67, v60, v19, Src, v25, Size, v67);
      LOBYTE(v30) = v58;
      if ( v58 )
      {
        if ( v68 )
          v31 = *(_DWORD *)(v12 + 3280);
        else
          v31 = *(_DWORD *)(a1 + 4420);
        LODWORD(v53) = a8;
        StorpPopulateLogData((int)v28, v31, v29, v60, v19, (size_t)v53, v66, (__int64)v74);
        LOBYTE(v30) = v58;
      }
      v32 = v12;
      if ( !v68 )
        v32 = a1;
      StorpWheaReportError(v70, v30, v29, (unsigned __int64)v74 & -(__int64)((_BYTE)v30 != 0), v32);
      _InterlockedExchange(&WheaPendingError, 0);
    }
    goto LABEL_45;
  }
  v64 = -1056964601;
LABEL_45:
  v21 = v56;
LABEL_46:
  DbgLogRequest(
    a1,
    44,
    a1,
    retaddr,
    (__int64)v65,
    HIBYTE(v55) | (unsigned __int64)(((unsigned __int8)v55 | (v21 << 8)) << 8),
    0LL);
  v34 = *(_QWORD *)&v71[2];
  if ( StorEtwLoggingEnabled )
  {
    if ( (v63 & 1) != 0 )
    {
      if ( (byte_1C0069845 & 1) != 0 )
      {
        if ( *(_QWORD *)(a1 + 5208) )
          v35 = *(const wchar_t **)(*(_QWORD *)(v12 + 24) + 5208LL);
        else
          v35 = (const wchar_t *)&unk_1C005B620;
        v36 = (const char *)(v12 + 186);
        if ( v12 )
        {
          v37 = (const char *)(v12 + 169);
        }
        else
        {
          v36 = (const char *)&unk_1C005B660;
          v37 = (const char *)&unk_1C005B660;
        }
        v38 = (const char *)(v12 + 160);
        if ( !v12 )
          v38 = (const char *)&unk_1C005B660;
        McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer(
          (__int64)v35,
          &EventMarkAndRemoveFailedDevice,
          (__int64)v36,
          *(_DWORD *)(a1 + 56),
          v21,
          v55,
          SHIBYTE(v55),
          (__int64)v72,
          (__int64)&v73,
          *(const wchar_t **)&v71[2],
          v38,
          v37,
          v36,
          v35,
          v60,
          v65,
          a6,
          (__int64)v67,
          a8,
          (__int64)v66,
          v63);
      }
    }
    else if ( (v63 & 2) != 0 )
    {
      if ( (byte_1C0069845 & 1) != 0 )
      {
        if ( *(_QWORD *)(a1 + 5208) )
          v39 = *(const wchar_t **)(*(_QWORD *)(v12 + 24) + 5208LL);
        else
          v39 = (const wchar_t *)&unk_1C005B620;
        v40 = (const char *)(v12 + 186);
        if ( v12 )
        {
          v41 = (const char *)(v12 + 169);
        }
        else
        {
          v40 = (const char *)&unk_1C005B660;
          v41 = (const char *)&unk_1C005B660;
        }
        v42 = (const char *)(v12 + 160);
        if ( !v12 )
          v42 = (const char *)&unk_1C005B660;
        McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer(
          (__int64)v39,
          &EventMarkDevicePotentiallyFailed,
          (__int64)v40,
          *(_DWORD *)(a1 + 56),
          v21,
          v55,
          SHIBYTE(v55),
          (__int64)v72,
          (__int64)&v73,
          *(const wchar_t **)&v71[2],
          v42,
          v41,
          v40,
          v39,
          v60,
          v65,
          a6,
          (__int64)v67,
          a8,
          (__int64)v66,
          v63);
      }
    }
    else if ( (byte_1C0069845 & 1) != 0 )
    {
      if ( *(_QWORD *)(a1 + 5208) )
        v43 = *(const wchar_t **)(*(_QWORD *)(v12 + 24) + 5208LL);
      else
        v43 = (const wchar_t *)&unk_1C005B620;
      v44 = (const char *)(v12 + 186);
      if ( v12 )
      {
        v45 = (const char *)(v12 + 169);
      }
      else
      {
        v44 = (const char *)&unk_1C005B660;
        v45 = (const char *)&unk_1C005B660;
      }
      v46 = (const char *)(v12 + 160);
      if ( !v12 )
        v46 = (const char *)&unk_1C005B660;
      McTemplateK0quuujjzssszhzhbr13hbr15q_EtwWriteTransfer(
        (__int64)v43,
        &EventMarkDeviceFailed,
        (__int64)v44,
        *(_DWORD *)(a1 + 56),
        v21,
        v55,
        SHIBYTE(v55),
        (__int64)v72,
        (__int64)&v73,
        *(const wchar_t **)&v71[2],
        v46,
        v45,
        v44,
        v43,
        v60,
        v65,
        a6,
        (__int64)v67,
        a8,
        (__int64)v66,
        v63);
    }
  }
  if ( (unsigned int)dword_1C0069058 > 5 && tlgKeywordOn(v33, 0x400000000000LL) )
  {
    v79 = 16LL;
    v78 = &v73;
    v80 = v72;
    v47 = (_BYTE *)(v12 + 160);
    v57 = *(_DWORD *)(a1 + 56);
    v82 = &v57;
    v84 = &v61;
    v62 = v55;
    v86 = &v62;
    v88 = (char *)&v62 + 1;
    v90 = v93;
    v93[0] = LOWORD(v71[0]);
    v81 = 16LL;
    v83 = 4LL;
    v61 = v21;
    v85 = 1LL;
    v87 = 1LL;
    v89 = 1LL;
    v91 = 2LL;
    v92 = v34;
    v93[1] = 0;
    if ( !v12 )
      v47 = &unk_1C005B660;
    tlgCreate1Sz_char((__int64)v94, v47);
    if ( v12 )
      v14 = (_BYTE *)(v12 + 169);
    tlgCreate1Sz_char((__int64)v95, v14);
    v96 = &v69;
    v69 = v48;
    v97 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v98, v65);
    tlgWriteTransfer_EtwWriteTransfer((__int64)&v77, (unsigned __int8 *)dword_1C005D6DC, v49, v50, 0xEu, &v77);
  }
  if ( v59 )
  {
    if ( v68 )
      v51 = *(struct _DEVICE_OBJECT **)(v12 + 8);
    else
      v51 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    IoInvalidateDeviceState(v51);
  }
  return v64;
}
