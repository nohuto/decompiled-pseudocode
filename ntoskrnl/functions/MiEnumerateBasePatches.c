void __fastcall MiEnumerateBasePatches(__int64 a1, unsigned int (__fastcall *a2)(_QWORD *, __int64), __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx

  v3 = (_QWORD *)(a1 + 296);
  for ( i = *(_QWORD **)(a1 + 296); i != v3 && a2(i - 37, a3); i = (_QWORD *)*i )
    ;
}
