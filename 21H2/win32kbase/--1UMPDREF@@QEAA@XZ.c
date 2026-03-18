/*
 * XREFs of ??1UMPDREF@@QEAA@XZ @ 0x1C00CC094
 * Callers:
 *     ?vRelease@UMPDOBJ@@SAXPEAV1@H@Z @ 0x1C00CC010 (-vRelease@UMPDOBJ@@SAXPEAV1@H@Z.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0021FC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHHH@Z @ 0x1C0022260 (-vLockHandle@HANDLELOCK@@AEAAXIHHH@Z.c)
 *     ?TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0022D40 (-TrackHmgrReferenceDecrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall UMPDREF::~UMPDREF(char **this)
{
  char *v1; // rbx
  unsigned int v3; // eax
  char *v4; // rbx
  int v5; // eax
  __int64 v6; // [rsp+30h] [rbp-28h] BYREF
  int v7; // [rsp+38h] [rbp-20h]

  v1 = *this;
  if ( *this )
  {
    v3 = *(_DWORD *)v1;
    v6 = 0LL;
    v7 = 0;
    HANDLELOCK::vLockHandle((HANDLELOCK *)&v6, (unsigned __int16)v3 | (v3 >> 8) & 0xFF0000, 0LL, 0, 1);
    if ( v7 )
    {
      TrackHmgrReferenceDecrement(*(_BYTE *)(v6 + 14), (struct OBJECT *)v1);
      --*((_DWORD *)v1 + 2);
      HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
      if ( v7 )
        HANDLELOCK::vUnlock((HANDLELOCK *)&v6);
    }
    v4 = *this;
    if ( qword_1C029B760 && (int)qword_1C029B760() >= 0 )
    {
      v5 = (int)qword_1C029B768;
      if ( qword_1C029B768 )
        v5 = qword_1C029B768(v4);
      if ( v5 )
      {
        if ( *this )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            *this);
      }
    }
  }
}
