/*
 * XREFs of ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x1C016E14C
 * Callers:
 *     ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C016DA00 (-bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HFDBASIS64::vParentError(HFDBASIS64 *this, __int64 *a2)
{
  __int64 v3; // r10
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // rdx

  v3 = *((_QWORD *)this + 2);
  v4 = 4LL * *((_QWORD *)this + 3);
  v5 = abs64(v4);
  v6 = 8 * v3;
  if ( 8 * v3 - v4 >= 0 )
    v7 = 8 * v3 - v4;
  else
    v7 = v4 - v6;
  if ( v5 <= v7 )
  {
    if ( 8 * v3 - v4 >= 0 )
      v5 = 8 * v3 - v4;
    else
      v5 = v4 - v6;
  }
  *a2 = v5;
}
