/*
 * XREFs of sub_180117FF4 @ 0x180117FF4
 * Callers:
 *     sub_180116778 @ 0x180116778 (sub_180116778.c)
 * Callees:
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_180047420 @ 0x180047420 (sub_180047420.c)
 *     sub_180048714 @ 0x180048714 (sub_180048714.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18004C264 @ 0x18004C264 (sub_18004C264.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180117A50 @ 0x180117A50 (sub_180117A50.c)
 *     sub_180119B6C @ 0x180119B6C (sub_180119B6C.c)
 *     sub_18011E3D4 @ 0x18011E3D4 (sub_18011E3D4.c)
 *     sub_18011E410 @ 0x18011E410 (sub_18011E410.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180117FF4(__int64 a1, char a2, unsigned __int8 a3, unsigned int a4, __int128 *a5, __int64 *a6)
{
  int v7; // r12d
  int v9; // ebx
  void *v10; // rcx
  int v11; // r9d
  int v12; // edx
  __int128 *v13; // rax
  int v14; // eax
  unsigned __int16 *v15; // rbx
  void *v16; // rcx
  int v17; // r9d
  int v18; // edx
  void *v19; // rcx
  int v20; // eax
  __int64 v21; // rsi
  int v22; // eax
  void *v23; // rcx
  _BYTE v25[8]; // [rsp+40h] [rbp-89h] BYREF
  void *v26; // [rsp+48h] [rbp-81h] BYREF
  PROPVARIANT pvar[2]; // [rsp+50h] [rbp-79h] BYREF
  void *Src; // [rsp+60h] [rbp-69h]
  void **v29; // [rsp+68h] [rbp-61h]
  void *v30; // [rsp+70h] [rbp-59h] BYREF
  char v31; // [rsp+78h] [rbp-51h]
  __int128 v32; // [rsp+80h] [rbp-49h] BYREF
  __int128 v33; // [rsp+90h] [rbp-39h]
  __int128 v34; // [rsp+A0h] [rbp-29h]
  __int128 v35; // [rsp+B0h] [rbp-19h]
  __int64 v36; // [rsp+C0h] [rbp-9h]
  __int128 v37; // [rsp+D0h] [rbp+7h] BYREF
  int v38; // [rsp+E0h] [rbp+17h]
  void *retaddr; // [rsp+118h] [rbp+4Fh]

  v7 = a3;
  *a6 = 0LL;
  v26 = 0LL;
  if ( !a2 )
  {
    v13 = (__int128 *)&unk_18015C618;
    if ( a4 != 3 )
      v13 = &xmmword_18015B780;
    v37 = *v13;
    v38 = *((_DWORD *)v13 + 4);
    *(_OWORD *)pvar = 0LL;
    Src = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
            *(_QWORD *)(a1 + 40),
            &v37,
            pvar);
    if ( v14 >= 0 )
    {
      if ( LOWORD(pvar[0]) )
      {
        if ( LOWORD(pvar[0]) == 65 )
        {
          if ( sub_180047420((__int64)pvar) )
          {
            v15 = (unsigned __int16 *)Src;
            v25[0] = 0;
            sub_180119B6C(a5, Src, v25);
            if ( v25[0] )
            {
              v29 = &v26;
              v30 = 0LL;
              v31 = 1;
              v9 = sub_180048714(v15, &v30);
              if ( v31 )
              {
                v16 = *v29;
                *v29 = v30;
                if ( v16 )
                  CoTaskMemFree(v16);
              }
              if ( v9 < 0 )
              {
                v17 = v9;
                v18 = 6566;
LABEL_30:
                sub_18004BD84(
                  (int)retaddr,
                  v18,
                  (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
                  v17);
                PropVariantClear(pvar);
LABEL_35:
                v23 = v26;
                goto LABEL_37;
              }
            }
          }
          else
          {
            sub_18011E3D4(retaddr, 6571LL);
          }
        }
        else
        {
          sub_18011E410(
            retaddr,
            6583LL,
            "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            13LL,
            "Unexpected vartype %d (0x%08x)",
            LOWORD(pvar[0]),
            LOWORD(pvar[0]));
        }
      }
    }
    else
    {
      sub_18006D26C(
        (int)retaddr,
        6554,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        v14);
    }
    if ( !v26 )
    {
      v29 = &v26;
      v30 = 0LL;
      v31 = 1;
      v32 = *a5;
      v33 = a5[1];
      v34 = a5[2];
      v35 = a5[3];
      v36 = *((_QWORD *)a5 + 8);
      v9 = sub_180117A50(a1, v7, a4, (__int64)&v32, &v30);
      if ( v31 )
      {
        v19 = *v29;
        *v29 = v30;
        if ( v19 )
          CoTaskMemFree(v19);
      }
      if ( v9 < 0 )
      {
        v17 = v9;
        v18 = 6590;
        goto LABEL_30;
      }
      v20 = sub_18004C264(a1, v7, a4, (__int64)v26);
      v9 = v20;
      if ( v20 < 0 )
      {
        v17 = v20;
        v18 = 6593;
        goto LABEL_30;
      }
    }
    PropVariantClear(pvar);
    goto LABEL_32;
  }
  pvar[0] = &v26;
  pvar[1] = 0LL;
  LOBYTE(Src) = 1;
  v32 = *a5;
  v33 = a5[1];
  v34 = a5[2];
  v35 = a5[3];
  v36 = *((_QWORD *)a5 + 8);
  v9 = sub_180117A50(a1, a3, a4, (__int64)&v32, &pvar[1]);
  if ( (_BYTE)Src )
  {
    v10 = *(void **)pvar[0];
    *(_QWORD *)pvar[0] = pvar[1];
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( v9 < 0 )
  {
    v11 = v9;
    v12 = 6545;
LABEL_34:
    sub_18004BD84(
      (int)retaddr,
      v12,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      v11);
    goto LABEL_35;
  }
LABEL_32:
  v21 = (__int64)v26;
  v22 = sub_18001FEF0((__int64)v26);
  v9 = v22;
  if ( v22 < 0 )
  {
    v11 = v22;
    v12 = 6598;
    goto LABEL_34;
  }
  v23 = 0LL;
  *a6 = v21;
  v9 = 0;
LABEL_37:
  v26 = 0LL;
  if ( v23 )
    CoTaskMemFree(v23);
  return (unsigned int)v9;
}
