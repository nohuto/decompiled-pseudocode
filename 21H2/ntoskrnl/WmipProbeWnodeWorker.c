/*
 * XREFs of WmipProbeWnodeWorker @ 0x14072AE54
 * Callers:
 *     WmipProbeWnodeSingleInstance @ 0x14072AD64 (WmipProbeWnodeSingleInstance.c)
 *     WmipProbeWnodeMethodItem @ 0x14072ADE4 (WmipProbeWnodeMethodItem.c)
 *     WmipProbeWnodeSingleItem @ 0x140933564 (WmipProbeWnodeSingleItem.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 */

__int64 __fastcall WmipProbeWnodeWorker(
        __int64 a1,
        ULONG a2,
        ULONG a3,
        ULONG a4,
        ULONG a5,
        ULONG a6,
        ULONG a7,
        char a8,
        char a9)
{
  ULONG v9; // r10d
  NTSTATUS v11; // edx
  ULONG pulResult; // [rsp+40h] [rbp+18h] BYREF

  pulResult = a3;
  v9 = a6;
  v11 = 0;
  if ( !a3 )
  {
LABEL_11:
    if ( a4 && a4 < a2 )
      return 3221225473LL;
    goto LABEL_13;
  }
  if ( a3 < a2 )
    return 3221225473LL;
  if ( ((a3 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != a3 )
    return 3221225473LL;
  if ( a3 > (unsigned __int64)a6 - 2 )
    return 3221225473LL;
  v11 = RtlULongAdd(a3, *(unsigned __int16 *)(a3 + a1) + 2, &pulResult);
  if ( v11 < 0 || pulResult > v9 || a8 && pulResult > a7 )
    return 3221225473LL;
  if ( a4 )
  {
    if ( a4 < pulResult )
      return 3221225473LL;
    goto LABEL_11;
  }
LABEL_13:
  if ( ((a4 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) == a4
    && (!a9 || !a4 || a5 <= v9 && a4 <= v9 - a5)
    && (!a8 || a7 >= a2 && a4 <= a7 && a4) )
  {
    return (unsigned int)v11;
  }
  return 3221225473LL;
}
