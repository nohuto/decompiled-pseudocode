/*
 * XREFs of sub_18004EAA0 @ 0x18004EAA0
 * Callers:
 *     sub_18002A54C @ 0x18002A54C (sub_18002A54C.c)
 *     sub_18004EB60 @ 0x18004EB60 (sub_18004EB60.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18004EAA0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  _DWORD *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r11
  _DWORD *v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // r9
  int v17; // ebx

  *a3 = 0LL;
  if ( !sub_180027D40(a2, &stru_18015B900) && !sub_180027D40(v3, &dword_18015B850) )
  {
    if ( sub_180027D40(v7, v6) )
    {
      *v9 = v10;
    }
    else
    {
      if ( !sub_180027D40(v8, &dword_18015B870) )
      {
        if ( !sub_180027D40(v11, &stru_18015B940) )
        {
          if ( !sub_180027D40(v14, &xmmword_18015BA90) )
          {
            v17 = -2147467262;
            v10 = 0LL;
LABEL_9:
            if ( v17 < 0 )
              return (unsigned int)v17;
LABEL_10:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
            return (unsigned int)v17;
          }
          v10 = v16 + 8;
        }
        *v15 = v10;
        v17 = 0;
        goto LABEL_9;
      }
      *v12 = v13;
    }
    v17 = 0;
    goto LABEL_10;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
