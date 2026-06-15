/*
 * XREFs of sub_180028AD0 @ 0x180028AD0
 * Callers:
 *     sub_180048018 @ 0x180048018 (sub_180048018.c)
 *     sub_180048910 @ 0x180048910 (sub_180048910.c)
 *     sub_180052690 @ 0x180052690 (sub_180052690.c)
 *     sub_18005CD7C @ 0x18005CD7C (sub_18005CD7C.c)
 *     sub_18011EC50 @ 0x18011EC50 (sub_18011EC50.c)
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 *     sub_18002A340 @ 0x18002A340 (sub_18002A340.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180028AD0(__int64 a1, unsigned int a2, int a3, LPVOID *a4, _QWORD *a5, _DWORD *a6, _QWORD *a7)
{
  void *v11; // rdi
  _QWORD *v12; // r12
  _DWORD *v13; // r13
  void (__fastcall ***v14)(_QWORD, void *, _QWORD *); // r9
  __int64 v15; // rcx
  int v16; // ebx
  signed int v17; // ebx
  __int64 v18; // r9
  int v19; // ecx
  int v20; // edx
  _QWORD *v21; // r8
  __int64 v22; // rax
  int v23; // r8d
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int128 v26; // xmm0
  int v27; // eax
  unsigned int v28; // ebx
  LPVOID v30; // rbx
  void *v31; // rsi
  __int64 v32; // r15
  void *v33; // r14
  int v34; // eax
  unsigned int v35; // ebx
  LPVOID v36; // rax
  _QWORD v37[2]; // [rsp+30h] [rbp-78h] BYREF
  __m256i v38; // [rsp+40h] [rbp-68h]
  __m256i v39; // [rsp+60h] [rbp-48h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]
  int v41; // [rsp+C8h] [rbp+20h] BYREF

  if ( !a4 )
  {
    sub_18004BD84(
      retaddr,
      8598LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147500035LL);
    return 2147500035LL;
  }
  v11 = 0LL;
  *a4 = 0LL;
  v12 = a5;
  if ( a5 )
    *a5 = 0LL;
  v13 = a6;
  if ( a6 )
  {
    *a6 = 0;
    if ( !v12 )
    {
      sub_18004BD84(
        retaddr,
        8609LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        2147500035LL);
      return 2147500035LL;
    }
  }
  if ( a7 )
  {
    *a7 = 0LL;
    if ( !v12 )
    {
      sub_18004BD84(
        retaddr,
        8615LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        2147500035LL);
      return 2147500035LL;
    }
    if ( !v13 )
    {
      sub_18004BD84(
        retaddr,
        8616LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        2147500035LL);
      return 2147500035LL;
    }
  }
  v41 = 0;
  v14 = *(void (__fastcall ****)(_QWORD, void *, _QWORD *))(a1 + 16);
  v15 = 0LL;
  v37[0] = 0LL;
  if ( v14 )
  {
    (**v14)(v14, &unk_18015B040, v37);
    v15 = v37[0];
  }
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 88LL))(v15, &v41);
    v15 = v37[0];
  }
  v16 = v41;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  LOBYTE(v41) = v16 != 0;
  if ( a3 )
    LOBYTE(a3) = 1;
  v17 = a2;
  if ( a2 == 2 )
  {
    v17 = 0;
  }
  else if ( a2 )
  {
LABEL_17:
    v18 = sub_1800234A0((unsigned __int64 *)(a1 + 152), v17);
    goto LABEL_18;
  }
  if ( sub_1800234D0(a1) )
    goto LABEL_17;
  v18 = a1 + 168;
LABEL_18:
  v19 = *(_DWORD *)(v18 + 8);
  if ( v19 )
  {
    v20 = 0;
    if ( v19 <= 0 )
      goto LABEL_24;
    while ( 1 )
    {
      v21 = (_QWORD *)(*(_QWORD *)v18 + 16LL * v20);
      v22 = *v21 - 0x4965933DC18E2F7ELL;
      if ( *v21 == 0x4965933DC18E2F7ELL )
        v22 = v21[1] + 0xCD572DD10E12E49LL;
      if ( !v22 )
        break;
      if ( ++v20 >= v19 )
        goto LABEL_24;
    }
    if ( v20 == -1 )
    {
LABEL_24:
      v23 = 0;
      if ( v19 <= 0 )
        goto LABEL_54;
      while ( 1 )
      {
        v24 = (_QWORD *)(*(_QWORD *)v18 + 16LL * v23);
        v25 = *v24 - 0x4FD1B4939E90EA20LL;
        if ( *v24 == 0x4FD1B4939E90EA20LL )
          v25 = v24[1] + 0x30A9569EEC81575FLL;
        if ( !v25 )
          break;
        if ( ++v23 >= v19 )
          goto LABEL_54;
      }
      if ( v23 == -1 )
LABEL_54:
        v26 = *(_OWORD *)sub_180023320(v18, 0);
      else
        v26 = xmmword_18015B798;
    }
    else
    {
      v26 = xmmword_18015B810;
    }
  }
  else
  {
    v26 = xmmword_18015B730;
  }
  v38.m256i_i64[0] = a1;
  v38.m256i_i32[2] = a2;
  *(_OWORD *)((char *)&v38.m256i_u64[1] + 4) = v26;
  v39 = v38;
  v27 = sub_18001F9C0(a1, a3, v41, a2, (__int128 *)v39.m256i_i8, a4);
  v28 = v27;
  if ( v27 < 0 )
  {
    sub_18004BD84(
      retaddr,
      8621LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (unsigned int)v27);
    return v28;
  }
  if ( !v12 )
    return 0LL;
  v30 = 0LL;
  v37[0] = 0LL;
  v31 = CoTaskMemAlloc(0x48uLL);
  v37[1] = v31;
  if ( v31 )
  {
    v32 = 0LL;
    v33 = 0LL;
    if ( !a7 )
    {
LABEL_35:
      v41 = 0;
      v34 = sub_18002A340(a1, v31, v30, v32, &v41);
      v35 = v34;
      if ( v34 >= 0 )
      {
        *v12 = v31;
        if ( a7 )
        {
          *a7 = v33;
          v33 = 0LL;
        }
        if ( v13 )
          *v13 = v41;
        if ( v33 )
          CoTaskMemFree(v33);
        return 0LL;
      }
      sub_18004BD84(
        retaddr,
        8645LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (unsigned int)v34);
      v11 = v33;
      goto LABEL_62;
    }
    v32 = 6672LL;
    v36 = CoTaskMemAlloc(0x1A10uLL);
    v30 = v36;
    v37[0] = v36;
    if ( v36 )
    {
      v33 = v36;
      goto LABEL_35;
    }
    v35 = -2147024882;
    sub_18004BD84(
      retaddr,
      8638LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147942414LL);
  }
  else
  {
    v35 = -2147024882;
    sub_18004BD84(
      retaddr,
      8631LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      2147942414LL);
  }
LABEL_62:
  if ( v11 )
    CoTaskMemFree(v11);
  if ( v31 )
    CoTaskMemFree(v31);
  return v35;
}
