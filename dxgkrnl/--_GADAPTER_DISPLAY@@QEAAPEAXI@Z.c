ADAPTER_DISPLAY *__fastcall ADAPTER_DISPLAY::`scalar deleting destructor'(ADAPTER_DISPLAY *P)
{
  ADAPTER_DISPLAY::~ADAPTER_DISPLAY(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
