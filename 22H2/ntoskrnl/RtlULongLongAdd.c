/*
 * XREFs of RtlULongLongAdd @ 0x1402504A0
 * Callers:
 *     CmpCaptureKeyValueArray @ 0x1406D24C8 (CmpCaptureKeyValueArray.c)
 *     sub_1406EF620 @ 0x1406EF620 (sub_1406EF620.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1406F31DC (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x14075A6B8 (LdrpResGetResourceDirectory.c)
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
