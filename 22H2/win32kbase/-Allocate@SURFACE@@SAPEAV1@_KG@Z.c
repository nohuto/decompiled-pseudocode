/*
 * XREFs of ?Allocate@SURFACE@@SAPEAV1@_KG@Z @ 0x1C0047A04
 * Callers:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C005ED70 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x1C00478B4 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0158230 (--$FreeIsolatedType@V-$CLookAsideTypeIsolation@$0DGAAA@$0DGA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

struct SURFACE *__fastcall SURFACE::Allocate(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rax
  void *v3; // rbx

  v1 = **(_QWORD **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 6504LL);
  if ( !v1 )
    return 0LL;
  v2 = ExAllocateFromLookasideListEx((PLOOKASIDE_LIST_EX)(v1 + 48));
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( !AcquireReferenceCountedObjectHandle(0LL, v2, v2 + 85) )
  {
    FreeIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<221184,864>>(v3);
    return 0LL;
  }
  return (struct SURFACE *)v3;
}
