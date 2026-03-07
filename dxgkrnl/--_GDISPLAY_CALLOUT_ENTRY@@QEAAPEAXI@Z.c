DISPLAY_CALLOUT_ENTRY *__fastcall DISPLAY_CALLOUT_ENTRY::`scalar deleting destructor'(DISPLAY_CALLOUT_ENTRY *P)
{
  DISPLAY_CALLOUT_ENTRY::~DISPLAY_CALLOUT_ENTRY(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
