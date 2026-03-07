__int64 __fastcall SetPrpFromSrb(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (*(_DWORD *)(a1 + 64) & 8) != 0 )
    result = MdlToPrp(a1, a2);
  else
    result = SglToPrp(a1, a2);
  if ( (_DWORD)result )
    ++*(_DWORD *)(a1 + 4072);
  return result;
}
