ADAPTER_RENDER *__fastcall ADAPTER_RENDER::`scalar deleting destructor'(ADAPTER_RENDER *P)
{
  ADAPTER_RENDER::~ADAPTER_RENDER(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
