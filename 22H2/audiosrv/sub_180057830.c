/*
 * XREFs of sub_180057830 @ 0x180057830
 * Callers:
 *     sub_18005757C @ 0x18005757C (sub_18005757C.c)
 * Callees:
 *     sub_18002BB14 @ 0x18002BB14 (sub_18002BB14.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180057830(__int64 a1, void (__fastcall ***a2)(_QWORD, __int64, __int64 *), __int64 a3)
{
  _QWORD *v6; // rcx
  __int64 v7; // rbx
  SIZE_T v8; // rbx
  _WORD *v9; // rax
  SIZE_T v10; // rbx
  SIZE_T v11; // rdx
  __int64 v12; // rdi
  __int16 v13; // cx
  __int64 v14; // rcx
  int v15; // ebx
  void (__fastcall ***v17)(_QWORD, __int64, __int64 *); // [rsp+50h] [rbp+8h] BYREF

  v17 = 0LL;
  v6 = (_QWORD *)(a1 + 32);
  if ( (void (__fastcall ***)(_QWORD, __int64, __int64 *))*v6 != a2 )
    sub_1800579A4(v6);
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(a3 + 2 * v7) );
  v8 = 2 * v7 + 2;
  v9 = CoTaskMemAlloc(v8);
  *(_QWORD *)(a1 + 16) = v9;
  if ( !v9 )
  {
    v15 = -2147024882;
    goto LABEL_20;
  }
  v10 = v8 >> 1;
  if ( v10 - 1 > 0x7FFFFFFE )
  {
    if ( !v10 )
      goto LABEL_14;
  }
  else
  {
    v11 = 2147483646 - v10;
    v12 = a3 - (_QWORD)v9;
    while ( v11 + v10 )
    {
      v13 = *(_WORD *)((char *)v9 + v12);
      if ( !v13 )
        break;
      *v9++ = v13;
      if ( !--v10 )
        goto LABEL_24;
    }
    if ( v10 )
      goto LABEL_13;
LABEL_24:
    --v9;
  }
LABEL_13:
  *v9 = 0;
LABEL_14:
  v14 = (__int64)v17;
  if ( v17 != a2 )
  {
    sub_18002BB14((__int64 *)&v17, a2, (__int64)&unk_18015BB38);
    v14 = (__int64)v17;
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, a1 + 8);
  if ( v15 >= 0 )
  {
    v15 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *), __int64))(*v17)[3])(v17, a1 + 28);
    if ( v15 >= 0 )
    {
      v15 = ((__int64 (__fastcall *)(_QWORD, void *, __int64))(*a2)[14])(a2, &unk_18019D9E0, a1);
      if ( v15 >= 0 )
        *(_DWORD *)(a1 + 12) = 1;
    }
  }
LABEL_20:
  if ( v17 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v17)[2])(v17);
  return (unsigned int)v15;
}
