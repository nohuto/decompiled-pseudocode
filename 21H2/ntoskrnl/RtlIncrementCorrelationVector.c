/*
 * XREFs of RtlIncrementCorrelationVector @ 0x1409BB750
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _snprintf_s @ 0x1403E6530 (_snprintf_s.c)
 *     sscanf_s @ 0x1403E70A0 (sscanf_s.c)
 *     strcpy_s @ 0x1403E71A0 (strcpy_s.c)
 *     RtlpGetCorrelationVectorLastDotPosition @ 0x1405EC2AC (RtlpGetCorrelationVectorLastDotPosition.c)
 *     RtlValidateCorrelationVector @ 0x1409BB8C0 (RtlValidateCorrelationVector.c)
 *     RtlpGetCorrelationVectorBufferLength @ 0x1409BBA8C (RtlpGetCorrelationVectorBufferLength.c)
 */

__int64 __fastcall RtlIncrementCorrelationVector(__int64 a1, __int64 a2, __int64 a3)
{
  int CorrelationVectorBufferLength; // ebp
  __int64 v5; // rdx
  int v6; // ebx
  int CorrelationVectorLastDotPosition; // eax
  int v8; // esi
  __int64 v9; // rdi
  int v10; // eax
  int v12; // [rsp+30h] [rbp-28h] BYREF
  char DstBuf[16]; // [rsp+38h] [rbp-20h] BYREF

  v12 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, a3);
  v6 = RtlValidateCorrelationVector(a1);
  if ( v6 >= 0 )
  {
    CorrelationVectorLastDotPosition = RtlpGetCorrelationVectorLastDotPosition(a1, v5);
    v8 = CorrelationVectorLastDotPosition;
    if ( CorrelationVectorLastDotPosition >= 0
      && (v9 = CorrelationVectorLastDotPosition + 1 + a1, sscanf_s((const char *)(v9 + 1), "%d", &v12) == 1)
      && (++v12, v10 = snprintf_s(DstBuf, 0xCuLL, 0xCuLL, "%d", v12), v10 < CorrelationVectorBufferLength - v8 - 2) )
    {
      strcpy_s((char *)(v9 + 1), v10 + 1, DstBuf);
    }
    else
    {
      return (unsigned int)-2147483643;
    }
  }
  return (unsigned int)v6;
}
