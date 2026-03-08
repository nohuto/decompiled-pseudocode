/*
 * XREFs of MiRemoveUnusedSegments @ 0x1406236E4
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403A2790 (MiDereferenceSegmentThread.c)
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140256A00 (KeDelayExecutionThread.c)
 *     MiShouldTrimUnusedSegments @ 0x1404635C8 (MiShouldTrimUnusedSegments.c)
 *     CcUnmapInactiveViews @ 0x140535E58 (CcUnmapInactiveViews.c)
 *     MiDeleteCachedSegment @ 0x140621514 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140621708 (MiDeleteCachedSubsection.c)
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 */

__int64 __fastcall MiRemoveUnusedSegments(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // r15d
  unsigned __int64 v6; // rdi
  int v7; // ebp
  ULONG_PTR v8; // r8
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r14

  v2 = 0;
  v3 = 0;
  if ( a2 )
  {
    if ( a2 >= qword_140C6F568 )
      v6 = 0LL;
    else
      v6 = qword_140C6F568 - a2;
    v7 = 0;
  }
  else
  {
    v7 = 32;
    v6 = 0LL;
  }
  v8 = 1000LL * *(_QWORD *)(a1 + 17040) / qword_140C6F350;
  if ( v8 )
  {
    v9 = *(_QWORD *)(a1 + 1760);
    v10 = v9;
    if ( v8 * (qword_140C651D8 / 0x3E8uLL) <= v9 )
      v10 = v8 * (qword_140C651D8 / 0x3E8uLL);
    if ( v10 )
    {
      v11 = v9 - v10;
      if ( v11 < 0x100000 )
        v11 = 0x100000LL;
      while ( 1 )
      {
        while ( 1 )
        {
          if ( a2 )
          {
            if ( qword_140C6F568 <= v6 )
              return v2;
          }
          else
          {
            if ( !v7 || qword_140C6F568 < 9 * (qword_140C6F658 / 0xAuLL) )
              return v2;
            --v7;
          }
          if ( !(unsigned int)MiShouldTrimUnusedSegments() || *(_QWORD *)(a1 + 1760) <= v11 )
            return v2;
          if ( (++v3 & 0x3F) == 0 )
          {
            MiProcessDereferenceList(a1, 0);
            if ( v3 >= 0x80 )
              CcUnmapInactiveViews(0LL);
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
          }
          if ( *(_QWORD *)(a1 + 1768) == a1 + 1768 )
            break;
          if ( (unsigned int)MiDeleteCachedSegment(a1) )
            goto LABEL_33;
        }
        if ( *(_QWORD *)(a1 + 1784) == a1 + 1784 )
        {
          if ( *(_DWORD *)(a1 + 108) || !(unsigned int)CcUnmapInactiveViews(0LL) )
            return v2;
        }
        else if ( (int)MiDeleteCachedSubsection(a1) >= 0 )
        {
LABEL_33:
          v2 = 1;
        }
      }
    }
  }
  return 0LL;
}
