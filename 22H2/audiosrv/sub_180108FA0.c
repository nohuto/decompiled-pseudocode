/*
 * XREFs of sub_180108FA0 @ 0x180108FA0
 * Callers:
 *     sub_180108504 @ 0x180108504 (sub_180108504.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     memmove @ 0x18007444B (memmove.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CB144 @ 0x1800CB144 (sub_1800CB144.c)
 *     sub_18010983C @ 0x18010983C (sub_18010983C.c)
 *     sub_18010B1AC @ 0x18010B1AC (sub_18010B1AC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180108FA0(_QWORD *a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // r8d
  _DWORD *v7; // rcx
  _DWORD *i; // rbx
  __int64 result; // rax
  _QWORD *v11; // rbx
  _DWORD *v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  int v16; // r9d
  int v17; // eax
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v19; // [rsp+60h] [rbp+20h] BYREF
  _QWORD *v20; // [rsp+68h] [rbp+28h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF

  v6 = *(_DWORD *)(a2 + 52);
  v7 = (_DWORD *)a1[40];
  for ( i = (_DWORD *)a1[39]; i != v7 && *i != v6; i += 2 )
    ;
  if ( i == v7 )
    result = 0LL;
  else
    result = (unsigned int)i[1];
  if ( (unsigned int)CallbackContext > 5 )
  {
    LODWORD(v19) = result;
    LODWORD(v20) = i != v7;
    v21 = v6;
    result = sub_18010983C(
               (unsigned int)&CallbackContext,
               (unsigned int)&unk_18016905E,
               v6,
               a4,
               (__int64)&v21,
               (__int64)&v20,
               (__int64)&v19);
  }
  if ( i != (_DWORD *)a1[40] && i[1]-- == 1 )
  {
    memmove(i, i + 2, a1[40] - (_QWORD)(i + 2));
    a1[40] -= 8LL;
    v11 = 0LL;
    v20 = 0LL;
    if ( sub_180027D40(dword_180172938, &stru_18015B900) )
    {
      v11 = a1;
      v14 = *a1;
      v15 = a1;
    }
    else
    {
      if ( sub_180027D40(v12, dword_18015BA40) )
      {
        v11 = a1;
      }
      else
      {
        if ( !sub_180027D40(v13, v13) )
        {
          v16 = -2147467262;
LABEL_21:
          if ( v16 >= 0 )
          {
            v19 = 0LL;
            sub_1800CB144(&v19);
            if ( (int)sub_18010B1AC(a2, &v19) >= 0 )
            {
              v17 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 544LL))(v19, v11);
              if ( v17 < 0 )
                sub_18006D26C(
                  (int)retaddr,
                  768,
                  (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                  v17);
            }
            sub_18000F708(&v19);
          }
          else
          {
            sub_18006D26C(
              (int)retaddr,
              763,
              (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              v16);
          }
          return sub_18000F708((__int64 *)&v20);
        }
        v11 = a1 + 1;
      }
      v14 = *v11;
      v15 = v11;
    }
    v20 = v11;
    (*(void (__fastcall **)(_QWORD *))(v14 + 8))(v15);
    v16 = 0;
    goto LABEL_21;
  }
  return result;
}
