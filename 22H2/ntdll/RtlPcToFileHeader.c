/*
 * XREFs of RtlPcToFileHeader @ 0x180034A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180032F40 (RtlpxLookupFunctionTable.c)
 */

PVOID __stdcall RtlPcToFileHeader(PVOID PcValue, PVOID *BaseOfImage)
{
  char *v2; // r9
  PVOID result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int64)PcValue < *((_QWORD *)&xmmword_180181510 + 1)
    || (unsigned __int64)PcValue >= *((_QWORD *)&xmmword_180181510 + 1)
                                  + (unsigned __int64)(unsigned int)qword_180181520 )
  {
    RtlpxLookupFunctionTable((unsigned __int64)PcValue, (signed __int64)&v5, *((char **)&xmmword_180181510 + 1), v2);
  }
  else
  {
    v5 = xmmword_180181510;
  }
  result = (PVOID)*((_QWORD *)&v5 + 1);
  *BaseOfImage = (PVOID)*((_QWORD *)&v5 + 1);
  return result;
}
