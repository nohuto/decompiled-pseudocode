/*
 * XREFs of sub_1800D5E18 @ 0x1800D5E18
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     ??$_Parse_fp_with_locale@$0A@@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AU_Num_get_parse_result@1@QEADHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@1@1AEBVlocale@1@@Z @ 0x1800121B0 (--$_Parse_fp_with_locale@$0A@@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_1800DEF80 @ 0x1800DEF80 (sub_1800DEF80.c)
 * Callees:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_180048B1C @ 0x180048B1C (sub_180048B1C.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D56D8 @ 0x1800D56D8 (sub_1800D56D8.c)
 *     sub_1800D652C @ 0x1800D652C (sub_1800D652C.c)
 */

// Hidden C++ exception states: #wind=186
__int64 __fastcall sub_1800D5E18(
        unsigned __int64 *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        __int128 *a4,
        __int128 *a5,
        __int128 *a6,
        int a7,
        _QWORD *a8)
{
  void *v12; // r15
  int v13; // eax
  unsigned __int16 *v14; // r13
  unsigned int v15; // ebx
  int v16; // edx
  int v17; // eax
  void *v18; // r12
  LPVOID v19; // rbx
  int v20; // eax
  LPVOID v21; // rdi
  int v22; // edx
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rax
  int v25; // eax
  void *v26; // r14
  int v27; // eax
  unsigned __int16 *v28; // rsi
  int v29; // edx
  int v30; // ecx
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rdi
  int v34; // edx
  unsigned __int16 *v35; // rax
  unsigned __int16 *v36; // rax
  __int128 v38; // [rsp+48h] [rbp-59h] BYREF
  LPVOID Src; // [rsp+58h] [rbp-49h] BYREF
  __int64 v40; // [rsp+60h] [rbp-41h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-39h] BYREF
  LPVOID v42; // [rsp+70h] [rbp-31h] BYREF
  LPVOID v43; // [rsp+78h] [rbp-29h] BYREF
  __int64 v44; // [rsp+80h] [rbp-21h] BYREF
  LPVOID v45[2]; // [rsp+88h] [rbp-19h] BYREF
  __int128 v46[4]; // [rsp+98h] [rbp-9h] BYREF
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+3Fh]
  int v51; // [rsp+120h] [rbp+7Fh]

  v12 = 0LL;
  v43 = 0LL;
  *a8 = 0LL;
  v45[0] = 0LL;
  v13 = sub_180048714(a3, v45);
  v14 = (unsigned __int16 *)v45[0];
  if ( v13 < 0 )
  {
    v15 = -2004287480;
    v16 = 1545;
LABEL_71:
    sub_18004BD84((int)retaddr, v16, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2004287480);
    goto LABEL_72;
  }
  v38 = *a4;
  if ( (int)sub_180020090((__int64)a1, a2, (__int64 *)&v38, &v43) < 0 )
  {
    v15 = -2004287480;
    sub_18004BD84((int)retaddr, 1562, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2004287480);
    v12 = v43;
    goto LABEL_72;
  }
  v38 = *a5;
  v12 = v43;
  if ( (unsigned int)sub_18001E300((__int64)a1, &v38, a2, (unsigned __int16 *)v43, v14, 0LL) )
  {
    v15 = -2004287480;
    if ( a7 )
    {
      v42 = 0LL;
      v38 = *a6;
      v17 = sub_1800D652C(a1, a2, a3, &v38, &v42);
      v18 = v42;
      if ( v17 >= 0 )
      {
        pv = 0LL;
        v40 = 0LL;
        v19 = 0LL;
        Src = 0LL;
        v20 = sub_18001F490(
                (unsigned __int16 *)v42,
                (unsigned int)*((unsigned __int16 *)v42 + 8) + 18,
                (__int64 *)&pv,
                0.0,
                0);
        v21 = pv;
        if ( v20 >= 0 )
        {
          v38 = *a5;
          if ( (int)sub_180048E60(a1, (__int64)&v38, a2, (__int64)pv, &v40) >= 0 )
          {
            v38 = *a5;
            if ( (int)sub_180048B1C(a1, &v38, a2, v40, &Src, 0LL) < 0 )
            {
              sub_18004BD84(
                (int)retaddr,
                1590,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                -2004287480);
              v19 = Src;
LABEL_26:
              v51 = -2004287480;
LABEL_28:
              if ( v19 )
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v19 + 16LL))(v19);
              if ( v40 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
              if ( v21 )
                (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 16LL))(v21);
              goto LABEL_67;
            }
            v38 = *a5;
            v19 = Src;
            v23 = (unsigned __int16 *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)Src + 40LL))(Src);
            if ( (unsigned int)sub_18001E300((__int64)a1, &v38, a2, v23, a3, 0LL) )
            {
              v22 = 1593;
            }
            else
            {
              v24 = (unsigned __int16 *)(*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)v21 + 40LL))(v21);
              if ( (int)sub_180048714(v24, a8) >= 0 )
              {
                if ( *a8 )
                {
                  v51 = 0;
                  goto LABEL_28;
                }
                v22 = 1597;
              }
              else
              {
                v22 = 1596;
              }
            }
          }
          else
          {
            v22 = 1587;
          }
        }
        else
        {
          v22 = 1584;
        }
        sub_18004BD84((int)retaddr, v22, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2004287480);
        goto LABEL_26;
      }
      if ( v17 == -2004287480 )
      {
        Src = 0LL;
        v38 = *a6;
        v25 = sub_180021FB0((__int64)a1, a2, (__int64)&v38, &Src, 0LL, 0LL, 0LL);
        v26 = Src;
        if ( v25 < 0 )
        {
          sub_18004BD84(
            (int)retaddr,
            1607,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            -2004287480);
          v51 = -2004287480;
LABEL_66:
          CoTaskMemFree(v26);
          Src = 0LL;
LABEL_67:
          CoTaskMemFree(v18);
          v42 = 0LL;
          v15 = v51;
          goto LABEL_72;
        }
        if ( *((_DWORD *)v14 + 1) != *((_DWORD *)Src + 1) )
        {
          pv = 0LL;
          v27 = sub_180048714((unsigned __int16 *)Src, &pv);
          v28 = (unsigned __int16 *)pv;
          if ( v27 < 0 )
          {
            v29 = 1612;
LABEL_43:
            sub_18004BD84(
              (int)retaddr,
              v29,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              -2004287480);
            v51 = -2004287480;
LABEL_65:
            CoTaskMemFree(v28);
            pv = 0LL;
            goto LABEL_66;
          }
          v30 = *((_DWORD *)v14 + 1);
          *((_DWORD *)pv + 1) = v30;
          *((_DWORD *)v28 + 2) = v30 * v28[6];
          v38 = *a6;
          if ( (int)sub_1800D56D8((__int64)a1, a2, v28, &v38) < 0 )
          {
            v29 = 1618;
            goto LABEL_43;
          }
          *(_QWORD *)&v38 = 0LL;
          v44 = 0LL;
          v31 = 0LL;
          v40 = 0LL;
          v32 = sub_18001F490(v28, (unsigned int)v28[8] + 18, (__int64 *)&v38, 0.0, 0);
          v33 = v38;
          if ( v32 >= 0 )
          {
            v46[0] = *a5;
            if ( (int)sub_180048E60(a1, (__int64)v46, a2, v38, &v44) >= 0 )
            {
              v46[0] = *a5;
              if ( (int)sub_180048B1C(a1, v46, a2, v44, &v40, 0LL) < 0 )
              {
                sub_18004BD84(
                  (int)retaddr,
                  1631,
                  (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                  -2004287480);
                v31 = v40;
LABEL_57:
                v51 = -2004287480;
LABEL_59:
                if ( v31 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
                if ( v44 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
                if ( v33 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                goto LABEL_65;
              }
              v46[0] = *a5;
              v31 = v40;
              v35 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v40 + 40LL))(v40);
              if ( (unsigned int)sub_18001E300((__int64)a1, v46, a2, v35, v14, 0LL) )
              {
                v34 = 1635;
              }
              else
              {
                v36 = (unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
                if ( (int)sub_180048714(v36, a8) >= 0 )
                {
                  if ( *a8 )
                  {
                    v51 = 0;
                    goto LABEL_59;
                  }
                  v34 = 1639;
                }
                else
                {
                  v34 = 1638;
                }
              }
            }
            else
            {
              v34 = 1627;
            }
          }
          else
          {
            v34 = 1623;
          }
          sub_18004BD84(
            (int)retaddr,
            v34,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            -2004287480);
          goto LABEL_57;
        }
        CoTaskMemFree(Src);
        Src = 0LL;
      }
      CoTaskMemFree(v42);
      v42 = 0LL;
    }
    v16 = 1647;
    goto LABEL_71;
  }
  v38 = *a6;
  if ( (int)sub_180021FB0((__int64)a1, a2, (__int64)&v38, a8, 0LL, 0LL, 0LL) < 0 )
  {
    v15 = -2004287480;
    v16 = 1567;
    goto LABEL_71;
  }
  if ( !*a8 )
  {
    v15 = -2004287480;
    v16 = 1568;
    goto LABEL_71;
  }
  v15 = 0;
LABEL_72:
  CoTaskMemFree(v14);
  v45[0] = 0LL;
  CoTaskMemFree(v12);
  return v15;
}
