/*
 * XREFs of ?vPrependBeforeSubpath@WIDEPATHOBJ@@QEAAXXZ @ 0x1C02F5078
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0150E1A (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall WIDEPATHOBJ::vPrependBeforeSubpath(WIDEPATHOBJ *this)
{
  __int64 v1; // rbx
  __int64 v3; // r10
  __int64 v4; // rdx
  int i; // eax
  __int64 v6; // r8
  __int64 v7; // rcx
  int j; // eax
  _QWORD *v9; // rax

  v1 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v1 + 40);
  v4 = v3;
  for ( i = *(_DWORD *)(v3 + 16); (i & 1) == 0; i = *(_DWORD *)(v4 + 16) )
    v4 = *(_QWORD *)(v4 + 8);
  v6 = *(_QWORD *)(v4 + 8);
  v7 = v6;
  for ( j = *(_DWORD *)(v6 + 16); (j & 1) == 0; j = *(_DWORD *)(v7 + 16) )
    v7 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)(v1 + 40) = v6;
  v9 = *(_QWORD **)(v7 + 8);
  if ( v9 )
    *v9 = v4;
  else
    *(_QWORD *)(*((_QWORD *)this + 1) + 32LL) = v4;
  *(_QWORD *)(v4 + 8) = *(_QWORD *)(v7 + 8);
  *(_QWORD *)v3 = v7;
  *(_QWORD *)(v7 + 8) = v3;
  *(_QWORD *)v6 = 0LL;
  *(_DWORD *)(v7 + 16) &= ~1u;
  *(_DWORD *)(v3 + 16) &= 0xFFFFFFF5;
}
