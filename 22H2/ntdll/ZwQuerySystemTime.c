/*
 * XREFs of ZwQuerySystemTime @ 0x18009E020
 * Callers:
 *     RtlAddFunctionTable @ 0x180069090 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x1800698D0 (RtlInstallFunctionTableCallback.c)
 *     RtlAddGrowableFunctionTable @ 0x180069BE0 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateProcessReflection @ 0x1800D5A40 (RtlCreateProcessReflection.c)
 *     RtlRunEncodeUnicodeString @ 0x1800E6EF0 (RtlRunEncodeUnicodeString.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ZwQuerySystemTime(_QWORD *a1)
{
  return RtlQuerySystemTime(a1);
}
