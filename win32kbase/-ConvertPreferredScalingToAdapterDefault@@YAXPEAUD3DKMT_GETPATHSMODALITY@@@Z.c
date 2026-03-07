void __fastcall ConvertPreferredScalingToAdapterDefault(struct D3DKMT_GETPATHSMODALITY *a1)
{
  unsigned int i; // ebx

  for ( i = 0; i < *((unsigned __int16 *)a1 + 10); ++i )
    ConvertPathPreferredScalingToAdapterDefault(
      (struct D3DKMT_GETPATHSMODALITY *)((char *)a1 + 296 * i + 56),
      296LL * i);
}
