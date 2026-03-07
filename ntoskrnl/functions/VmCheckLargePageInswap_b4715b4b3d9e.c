__int64 __fastcall VmCheckLargePageInswap(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 2288);
  if ( result )
    return *(_WORD *)(result + 104) & 1;
  return result;
}
