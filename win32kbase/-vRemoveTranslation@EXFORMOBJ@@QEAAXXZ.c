/*
 * XREFs of ?vRemoveTranslation@EXFORMOBJ@@QEAAXXZ @ 0x1C00B9D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EXFORMOBJ::vRemoveTranslation(EXFORMOBJ *this)
{
  __int64 v1; // rax

  *(_DWORD *)(*(_QWORD *)this + 24LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 28LL) = 0;
  v1 = *(_QWORD *)this;
  *(_QWORD *)(v1 + 16) = 0LL;
  *(_DWORD *)(v1 + 32) |= 0x40u;
}
