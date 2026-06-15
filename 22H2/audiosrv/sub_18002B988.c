/*
 * XREFs of sub_18002B988 @ 0x18002B988
 * Callers:
 *     sub_18002B894 @ 0x18002B894 (sub_18002B894.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_18002BB70 @ 0x18002BB70 (sub_18002BB70.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002B988(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edi
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v10[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+88h] [rbp+20h] BYREF

  v9 = 0LL;
  v10[0] = 0LL;
  v11 = 0LL;
  v4 = a1 + 296;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( *(_WORD *)(a2 + 2 * v5) );
  }
  else
  {
    LODWORD(v5) = 0;
  }
  sub_18002BB70(v4, a2, (unsigned int)v5);
  if ( (*(int (__fastcall **)(_QWORD, __int64, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
         *(_QWORD *)&dwCreationFlags,
         a2,
         &v9) < 0 )
    goto LABEL_27;
  if ( v11 )
    JUMPOUT(0x1800918B1LL);
  if ( !v9 || (sub_18002BB14(&v11, v9, &unk_18015B040), !v11) )
LABEL_29:
    JUMPOUT(0x180091946LL);
  if ( (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL))(v11, a1 + 304) < 0 )
LABEL_27:
    JUMPOUT(0x18009194BLL);
  v6 = v10[0];
  if ( v10[0] != v9 )
  {
    sub_18002BB14(v10, v9, &unk_18015B660);
    v6 = v10[0];
  }
  if ( !v6 )
    goto LABEL_29;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a1 + 312);
  if ( v7 < 0 )
    goto LABEL_27;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v10[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10[0] + 16LL))(v10[0]);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)v7;
}
