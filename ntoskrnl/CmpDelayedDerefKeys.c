/*
 * XREFs of CmpDelayedDerefKeys @ 0x1407AEFE8
 * Callers:
 *     CmpPostNotify @ 0x1406B3790 (CmpPostNotify.c)
 *     CmpCloseKeyObject @ 0x1406B5340 (CmpCloseKeyObject.c)
 *     CmpReportNotifyHelper @ 0x1407AF050 (CmpReportNotifyHelper.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1402637F0 (ObDereferenceObjectDeferDelete.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDelayedDerefKeys(void **a1)
{
  void *v2; // rbx
  void **v3; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == a1 )
      break;
    if ( *((void ***)v2 + 1) != a1 || (v3 = *(void ***)v2, *(void **)(*(_QWORD *)v2 + 8LL) != v2) )
      __fastfail(3u);
    *a1 = v3;
    v3[1] = a1;
    ObDereferenceObjectDeferDelete(*((PVOID *)v2 + 2));
    ExFreePoolWithTag(v2, 0);
  }
}
