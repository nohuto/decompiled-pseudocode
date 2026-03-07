__int64 __fastcall PsGetJobSessionId(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 576);
  if ( (unsigned int)result > 0xFFFFFFFD )
    return 0xFFFFFFFFLL;
  return result;
}
