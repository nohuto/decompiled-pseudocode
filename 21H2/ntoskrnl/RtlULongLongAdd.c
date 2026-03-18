/*
 * XREFs of RtlULongLongAdd @ 0x140354360
 * Callers:
 *     LdrpResGetResourceDirectory @ 0x14067368C (LdrpResGetResourceDirectory.c)
 *     CmpCaptureKeyValueArray @ 0x14071F740 (CmpCaptureKeyValueArray.c)
 *     sub_1407D0090 @ 0x1407D0090 (sub_1407D0090.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1407D38A8 (LdrpResSearchResourceInsideDirectory.c)
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
