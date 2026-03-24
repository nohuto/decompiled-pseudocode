/*
 * XREFs of RtlGetCallersAddress @ 0x140588880
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14021CDE0 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall RtlGetCallersAddress(_QWORD *a1, _QWORD *a2)
{
  USHORT result; // ax
  __int64 v5; // r9
  __int64 v6; // r8
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  result = RtlCaptureStackBackTrace(2u, 2u, (PVOID *)&v7, 0LL);
  v5 = 0LL;
  v6 = 0LL;
  if ( result )
    v6 = v7;
  if ( result >= 2u )
    v5 = *((_QWORD *)&v7 + 1);
  *a1 = v6;
  *a2 = v5;
  return result;
}
