/*
 * XREFs of ?SetSystemVisual@CHwndTargetProp@@QEAAJW4_HwndTargetType@@PEAUCompositionObject@@@Z @ 0x1C00B6AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CompositionObject@@QEBAJXZ @ 0x1C000F720 (-AddRef@CompositionObject@@QEBAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndTargetProp::SetSystemVisual(__int64 a1, int a2, CompositionObject *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rbp
  int v7; // ebx

  v4 = *(_QWORD *)(a1 + 16);
  v6 = a2;
  if ( !qword_1C0296E08 || (int)qword_1C0296E08() < 0 )
  {
    v7 = 0;
LABEL_9:
    *(_QWORD *)(a1 + 16 * v6 + 24) = a3;
    CompositionObject::AddRef(a3);
    return (unsigned int)v7;
  }
  if ( qword_1C0296E10 )
    v7 = qword_1C0296E10(v4, (unsigned int)v6, a3);
  else
    v7 = 0;
  if ( v7 >= 0 )
    goto LABEL_9;
  return (unsigned int)v7;
}
