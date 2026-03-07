char __fastcall CLegacySwapChain::IsFrontBufferRenderingEnabled(CLegacySwapChain *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this - 87) || *((_DWORD *)this - 28) == 2 )
    return 1;
  return result;
}
