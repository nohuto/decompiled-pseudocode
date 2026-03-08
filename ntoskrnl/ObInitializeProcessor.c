/*
 * XREFs of ObInitializeProcessor @ 0x14080D354
 * Callers:
 *     KiStartDynamicProcessor @ 0x140970898 (KiStartDynamicProcessor.c)
 *     ObInitSystem @ 0x140B403CC (ObInitSystem.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x1402B23D0 (MmIsThisAnNtAsSystem.c)
 *     ExInitializeSystemLookasideList @ 0x140A886F8 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall ObInitializeProcessor(_QWORD *a1)
{
  BOOLEAN IsThisAnNtAsSystem; // bp
  __int64 Pool2; // rax
  void *v4; // rbx
  __int64 v5; // rax
  void *v6; // rbx
  __int64 result; // rax

  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  a1[265] = &ObpCreateInfoLookasideList;
  Pool2 = ExAllocatePool2(64LL, 128LL, 1229152847LL);
  v4 = (void *)Pool2;
  if ( Pool2 )
    ExInitializeSystemLookasideList(
      Pool2,
      512,
      64,
      1229152847,
      IsThisAnNtAsSystem != 0 ? 64 : 32,
      (__int64)&ExSystemLookasideListHead);
  else
    v4 = &ObpCreateInfoLookasideList;
  a1[264] = v4;
  a1[267] = &ObpNameBufferLookasideList;
  v5 = ExAllocatePool2(64LL, 128LL, 1296982607LL);
  v6 = (void *)v5;
  if ( v5 )
    ExInitializeSystemLookasideList(
      v5,
      1,
      248,
      1296982607,
      IsThisAnNtAsSystem != 0 ? 32 : 16,
      (__int64)&ExSystemLookasideListHead);
  else
    v6 = &ObpNameBufferLookasideList;
  result = 0LL;
  a1[266] = v6;
  return result;
}
