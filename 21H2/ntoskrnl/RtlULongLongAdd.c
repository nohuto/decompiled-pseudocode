/*
 * XREFs of RtlULongLongAdd @ 0x1402F1E70
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1405EC514 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x1405ED184 (LdrpResGetResourceDirectory.c)
 *     CmpCaptureKeyValueArray @ 0x14065BF20 (CmpCaptureKeyValueArray.c)
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
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
