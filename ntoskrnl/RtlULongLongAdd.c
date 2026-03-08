/*
 * XREFs of RtlULongLongAdd @ 0x14024EE90
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406DFE4C (LdrpResSearchResourceInsideDirectory.c)
 *     CmpCaptureKeyValueArray @ 0x1407A8A44 (CmpCaptureKeyValueArray.c)
 *     LdrpResGetResourceDirectory @ 0x1407EB258 (LdrpResGetResourceDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlULongLongAdd(ULONGLONG ullAugend, ULONGLONG ullAddend, ULONGLONG *pullResult)
{
  ULONGLONG v3; // rdx

  v3 = ullAugend + ullAddend;
  if ( v3 < ullAugend )
  {
    *pullResult = -1LL;
    return -1073741675;
  }
  else
  {
    *pullResult = v3;
    return 0;
  }
}
