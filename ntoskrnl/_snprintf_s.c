/*
 * XREFs of _snprintf_s @ 0x1403D9090
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1409BBE50 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     _vsnprintf_s @ 0x1403D90C0 (_vsnprintf_s.c)
 */

int snprintf_s(char *DstBuf, size_t SizeInBytes, size_t MaxCount, const char *Format, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnprintf_s(DstBuf, SizeInBytes, MaxCount, Format, va);
}
