__int64 __fastcall KeGetPrcb(unsigned int a1)
{
  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
    return 0LL;
  else
    return KiProcessorBlock[a1];
}
