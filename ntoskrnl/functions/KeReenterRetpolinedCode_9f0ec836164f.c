unsigned __int8 KeReenterRetpolinedCode()
{
  unsigned __int8 result; // al

  result = KeGetPcr()->Prcb.BpbRetpolineState;
  if ( (result & 1) != 0 )
    return KxReenterRetpolinedCode();
  return result;
}
