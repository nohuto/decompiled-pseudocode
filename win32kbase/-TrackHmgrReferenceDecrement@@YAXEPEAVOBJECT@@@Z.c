/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0048350
 * Callers:
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C002D440 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     HmgRemoveObject @ 0x1C0045C70 (HmgRemoveObject.c)
 *     DEC_SHARE_REF_CNT @ 0x1C0049850 (DEC_SHARE_REF_CNT.c)
 *     GreSetBitmapOwner @ 0x1C00A5460 (GreSetBitmapOwner.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0046C4C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C019BB44 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackHmgrReferenceDecrement(__int64 a1, struct OBJECT *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // rbx
  __int64 v3; // rax
  NSInstrumentation::CReferenceTracker::CReferenceCountedType *v4; // rcx

  if ( (_BYTE)a1 == 5 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 85);
    v3 = SGDGetSessionState(a1);
    if ( v2 )
    {
      v4 = *(NSInstrumentation::CReferenceTracker::CReferenceCountedType **)(*(_QWORD *)(v3 + 24) + 8040LL);
      if ( v4 )
        NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(v4, v2, 0);
    }
  }
  else if ( (_BYTE)a1 == 16 )
  {
    TrackObjectReferenceDecrement(
      2LL,
      *((struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)a2 + 17));
  }
}
