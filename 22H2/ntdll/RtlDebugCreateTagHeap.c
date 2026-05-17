/*
 * XREFs of RtlDebugCreateTagHeap @ 0x1800F9074
 * Callers:
 *     RtlCreateTagHeap @ 0x18007DA40 (RtlCreateTagHeap.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180051950 (RtlNtStatusToDosError.c)
 *     RtlpCheckHeapSignature @ 0x18005FA90 (RtlpCheckHeapSignature.c)
 *     RtlCreateTagHeap @ 0x18007DA40 (RtlCreateTagHeap.c)
 *     RtlpValidateHeap @ 0x1800FA4A4 (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800FAA84 (RtlpValidateHeapHeaders.c)
 *     RtlpHeapExceptionFilter @ 0x18010DF24 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlDebugCreateTagHeap(_DWORD *Src, int a2, __int64 a3, _WORD *a4)
{
  char v8; // si
  unsigned int TagHeap; // r14d
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // edi

  v8 = 0;
  TagHeap = 0;
  if ( RtlpCheckHeapSignature(Src, "RtlCreateTagHeap") )
  {
    v12 = Src[29] | 0x10000000 | a2;
    if ( (v12 & 1) == 0 )
    {
      RtlEnterCriticalSection(*((_QWORD *)Src + 44));
      v8 = 1;
      v12 |= 1u;
    }
    if ( (unsigned __int8)RtlpValidateHeap(Src, 0LL) )
      TagHeap = RtlCreateTagHeap(Src, v12, a3, a4);
    RtlpValidateHeapHeaders(Src);
  }
  if ( v8 )
    RtlLeaveCriticalSection(*((_QWORD *)Src + 44), v10, v11);
  return TagHeap;
}
