/*
 * XREFs of sub_18013C4A4 @ 0x18013C4A4
 * Callers:
 *     sub_18013C100 @ 0x18013C100 (sub_18013C100.c)
 *     sub_18013C1DC @ 0x18013C1DC (sub_18013C1DC.c)
 *     sub_18013C2AC @ 0x18013C2AC (sub_18013C2AC.c)
 * Callees:
 *     vsnprintf_0 @ 0x18006AD0C (vsnprintf_0.c)
 */

__int64 sub_18013C4A4(char *DstBuf, __int64 a2, const char *a3, ...)
{
  int v3; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list ArgList; // [rsp+58h] [rbp+20h] BYREF

  va_start(ArgList, a3);
  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( a2 )
      *DstBuf = 0;
  }
  else
  {
    v5 = a2 - 1;
    v3 = 0;
    v6 = vsnprintf_0(DstBuf, a2 - 1, a3, ArgList);
    if ( v6 < 0 || v6 > v5 )
    {
      DstBuf[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      DstBuf[v5] = 0;
    }
  }
  return (unsigned int)v3;
}
