/*
 * XREFs of sub_180048B1C @ 0x180048B1C
 * Callers:
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_1800229D0 @ 0x1800229D0 (sub_1800229D0.c)
 *     sub_180022C90 @ 0x180022C90 (sub_180022C90.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180048DA8 @ 0x180048DA8 (sub_180048DA8.c)
 *     sub_180048E18 @ 0x180048E18 (sub_180048E18.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180048B1C(unsigned __int64 *a1, __int128 *a2, int a3, __int64 a4, _QWORD *a5, _QWORD *a6)
{
  unsigned __int64 v7; // r12
  __int64 v10; // rbx
  __int64 v11; // rdi
  BOOL v12; // esi
  __int64 v13; // rax
  BOOL v14; // esi
  __int64 v15; // rax
  int v16; // eax
  unsigned int v17; // esi
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // [rsp+68h] [rbp-29h] BYREF
  int v31; // [rsp+70h] [rbp-21h] BYREF
  __int64 v32; // [rsp+78h] [rbp-19h] BYREF
  __int64 v33; // [rsp+80h] [rbp-11h] BYREF
  __int128 v34; // [rsp+88h] [rbp-9h] BYREF
  __int64 v35; // [rsp+98h] [rbp+7h] BYREF
  int v36; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v37; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+E0h] [rbp+4Fh]

  v7 = a3;
  v10 = 0LL;
  v33 = 0LL;
  v11 = 0LL;
  v38 = 0LL;
  if ( (unsigned int)sub_180022F30(a1, a3) )
  {
    v32 = 0LL;
    if ( (unsigned int)sub_180022F30(a1, v7) )
    {
      v12 = sub_1800234D0((__int64)a1) || (_DWORD)v7 == 3;
      v34 = *a2;
      v13 = sub_1800233B0(a1 + 209, v7);
      if ( sub_180022C90(v13, &v34, v12) )
      {
        v34 = *a2;
        v14 = sub_1800229D0((__int64)a1, v7, &v34) != 0;
        v34 = *a2;
        v15 = sub_1800233B0(a1 + 209, v7);
        v16 = sub_180020D20((__int64)a1, v15, 2, v14, &v34, 0, 0, v7, 0LL, &v32, 0LL);
        v17 = v16;
        if ( v16 < 0 )
        {
          v22 = 7816LL;
LABEL_60:
          sub_18004BD84(
            retaddr,
            v22,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (unsigned int)v16);
          goto LABEL_61;
        }
      }
    }
    if ( !v32 )
    {
      sub_180048E18(&v33, a4);
      goto LABEL_14;
    }
    v18 = (*(__int64 (__fastcall **)(unsigned __int64 *))(*a1 + 56))(a1);
    v30 = 0LL;
    if ( !v18 )
    {
      sub_180048790(&v34, a4);
      v30 = 0LL;
      if ( (*(int (__fastcall **)(__int64, __int64, _QWORD, __int64 *))(*(_QWORD *)v32 + 56LL))(v32, a4, v34, &v30) < 0 )
      {
        v23 = 7825LL;
      }
      else
      {
        v31 = 0;
        if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 24LL))(v30, &v31) < 0 )
        {
          v23 = 7828LL;
        }
        else
        {
          if ( !v31 )
          {
            sub_180048E18(&v33, v30);
            sub_18000F708((__int64 *)&v34);
LABEL_13:
            sub_18000F708(&v30);
LABEL_14:
            v10 = v33;
            v16 = sub_180048DA8(v33);
            v17 = v16;
            if ( v16 >= 0 )
            {
              if ( v32 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
              goto LABEL_17;
            }
            v22 = 7880LL;
            goto LABEL_60;
          }
          v23 = 7829LL;
        }
      }
      v17 = -2004287480;
      sub_18004BD84(
        retaddr,
        v23,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        2290679816LL);
      sub_18000F708((__int64 *)&v34);
LABEL_57:
      sub_18000F708(&v30);
LABEL_61:
      sub_18000F708(&v32);
      goto LABEL_20;
    }
    sub_180048790(&v37, a4);
    v30 = 0LL;
    v24 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v32 + 64LL))(v32, a4, v37, &v30);
    if ( v24 == -2005073917 )
    {
      v31 = 0;
      *(_QWORD *)&v34 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, void *, __int128 *))v32)(v32, &unk_18015BE10, &v34) >= 0
        && (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v34 + 24LL))(v34, &v31) >= 0
        && (v31 & 1) != 0 )
      {
        v35 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v32 + 56LL))(v32, 0LL, a4, &v35) < 0 )
        {
          v25 = 7855LL;
LABEL_46:
          v17 = -2004287480;
          sub_18004BD84(
            retaddr,
            v25,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            2290679816LL);
          sub_18000F708(&v35);
          sub_18000F708((__int64 *)&v34);
LABEL_56:
          sub_18000F708(&v37);
          goto LABEL_57;
        }
        sub_180048E18(&v37, v35);
        v26 = v30;
        v27 = 0LL;
        v30 = 0LL;
        if ( v26 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          v27 = v30;
        }
        v28 = v32;
        v30 = 0LL;
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        if ( (*(int (__fastcall **)(__int64, __int64, __int64, __int64 *))(*(_QWORD *)v28 + 64LL))(v28, v35, v37, &v30) < 0 )
        {
          v25 = 7860LL;
          goto LABEL_46;
        }
        sub_180048E18(&v38, v35);
        v24 = 0;
        sub_18000F708(&v35);
        v11 = v38;
      }
      sub_18000F708((__int64 *)&v34);
    }
    if ( v24 >= 0 )
    {
      v36 = 0;
      if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 24LL))(v30, &v36) >= 0 )
      {
        if ( !v36 )
        {
          sub_180048E18(&v33, v30);
          sub_18000F708(&v37);
          goto LABEL_13;
        }
        v29 = 7870LL;
      }
      else
      {
        v29 = 7869LL;
      }
    }
    else
    {
      v29 = 7865LL;
    }
    v17 = -2004287480;
    sub_18004BD84(
      retaddr,
      v29,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2290679816LL);
    goto LABEL_56;
  }
  sub_180048E18(&v33, a4);
  v10 = v33;
LABEL_17:
  v19 = v10;
  v10 = 0LL;
  v33 = 0LL;
  *a5 = v19;
  if ( a6 )
  {
    v20 = v11;
    v11 = 0LL;
    *a6 = v20;
  }
  v17 = 0;
LABEL_20:
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v17;
}
