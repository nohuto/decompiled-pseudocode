/*
 * XREFs of ViPacketNotificationCallback @ 0x1409E2A80
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall ViPacketNotificationCallback(_QWORD *Entry, __int64 a2, int a3)
{
  int v4; // r8d
  void *v5; // rcx

  v4 = a3 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v5 = (void *)Entry[28];
      if ( v5 )
        ExFreePoolWithTag(v5, 0x6D646C56u);
      ExFreeToNPagedLookasideList(&ViPacketLookaside, Entry);
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(a2 + 16) &= 0x3FFFFFFFu;
  }
}
