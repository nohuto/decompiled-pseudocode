/*
 * XREFs of RtlIncrementCorrelationVector @ 0x1800851C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1800852A4 (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800852F0 (RtlpGetCorrelationVectorBufferLength.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     _snprintf_s @ 0x1800970B0 (_snprintf_s.c)
 *     sscanf_s @ 0x180097C30 (sscanf_s.c)
 *     strcpy_s @ 0x180097D30 (strcpy_s.c)
 *     RtlValidateCorrelationVector @ 0x1800FC0B0 (RtlValidateCorrelationVector.c)
 */

DWORD __cdecl RtlIncrementCorrelationVector(PCORRELATION_VECTOR CorrelationVector)
{
  int CorrelationVectorBufferLength; // ebp
  PCORRELATION_VECTOR v3; // rcx
  int v4; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v6; // esi
  CHAR *v7; // rdi
  int v8; // eax
  int v10; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v10 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(CorrelationVector);
  v4 = RtlValidateCorrelationVector(v3);
  if ( v4 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(CorrelationVector);
    v6 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v7 = &CorrelationVector->Vector[CorrelationVectorLastDotPosition], sscanf_s(v7 + 1, "%d", &v10) == 1)
      && (++v10, v8 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v10), v8 < CorrelationVectorBufferLength - v6 - 2) )
    {
      strcpy_s(v7 + 1, v8 + 1, Buffer);
    }
    else
    {
      return -2147483643;
    }
  }
  return v4;
}
