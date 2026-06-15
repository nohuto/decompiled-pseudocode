/*
 * XREFs of sub_1800373B0 @ 0x1800373B0
 * Callers:
 *     sub_180074F20 @ 0x180074F20 (sub_180074F20.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800373B0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r9
  int v5; // edi
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r11
  _QWORD *v10; // r8
  __int64 v11; // r11

  v3 = 0;
  *a3 = 0LL;
  v4 = a1;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, __int64))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a1);
    return v3;
  }
  if ( *a2 == -368164887 && a2[1] == 1088810510 && a2[2] == -1524059490 && a2[3] == 1166348406 )
  {
    *a3 = a1;
  }
  else
  {
    if ( !sub_180027D40(a2, dword_180172918) )
    {
      if ( sub_180027D40(v7, dword_18015B8E0) )
      {
        *v10 = v11;
        v5 = 0;
      }
      else
      {
        v5 = -2147467262;
        v4 = 0LL;
      }
      if ( v5 < 0 )
        return (unsigned int)v5;
      goto LABEL_8;
    }
    *v8 = v9;
  }
  v5 = 0;
LABEL_8:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return (unsigned int)v5;
}
