/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x1407BCC08
 * Callers:
 *     SmEtwEnableCallback @ 0x1407BCBB0 (SmEtwEnableCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x1402D959C (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1402D95D8 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmEtwLogStoreChange @ 0x14092B06C (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14092B17C (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmKmEtwLogStoreRundown(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int i; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rax

  for ( i = 0; i < 0x400; ++i )
  {
    v6 = SmKmStoreReferenceEx(a2, i, a3);
    v7 = v6;
    if ( v6 )
    {
      SmKmEtwLogStoreStats(a1, v6);
      SmKmEtwLogStoreChange(a1, v7, SmEventStoreRundown);
      v8 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, i & 0x3FF);
      ExReleaseRundownProtection_0(v8 + 1);
    }
  }
}
