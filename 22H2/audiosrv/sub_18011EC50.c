/*
 * XREFs of sub_18011EC50 @ 0x18011EC50
 * Callers:
 *     sub_1800D7EB0 @ 0x1800D7EB0 (sub_1800D7EB0.c)
 *     sub_18011E608 @ 0x18011E608 (sub_18011E608.c)
 * Callees:
 *     sub_180021ED0 @ 0x180021ED0 (sub_180021ED0.c)
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_180047FDC @ 0x180047FDC (sub_180047FDC.c)
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_18004A848 @ 0x18004A848 (sub_18004A848.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011EC50(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  void *v6; // rcx
  int v7; // r9d
  int v8; // edx
  int v9; // eax
  int v10; // eax
  void *v11; // rcx
  int v12; // r9d
  int v13; // edx
  int v14; // eax
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  __int128 v19; // [rsp+40h] [rbp-30h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-20h]
  LPVOID v21; // [rsp+58h] [rbp-18h] BYREF
  char v22; // [rsp+60h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+18h]
  LPVOID pv; // [rsp+98h] [rbp+28h] BYREF
  LPVOID v25; // [rsp+A0h] [rbp+30h] BYREF

  if ( (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)&dword_18019C448, 0x10uLL) )
  {
    pv = *(LPVOID *)(a1 + 24);
    sub_1800B7704(v2, byte_180169BE4, v3, v4, &pv);
  }
  v19 = xmmword_18015B730;
  sub_180021ED0(a1, 0, &v19, 0LL, 0LL);
  v25 = 0LL;
  p_pv = &v25;
  v21 = 0LL;
  v22 = 1;
  v5 = sub_180028AD0(a1, 0, 0, &v21, 0LL, 0LL, 0LL);
  if ( v22 )
  {
    v6 = *p_pv;
    *p_pv = v21;
    if ( v6 )
      CoTaskMemFree(v6);
  }
  if ( v5 < 0 )
  {
    v7 = v5;
    v8 = 8994;
LABEL_15:
    sub_18004BD84(
      (int)retaddr,
      v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v7);
    goto LABEL_28;
  }
  v9 = sub_18004A848(a1, (unsigned __int16 *)v25, &v19, 0, 0);
  if ( v9 >= 0 )
    goto LABEL_27;
  sub_18006D26C(
    (int)retaddr,
    8997,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v9);
  v10 = sub_180048018(a1, 0, 0LL, 0LL);
  v5 = v10;
  if ( v10 < 0 )
  {
    v8 = 9001;
LABEL_14:
    v7 = v10;
    goto LABEL_15;
  }
  v10 = sub_180047FDC(a1, 0);
  v5 = v10;
  if ( v10 < 0 )
  {
    v8 = 9004;
    goto LABEL_14;
  }
  pv = 0LL;
  p_pv = &pv;
  v21 = 0LL;
  v22 = 1;
  v5 = sub_180028AD0(a1, 0, 1, &v21, 0LL, 0LL, 0LL);
  if ( v22 )
  {
    v11 = *p_pv;
    *p_pv = v21;
    if ( v11 )
      CoTaskMemFree(v11);
  }
  if ( v5 < 0 )
  {
    v12 = v5;
    v13 = 9008;
    goto LABEL_23;
  }
  v14 = sub_180048018(a1, 0, (unsigned __int16 *)pv, 0LL);
  v5 = v14;
  if ( v14 >= 0 )
  {
    v16 = pv;
    pv = 0LL;
    if ( v16 )
      CoTaskMemFree(v16);
LABEL_27:
    v5 = 0;
    goto LABEL_28;
  }
  v12 = v14;
  v13 = 9011;
LABEL_23:
  sub_18004BD84(
    (int)retaddr,
    v13,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    v12);
  v15 = pv;
  pv = 0LL;
  if ( v15 )
    CoTaskMemFree(v15);
LABEL_28:
  v17 = v25;
  v25 = 0LL;
  if ( v17 )
    CoTaskMemFree(v17);
  return (unsigned int)v5;
}
