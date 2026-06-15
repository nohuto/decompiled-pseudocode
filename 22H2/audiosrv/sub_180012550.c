/*
 * XREFs of sub_180012550 @ 0x180012550
 * Callers:
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_18011FCE4 @ 0x18011FCE4 (sub_18011FCE4.c)
 * Callees:
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BC6FC @ 0x1800BC6FC (sub_1800BC6FC.c)
 *     sub_18011E3D4 @ 0x18011E3D4 (sub_18011E3D4.c)
 *     sub_18011E410 @ 0x18011E410 (sub_18011E410.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180012550(__int64 a1, int a2, __int128 *a3, _QWORD *a4)
{
  unsigned int v7; // esi
  struct _RTL_CRITICAL_SECTION *v8; // rbp
  unsigned int i; // edx
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  unsigned int v13; // ebx
  void *v15; // rbx
  int v16; // eax
  int v17; // eax
  PROPVARIANT pvar[2]; // [rsp+40h] [rbp-88h] BYREF
  void *Src; // [rsp+50h] [rbp-78h]
  __int128 v20; // [rsp+60h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v21; // [rsp+70h] [rbp-58h]
  __int128 v22; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v23; // [rsp+88h] [rbp-40h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  v7 = 0;
  *a4 = 0LL;
  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8688);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8688));
  v21 = v8;
  v20 = *a3;
  for ( i = 0; i < 9; ++i )
  {
    v10 = qword_18019D7B0[2 * i] - v20;
    if ( !v10 )
      v10 = qword_18019D7B0[2 * i + 1] - *((_QWORD *)&v20 + 1);
    if ( !v10 )
    {
      v22 = xmmword_1801601F0;
      v11 = 2;
      if ( a2 == 3 )
        v11 = 602;
      v23 = i + v11;
      *(_OWORD *)pvar = 0LL;
      Src = 0LL;
      v12 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *, _QWORD *))(**(_QWORD **)(a1 + 40) + 40LL))(
              *(_QWORD *)(a1 + 40),
              &v22,
              pvar,
              qword_18019D7B0);
      if ( v12 < 0 )
      {
        sub_18006D26C(
          retaddr,
          6902LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v12);
      }
      else if ( LOWORD(pvar[0]) )
      {
        if ( LOWORD(pvar[0]) == 65 )
        {
          if ( (unsigned int)sub_180047420(pvar) )
          {
            v15 = Src;
            if ( Src )
            {
              v16 = sub_18004BB48(Src);
              if ( !v16 )
              {
                v17 = sub_180048714(v15);
                v13 = v17;
                if ( v17 >= 0 )
                  goto LABEL_11;
                sub_18004BD84(
                  retaddr,
                  6940LL,
                  "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  (unsigned int)v17);
LABEL_10:
                v7 = v13;
LABEL_11:
                PropVariantClear(pvar);
                goto LABEL_12;
              }
              v7 = -2004287480;
              sub_1800BC6FC(
                retaddr,
                6938LL,
                "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                2290679816LL,
                "ValidateUncompressedWaveFormatEx returned 0x%08x",
                v16);
            }
          }
          else
          {
            sub_18011E3D4(retaddr, 6915LL);
          }
        }
        else
        {
          sub_18011E410(
            retaddr,
            6928LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            13LL,
            "unexpected vartype %d (0x%x)",
            LOWORD(pvar[0]),
            LOWORD(pvar[0]));
        }
      }
      v13 = v7;
      goto LABEL_10;
    }
  }
  v7 = -2147023728;
  sub_18004BD84(
    retaddr,
    6897LL,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    2147943568LL);
LABEL_12:
  if ( v8 )
    LeaveCriticalSection(v8);
  return v7;
}
