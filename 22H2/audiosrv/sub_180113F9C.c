/*
 * XREFs of sub_180113F9C @ 0x180113F9C
 * Callers:
 *     sub_180113270 @ 0x180113270 (sub_180113270.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180113DA4 @ 0x180113DA4 (sub_180113DA4.c)
 *     sub_180113EAC @ 0x180113EAC (sub_180113EAC.c)
 *     sub_180113F60 @ 0x180113F60 (sub_180113F60.c)
 *     sub_180114590 @ 0x180114590 (sub_180114590.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180113F9C(__int64 a1, __int64 a2, unsigned int a3, unsigned int *a4)
{
  HRESULT v7; // ebx
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // r8
  __int64 v11; // rsi
  unsigned int v12; // edi
  void (__fastcall ***v13)(_QWORD, __int64, __int64 *); // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v16; // edi
  void (__fastcall ***v18)(_QWORD, __int64, __int64 *); // [rsp+30h] [rbp-50h] BYREF
  unsigned int v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h] BYREF
  __int64 v21; // [rsp+48h] [rbp-38h] BYREF
  void (__fastcall ***v22)(_QWORD, const IID *, __int64 *); // [rsp+50h] [rbp-30h] BYREF
  unsigned int v23; // [rsp+58h] [rbp-28h] BYREF
  void (__fastcall ***v24)(_QWORD, const IID *, __int64 *); // [rsp+60h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+68h] [rbp-18h] BYREF
  __int64 v26; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+B0h] [rbp+30h] BYREF
  int v28; // [rsp+B4h] [rbp+34h]

  v28 = HIDWORD(a1);
  ppv = 0LL;
  v22 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v27 = 0;
  v19 = 0;
  v7 = CoCreateInstance(&rclsid, 0LL, 0x17u, &stru_18015B0C0, &ppv);
  if ( v7 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 40LL))(ppv, a2, &v22);
    if ( v7 >= 0 )
    {
      if ( !sub_180113EAC(&v24, v22) )
        sub_18002BB14((__int64 *)&v24, (void (__fastcall ***)(_QWORD, __int64, __int64 *))v22, (__int64)&unk_18015B660);
      if ( !v24 )
        goto LABEL_6;
      v7 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, const IID *, __int64 *), unsigned int *))(*v24)[3])(
             v24,
             &v19);
      if ( v7 >= 0 )
      {
        if ( (unsigned int)sub_180113F60((__int64)v22, v19, a3) )
        {
LABEL_6:
          v7 = -2147467259;
          goto LABEL_69;
        }
        v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(
               ppv,
               v19,
               1LL,
               &v21);
        if ( v7 >= 0 )
        {
          v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v27);
          if ( v7 >= 0 )
          {
            if ( !v27 )
            {
              v7 = -2147023728;
              goto LABEL_69;
            }
            v8 = -1LL;
            v9 = 0;
            do
            {
              v18 = 0LL;
              v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 32LL))(v21, v9, &v18);
              if ( v7 < 0 )
                goto LABEL_65;
              if ( !(unsigned int)sub_180113F60((__int64)v18, v19, a3)
                && (int)sub_180113DA4(v18, a3, &v20) >= 0
                && v8 <= v20 )
              {
                v8 = v20;
              }
              if ( v18 )
                ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v18)[2])(v18);
              ++v9;
            }
            while ( v9 < v27 );
            if ( v8 == -1 )
              v10 = 1LL;
            else
              v10 = v8 + 2;
            v11 = 0LL;
            if ( v8 != -1 )
              v11 = v8 + 1;
            v7 = sub_180114590(v22, a3, v10);
            if ( v7 >= 0 )
            {
              v12 = 0;
              if ( v27 )
              {
                do
                {
                  v18 = 0LL;
                  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 32LL))(v21, v12, &v18);
                  if ( v7 < 0 )
                    goto LABEL_65;
                  if ( !(unsigned int)sub_180113F60((__int64)v18, v19, a3) && (int)sub_180113DA4(v18, a3, &v26) < 0 )
                  {
                    v20 = 0LL;
                    v23 = 0;
                    v13 = v18;
                    if ( !v18 )
                      goto LABEL_63;
                    sub_18002BB14(&v20, v18, (__int64)&unk_18015B040);
                    if ( !v20 )
                    {
                      v13 = v18;
LABEL_63:
                      v7 = -2147024809;
                      if ( v13 )
                        ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v13)[2])(v13);
                      goto LABEL_69;
                    }
                    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v20 + 72LL))(
                           v20,
                           a3,
                           &v23);
                    if ( v7 < 0 )
                    {
                      v15 = v20;
LABEL_58:
                      if ( v15 )
                        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
                      goto LABEL_65;
                    }
                    v14 = v11;
                    if ( v23 < 0x60000000 )
                      v14 = 0LL;
                    v7 = sub_180114590(v18, a3, v14);
                    v15 = v20;
                    if ( v7 < 0 )
                      goto LABEL_58;
                    if ( v20 )
                      (*(void (**)(void))(*(_QWORD *)v20 + 16LL))();
                  }
                  if ( v18 )
                    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v18)[2])(v18);
                }
                while ( ++v12 < v27 );
              }
              if ( v21 )
                sub_1800579A4(&v21, 0LL);
              v7 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(
                     ppv,
                     v19,
                     14LL,
                     &v21);
              if ( v7 >= 0 )
              {
                v7 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v27);
                if ( v7 >= 0 )
                {
                  v16 = 0;
                  if ( !v27 )
                  {
LABEL_67:
                    if ( v7 >= 0 )
                      *a4 = v19;
                    goto LABEL_69;
                  }
                  while ( 1 )
                  {
                    v18 = 0LL;
                    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 32LL))(v21, v16, &v18);
                    if ( v7 < 0 )
                      break;
                    if ( !(unsigned int)sub_180113F60((__int64)v18, v19, a3)
                      && (int)sub_180113DA4(v18, a3, &v20) >= 0
                      && v20 >= v11 )
                    {
                      v7 = sub_180114590(v18, a3, ++v20);
                      if ( v7 < 0 )
                        break;
                    }
                    if ( v18 )
                      ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v18)[2])(v18);
                    if ( ++v16 >= v27 )
                      goto LABEL_67;
                  }
LABEL_65:
                  if ( v18 )
                    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v18)[2])(v18);
                  goto LABEL_67;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_69:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v24 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, const IID *, __int64 *)))(*v24)[2])(v24);
  if ( v22 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, const IID *, __int64 *)))(*v22)[2])(v22);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v7;
}
