/*
 * XREFs of sub_180027AE0 @ 0x180027AE0
 * Callers:
 *     sub_1800749E0 @ 0x1800749E0 (sub_1800749E0.c)
 *     sub_1800749F0 @ 0x1800749F0 (sub_1800749F0.c)
 *     sub_180074A00 @ 0x180074A00 (sub_180074A00.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180027AE0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r10
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r10
  int v10; // edi
  __int64 v12; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || *a2 == -1350114592 && a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64, _DWORD *, _QWORD *, _DWORD *))(*(_QWORD *)a1 + 8LL))(a1, a2, a3, a2);
    return v3;
  }
  if ( (unsigned int)sub_180027D40(a2, &unk_18015B850) || (unsigned int)sub_180027D40(v4, &xmmword_18015B880) )
  {
    *v5 = v6;
    v10 = 0;
    goto LABEL_9;
  }
  if ( (unsigned int)sub_180027D40(v7, &unk_18015B870) )
  {
    *v5 = v9;
LABEL_7:
    v10 = 0;
    goto LABEL_8;
  }
  if ( (unsigned int)sub_180027D40(v8, &unk_18015B850) )
  {
    *v5 = v12 + 8;
    goto LABEL_7;
  }
  v10 = -2147467262;
LABEL_8:
  if ( v10 >= 0 )
LABEL_9:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 8LL))(*v5);
  return (unsigned int)v10;
}
