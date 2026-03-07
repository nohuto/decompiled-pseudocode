__int64 ExInitPoolLookasidePointers()
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int v1; // edi
  int v2; // ebx
  __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->Number )
  {
    qword_140C2D248 = (__int64)&ExPoolLookasideListHead;
    qword_140C2D258 = (__int64)&ExSystemLookasideListHead;
    ExSystemLookasideListHead = (__int64)&ExSystemLookasideListHead;
    ExPoolLookasideListHead = (__int64)&ExPoolLookasideListHead;
    ExInitializeSystemLookasideList(
      (unsigned int)&ExpScratchBufferLookasideList,
      512,
      1264,
      1717723987,
      32,
      (__int64)&ExSystemLookasideListHead);
  }
  CurrentPrcb->PPLookasideList[8].L = (_GENERAL_LOOKASIDE *)&ExpScratchBufferLookasideList;
  CurrentPrcb->PPLookasideList[8].P = (_GENERAL_LOOKASIDE *)&ExpScratchBufferLookasideList;
  v1 = 16;
  v2 = (_DWORD)CurrentPrcb + 2304;
  do
  {
    ExInitializeSystemLookasideList(v2 + 3072, 0, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    ExInitializeSystemLookasideList(v2, 512, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    result = ExInitializeSystemLookasideList(v2 + 6144, 1, v1, 1282371408, 256, (__int64)&ExPoolLookasideListHead);
    v1 += 16;
    v2 += 96;
  }
  while ( v1 < 0x210 );
  return result;
}
