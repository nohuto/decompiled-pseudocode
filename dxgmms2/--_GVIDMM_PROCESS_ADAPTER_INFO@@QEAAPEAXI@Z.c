VIDMM_PROCESS_ADAPTER_INFO *__fastcall VIDMM_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(
        VIDMM_PROCESS_ADAPTER_INFO *P)
{
  VIDMM_PROCESS_ADAPTER_INFO::~VIDMM_PROCESS_ADAPTER_INFO(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
