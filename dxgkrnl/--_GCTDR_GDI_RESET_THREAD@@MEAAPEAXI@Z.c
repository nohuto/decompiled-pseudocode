PVOID *__fastcall CTDR_GDI_RESET_THREAD::`scalar deleting destructor'(PVOID *P, char a2)
{
  CTDR_GDI_RESET_THREAD::~CTDR_GDI_RESET_THREAD(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x52445476u);
  return P;
}
