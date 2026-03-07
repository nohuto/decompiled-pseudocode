void __fastcall VIDMM_RECYCLE_BLOCK::ReleaseMultirangeReference(VIDMM_RECYCLE_BLOCK *P)
{
  --*((_QWORD *)P + 1);
  if ( (unsigned int)Feature_Servicing_GpuAcceleratedVideoDecodingLeak__private_IsEnabledDeviceUsage()
    && !*(_QWORD *)P
    && !*((_QWORD *)P + 1) )
  {
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(P);
  }
}
