__int64 __fastcall CTouchProcessor::CalcManipulationInputInfoSize(CTouchProcessor *this, int a2)
{
  unsigned __int64 v2; // rax
  __int64 result; // rax

  if ( !a2 )
    return 0LL;
  v2 = 240LL * (unsigned int)(a2 - 1);
  if ( v2 > 0xFFFFFFFF )
    return 0LL;
  result = (unsigned int)(v2 + 400);
  if ( (unsigned int)result < 0x190 )
    return 0LL;
  return result;
}
