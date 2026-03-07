__int64 __fastcall RtlInitializeCorrelationVector(char *a1, char a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 result; // rax

  if ( (unsigned __int8)(a2 - 1) > 1u || !a3 )
    return 3221225485LL;
  memset(a1 + 1, 0, 0x81uLL);
  *a1 = a2;
  result = RtlpBase64Encode(a3, v6, a1 + 1);
  if ( (int)result >= 0 )
  {
    if ( a2 == 1 )
      strcpy(a1 + 17, ".0");
    else
      strcpy(a1 + 23, ".0");
  }
  return result;
}
