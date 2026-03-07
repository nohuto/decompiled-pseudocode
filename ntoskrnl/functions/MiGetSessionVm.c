unsigned __int64 MiGetSessionVm()
{
  unsigned __int64 result; // rax

  result = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
  if ( result )
    result += 192LL;
  return result;
}
