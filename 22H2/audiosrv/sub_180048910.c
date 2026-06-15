/*
 * XREFs of sub_180048910 @ 0x180048910
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 * Callees:
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_180028AD0 @ 0x180028AD0 (sub_180028AD0.c)
 *     sub_180047FDC @ 0x180047FDC (sub_180047FDC.c)
 *     sub_180049150 @ 0x180049150 (sub_180049150.c)
 *     sub_18004A848 @ 0x18004A848 (sub_18004A848.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BC54 @ 0x18004BC54 (sub_18004BC54.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180072034 @ 0x180072034 (sub_180072034.c)
 *     sub_18011F504 @ 0x18011F504 (sub_18011F504.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180048910(_QWORD *a1, unsigned int a2, __int64 a3)
{
  char v6; // si
  int v7; // eax
  int v8; // ebx
  __int128 v9; // xmm6
  void *v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  void *v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  unsigned int v20; // [rsp+48h] [rbp-49h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-41h] BYREF
  __int128 p_pv; // [rsp+58h] [rbp-39h] BYREF
  char v23; // [rsp+68h] [rbp-29h]
  __int64 v24; // [rsp+78h] [rbp-19h] BYREF
  _QWORD v25[3]; // [rsp+80h] [rbp-11h] BYREF
  char v26; // [rsp+98h] [rbp+7h]
  _QWORD *v27; // [rsp+A0h] [rbp+Fh]
  char v28; // [rsp+A8h] [rbp+17h]
  void *retaddr; // [rsp+F0h] [rbp+5Fh]

  v20 = a2;
  v27 = a1;
  v6 = 1;
  v28 = 1;
  if ( !a3 )
  {
    v7 = sub_18004C264(a1, 0LL, a2, 0LL);
    v8 = v7;
    if ( v7 >= 0 )
    {
      v6 = 0;
      v8 = 0;
      goto LABEL_19;
    }
    v16 = 8481LL;
    goto LABEL_31;
  }
  v7 = sub_18004BB48(a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v16 = 8487LL;
    goto LABEL_31;
  }
  v9 = *sub_180022AC0(a1, &p_pv, a2, 0);
  p_pv = v9;
  v7 = sub_18004A848(a1, a3, &p_pv, v20, 0);
  v8 = v7;
  if ( v7 == -2004287480 )
  {
    v7 = sub_18011F504(a1, a3);
    v8 = v7;
    if ( v7 >= 0 )
    {
      p_pv = v9;
      v7 = sub_18004A848(a1, a3, &p_pv, v20, 0);
      v8 = v7;
      if ( v7 >= 0 )
        goto LABEL_5;
      v16 = 8503LL;
    }
    else
    {
      v16 = 8500LL;
    }
LABEL_31:
    sub_18004BD84(
      retaddr,
      v16,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v7);
    goto LABEL_19;
  }
  if ( v7 < 0 )
  {
    v16 = 8507LL;
    goto LABEL_31;
  }
LABEL_5:
  pv = 0LL;
  p_pv = (unsigned __int64)&pv;
  v23 = 1;
  v8 = sub_180028AD0((__int64)a1, 0, 0, (LPVOID *)&p_pv + 1, 0LL, 0LL, 0LL);
  if ( v23 )
  {
    v10 = *(void **)p_pv;
    *(_QWORD *)p_pv = *((_QWORD *)&p_pv + 1);
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( v8 < 0 )
  {
    v17 = (unsigned int)v8;
    v18 = 8512LL;
  }
  else
  {
    v11 = sub_18004C264(a1, 0LL, v20, a3);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v25[0] = a1;
      v25[1] = &v20;
      v25[2] = &pv;
      v26 = 1;
      v12 = sub_180049150(a1, 0LL);
      v8 = v12;
      if ( v12 < 0 )
      {
        v19 = 8524LL;
      }
      else
      {
        v13 = sub_180049150(a1, 3LL);
        if ( v13 < 0 )
          sub_18006D26C(
            retaddr,
            8528LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (unsigned int)v13);
        v24 = 0LL;
        v12 = sub_18004BC54(a1, &v24);
        v8 = v12;
        if ( v12 < 0 )
        {
          v19 = 8537LL;
        }
        else
        {
          p_pv = *sub_180022AC0(a1, &p_pv, v20, 0);
          v12 = sub_18004A848(a1, a3, &p_pv, v20, 1);
          v8 = v12;
          if ( v12 >= 0 )
          {
            v26 = 0;
            v6 = 0;
            v8 = 0;
LABEL_16:
            sub_180072034(v25);
            goto LABEL_17;
          }
          v19 = 8549LL;
        }
      }
      sub_18004BD84(
        retaddr,
        v19,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v12);
      goto LABEL_16;
    }
    v17 = (unsigned int)v11;
    v18 = 8515LL;
  }
  sub_18004BD84(retaddr, v18, "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp", v17);
LABEL_17:
  v14 = pv;
  pv = 0LL;
  if ( v14 )
    CoTaskMemFree(v14);
LABEL_19:
  if ( v6 )
    sub_180047FDC((__int64)a1, 0);
  return (unsigned int)v8;
}
