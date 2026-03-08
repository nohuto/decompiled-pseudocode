/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x1C0010474
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x1C0008860 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x1C000FED8 (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0044C50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBMUX_CreateChildPSMs(__int64 a1)
{
  bool v1; // cf
  _BYTE *v2; // rsi
  unsigned __int16 v4; // di
  __int16 *v5; // rdx
  unsigned __int16 v6; // r8
  char v7; // dl
  unsigned __int64 v8; // rax
  char v9; // cl
  unsigned __int64 PSM; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  unsigned __int16 v14; // di
  __int64 v15; // rdx
  unsigned __int16 v16; // r8
  char v17; // dl
  unsigned __int64 v18; // rax
  char v19; // cl
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  unsigned __int16 v24; // cx
  unsigned int v25; // edx
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // ax
  __int64 v28; // r8
  unsigned int v29; // edi
  _QWORD **v30; // rsi
  _QWORD *v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int128 v35; // [rsp+40h] [rbp-29h] BYREF
  __int128 v36; // [rsp+50h] [rbp-19h]
  __int64 v37; // [rsp+60h] [rbp-9h]
  __int128 v38; // [rsp+68h] [rbp-1h] BYREF
  __int128 v39; // [rsp+78h] [rbp+Fh]
  __int128 v40; // [rsp+88h] [rbp+1Fh]
  __int64 v41; // [rsp+98h] [rbp+2Fh]
  __int64 v42; // [rsp+D0h] [rbp+67h] BYREF

  *(_DWORD *)(a1 + 146) = 0xFFFF;
  v37 = 0LL;
  LODWORD(v41) = 0;
  v1 = *(_WORD *)(a1 + 144) != 0;
  v2 = (_BYTE *)(a1 + 240);
  v42 = 0LL;
  v35 = 0LL;
  v4 = 0;
  v36 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  while ( v1 )
  {
    v35 = 0LL;
    v37 = 0LL;
    v36 = 0LL;
    _InterlockedOr((volatile signed __int32 *)&v35 + 1, 1u);
    if ( *v2 )
    {
      v6 = v4 + 1;
      LOWORD(v35) = v4 + 1;
      v8 = (unsigned __int64)(unsigned __int16)(v4 + 1) >> 3;
      v9 = ++v4 & 7;
      if ( ((unsigned __int8)(1 << v9) & *(_BYTE *)(v8 + a1 + 1187)) != 0 )
      {
        _InterlockedAnd((volatile signed __int32 *)&v35 + 1, 0xFFFFFFFE);
        v6 = v35;
      }
      BYTE2(v35) = *(_BYTE *)(a1 + 2490);
    }
    else
    {
      v5 = *(__int16 **)(*(_QWORD *)(a1 + 128) + 8LL * v4);
      v6 = *v5;
      LOWORD(v35) = *v5;
      if ( *((_DWORD *)v5 + 1) == 102 )
      {
        _InterlockedAnd((volatile signed __int32 *)&v35 + 1, 0xFFFFFFFE);
        v6 = v35;
      }
      if ( *((_DWORD *)v5 + 2) == 116 )
      {
        _InterlockedOr((volatile signed __int32 *)&v35 + 1, 0x10u);
        v6 = v35;
      }
      DWORD1(v35) ^= (BYTE4(v35) ^ (unsigned __int8)(*((_BYTE *)v5 + 16) << 6)) & 0x40;
      DWORD1(v35) ^= (BYTE4(v35) ^ (unsigned __int8)(*((_BYTE *)v5 + 16) << 6)) & 0x80;
      v7 = *((_BYTE *)v5 + 3);
      if ( (unsigned __int8)(v7 - 1) > 4u )
        v7 = 5;
      ++v4;
      BYTE2(v35) = v7;
    }
    if ( v6 > *(_WORD *)(a1 + 148) )
      *(_WORD *)(a1 + 148) = v6;
    if ( v6 < *(_WORD *)(a1 + 146) )
      *(_WORD *)(a1 + 146) = v6;
    DWORD2(v35) = 512;
    PSM = HUBMUX_CreatePSM(a1, (unsigned __int16 *)&v35);
    if ( !PSM )
      goto LABEL_51;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
            WdfDriverGlobals,
            PSM,
            off_1C006A340);
    *(_QWORD *)(v11 + 1248) = &PSM20StateTable;
    *(_DWORD *)(v11 + 1124) = 3000;
    *(_DWORD *)(v11 + 1256) = 3000;
    v12 = (_QWORD *)(v11 + 248);
    v13 = *(_QWORD **)(a1 + 2368);
    if ( *v13 != a1 + 2360 )
LABEL_57:
      __fastfail(3u);
    *v12 = a1 + 2360;
    v12[1] = v13;
    *v13 = v12;
    *(_QWORD *)(a1 + 2368) = v12;
    ++*(_DWORD *)(a1 + 2356);
    v1 = v4 < *(_WORD *)(a1 + 144);
  }
  v14 = 0;
  *(_DWORD *)(a1 + 152) = 0xFFFF;
  if ( *(_WORD *)(a1 + 150) )
  {
    while ( 1 )
    {
      v35 = 0LL;
      v37 = 0LL;
      v36 = 0LL;
      _InterlockedOr((volatile signed __int32 *)&v35 + 1, 1u);
      if ( *v2 )
      {
        v16 = v14 + 1;
        LOWORD(v35) = v14 + 1;
        v18 = (unsigned __int64)(unsigned __int16)(v14 + 1) >> 3;
        v19 = ++v14 & 7;
        if ( ((unsigned __int8)(1 << v19) & *(_BYTE *)(v18 + a1 + 1190)) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)&v35 + 1, 0xFFFFFFFE);
          v16 = v35;
        }
        if ( *(_BYTE *)(a1 + 261) )
        {
          _InterlockedOr((volatile signed __int32 *)&v35 + 1, 0x100u);
          v16 = v35;
          DWORD1(v36) = *(_DWORD *)(a1 + 156);
        }
        *((_QWORD *)&v36 + 1) = *(_QWORD *)(a1 + 2504);
        LODWORD(v37) = *(_DWORD *)(a1 + 2512);
        BYTE2(v35) = *(_BYTE *)(a1 + 2490);
      }
      else
      {
        v15 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 8LL * v14);
        LOWORD(v35) = *(_WORD *)v15;
        if ( *(_DWORD *)(v15 + 4) == 102 )
          _InterlockedAnd((volatile signed __int32 *)&v35 + 1, 0xFFFFFFFE);
        if ( *(_DWORD *)(v15 + 8) == 116 )
          _InterlockedOr((volatile signed __int32 *)&v35 + 1, 8u);
        _InterlockedOr((volatile signed __int32 *)&v35 + 1, 0x100u);
        if ( *(_BYTE *)(v15 + 2) )
          DWORD1(v36) = *(_DWORD *)(a1 + 156);
        v16 = v35;
        *((_QWORD *)&v36 + 1) = *(_QWORD *)(v15 + 16);
        LODWORD(v37) = *(unsigned __int16 *)(v15 + 14);
        v17 = *(_BYTE *)(v15 + 3);
        if ( (unsigned __int8)(v17 - 1) > 4u )
          v17 = 5;
        ++v14;
        BYTE2(v35) = v17;
      }
      if ( v16 > *(_WORD *)(a1 + 154) )
        *(_WORD *)(a1 + 154) = v16;
      if ( v16 < *(_WORD *)(a1 + 152) )
        *(_WORD *)(a1 + 152) = v16;
      DWORD2(v35) = 768;
      v20 = HUBMUX_CreatePSM(a1, (unsigned __int16 *)&v35);
      if ( !v20 )
        break;
      v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, unsigned __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              v20,
              off_1C006A340);
      *(_QWORD *)(v21 + 1248) = &PSM30StateTable;
      *(_DWORD *)(v21 + 1124) = 5000;
      *(_DWORD *)(v21 + 1256) = 5000;
      v22 = (_QWORD *)(v21 + 248);
      v23 = *(_QWORD **)(a1 + 2368);
      if ( *v23 != a1 + 2360 )
        goto LABEL_57;
      *v22 = a1 + 2360;
      v22[1] = v23;
      *v23 = v22;
      *(_QWORD *)(a1 + 2368) = v22;
      ++*(_DWORD *)(a1 + 2356);
      if ( v14 >= *(_WORD *)(a1 + 150) )
        goto LABEL_44;
    }
  }
  else
  {
LABEL_44:
    v24 = *(_WORD *)(a1 + 148);
    if ( v24 <= *(_WORD *)(a1 + 154) )
      v24 = *(_WORD *)(a1 + 154);
    v25 = v24;
    v26 = 2;
    *(_WORD *)(a1 + 48) = v25;
    if ( ((unsigned __int64)v25 >> 3) + 1 >= 2 )
      v26 = ((unsigned __int16)v25 >> 3) + 1;
    v27 = *(_WORD *)(a1 + 88);
    v28 = (unsigned int)ExDefaultNonPagedPoolType;
    v39 = 0LL;
    if ( v26 <= v27 )
      v26 = v27;
    DWORD2(v39) = 1;
    *(_WORD *)(a1 + 1128) = v26;
    v41 = 0LL;
    v40 = *(unsigned __int64 *)(a1 + 16);
    v38 = 0LL;
    LODWORD(v38) = 56;
    HIDWORD(v39) = 1;
    if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int128 *, __int64, __int64, unsigned __int64, __int64 *, __int64))(WdfFunctions_01015 + 1536))(
           WdfDriverGlobals,
           &v38,
           v28,
           1748191317LL,
           (v26 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL,
           &v42,
           a1 + 1120) >= 0 )
    {
      v29 = 2053;
      _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40u);
      return v29;
    }
  }
LABEL_51:
  v29 = 2045;
  v30 = (_QWORD **)(a1 + 2360);
  while ( 1 )
  {
    v33 = *v30;
    if ( *v30 == v30 )
      return v29;
    if ( (_QWORD **)v33[1] != v30 )
      goto LABEL_57;
    v31 = (_QWORD *)*v33;
    if ( *(_QWORD **)(*v33 + 8LL) != v33 )
      goto LABEL_57;
    *v30 = v31;
    v31[1] = v30;
    --*(_DWORD *)(a1 + 2356);
    v32 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            v33 - 31);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v32);
  }
}
