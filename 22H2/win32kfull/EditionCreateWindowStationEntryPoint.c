/*
 * XREFs of EditionCreateWindowStationEntryPoint @ 0x1C006BA40
 * Callers:
 *     <none>
 * Callees:
 *     EditionCreateWindowStationEntryPointEx @ 0x1C013BF60 (EditionCreateWindowStationEntryPointEx.c)
 */

__int64 __fastcall EditionCreateWindowStationEntryPoint(
        struct _OBJECT_ATTRIBUTES *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        int a8)
{
  return EditionCreateWindowStationEntryPointEx(a1, a5, a6, a7, a8);
}
