/*
 * XREFs of VidSchCreateDevice @ 0x1C007FEF0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCreateDeviceInternal @ 0x1C007FAC0 (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateDevice(__int64 a1, __int64 a2, char **a3)
{
  __int64 v4; // rax

  *a3 = 0LL;
  if ( a1 && a2 )
    return VidSchiCreateDeviceInternal(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 624LL), a2, a1, a3);
  v4 = WdLogNewEntry5_WdAssertion(a1, a2, a1);
  WdLogEvent5_WdAssertion(v4);
  return 3221225485LL;
}
