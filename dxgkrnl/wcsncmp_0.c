/*
 * XREFs of wcsncmp_0 @ 0x1C00243C5
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0209A10 (DpiFdoStartAdapterThreadImpl.c)
 *     ?ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z @ 0x1C020E618 (-ParseAndCompareBlockListCondition@@YAJPEBGII0W4_QAI_DRIVERVERSION@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl wcsncmp_0(const wchar_t *Str1, const wchar_t *Str2, size_t MaxCount)
{
  return wcsncmp(Str1, Str2, MaxCount);
}
