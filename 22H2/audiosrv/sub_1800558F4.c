/*
 * XREFs of sub_1800558F4 @ 0x1800558F4
 * Callers:
 *     sub_180068150 @ 0x180068150 (sub_180068150.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_180036FA0 @ 0x180036FA0 (sub_180036FA0.c)
 *     sub_18006034C @ 0x18006034C (sub_18006034C.c)
 *     sub_180067F1C @ 0x180067F1C (sub_180067F1C.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800558F4(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  int v6; // ebx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx

  *a1 = 0LL;
  v4 = sub_18006A18C(272LL, &unk_18019F848);
  if ( !v4 )
    return (unsigned int)-2147024882;
  v5 = sub_180067F1C(v4);
  v6 = sub_18006034C(v5, *a2);
  if ( v6 >= 0 )
  {
    *a1 = 0LL;
    if ( sub_180027D40(&dword_18015BAB0, &stru_18015B900) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = 0;
    }
    else
    {
      if ( sub_180027D40(v7, &dword_18015BAC0) )
      {
        *a1 = v5;
        v6 = 0;
        v9 = v5;
      }
      else
      {
        if ( sub_180027D40(v8, v8) )
        {
          v9 = v5 + 8;
          *a1 = v5 + 8;
          v6 = 0;
        }
        else
        {
          v6 = -2147467262;
          v9 = 0LL;
        }
        if ( v6 < 0 )
          goto LABEL_9;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
LABEL_9:
  if ( v5 )
    sub_180036FA0(v5);
  return (unsigned int)v6;
}
