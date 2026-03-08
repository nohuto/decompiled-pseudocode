/*
 * XREFs of VfSuspectDifRemoveEntry @ 0x140AD734C
 * Callers:
 *     VfDriverRemoveDifVerification @ 0x140AC7778 (VfDriverRemoveDifVerification.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140AD7C74 (VfSuspectRemoveDifVolatileVerification.c)
 *     VfVolatileApplyDifVerification @ 0x140ADAA10 (VfVolatileApplyDifVerification.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     ViSuspectDriversLookupEntry @ 0x140AD7CE0 (ViSuspectDriversLookupEntry.c)
 */

void __fastcall VfSuspectDifRemoveEntry(const UNICODE_STRING *a1)
{
  _QWORD *v1; // rax
  __int64 v2; // rdx
  _QWORD *v3; // rcx

  v1 = (_QWORD *)ViSuspectDriversLookupEntry(a1);
  if ( v1 )
  {
    v2 = *v1;
    if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v3 = (_QWORD *)v1[1], (_QWORD *)*v3 != v1) )
      __fastfail(3u);
    *v3 = v2;
    *(_QWORD *)(v2 + 8) = v3;
    ExFreePoolWithTag(v1, 0x44536656u);
  }
}
