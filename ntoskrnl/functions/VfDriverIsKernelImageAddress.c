bool __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( ViDriverKernelBase )
  {
    if ( a1 >= ViDriverKernelBase )
      return a1 < ViDriverKernelEnd;
  }
  return result;
}
