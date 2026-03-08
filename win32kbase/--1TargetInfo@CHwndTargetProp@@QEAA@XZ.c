/*
 * XREFs of ??1TargetInfo@CHwndTargetProp@@QEAA@XZ @ 0x1C019A5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwndTargetProp::TargetInfo::~TargetInfo(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    ObfDereferenceObject(v2);
    *this = 0LL;
  }
}
