/*
 * XREFs of ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D40
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C001E9A4 (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 *     HmgRemoveObject @ 0x1C001F4E0 (HmgRemoveObject.c)
 *     EngUnlockSurface @ 0x1C00205F0 (EngUnlockSurface.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0090DF0 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     HmgShareUnlockRemoveObject @ 0x1C00979E0 (HmgShareUnlockRemoveObject.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C00CC094 (--1UMPDREF@@QEAA@XZ.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0022DEC (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAUSCircularBuffer@123@_N@Z @ 0x1C017A888 (-ReferenceDereferenceCommon@CReferenceCountedType@CReferenceTracker@NSInstrumentation@@AEAAXPEAU.c)
 */

void __fastcall TrackHmgrReferenceDecrement(char a1, struct OBJECT *a2)
{
  struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *v2; // rdx

  if ( a1 == 5 )
  {
    v2 = (struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer *)*((_QWORD *)a2 + 85);
    if ( v2 && qword_1C028F9B8 )
      NSInstrumentation::CReferenceTracker::CReferenceCountedType::ReferenceDereferenceCommon(qword_1C028F9B8, v2, 0);
  }
  else if ( a1 == 16 )
  {
    TrackObjectReferenceDecrement(2LL, *((_QWORD *)a2 + 17));
  }
}
