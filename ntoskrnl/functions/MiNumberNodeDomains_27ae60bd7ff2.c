__int64 __fastcall MiNumberNodeDomains(unsigned __int16 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(KeNodeBlock[a1] + 292);
  if ( !(_DWORD)result )
    return 1LL;
  return result;
}
