/*
 * XREFs of RtlGetCallersAddress @ 0x1403BCC70
 * Callers:
 *     <none>
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140205C20 (RtlCaptureStackBackTrace.c)
 */

USHORT __fastcall RtlGetCallersAddress(_QWORD *a1, _QWORD *a2)
{
  USHORT result; // ax
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = 0LL;
  result = RtlCaptureStackBackTrace(2u, 2u, (PVOID *)&v5, 0LL);
  if ( result )
  {
    *a1 = v5;
    if ( result >= 2u )
    {
      result = WORD4(v5);
      *a2 = *((_QWORD *)&v5 + 1);
      return result;
    }
  }
  else
  {
    *a1 = 0LL;
  }
  *a2 = 0LL;
  return result;
}
