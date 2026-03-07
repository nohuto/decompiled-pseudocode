void __fastcall CTDR_GDI_RESET_THREAD::~CTDR_GDI_RESET_THREAD(PVOID *this)
{
  *this = &CTDR_GDI_RESET_THREAD::`vftable';
  TdrDereferenceRecoveryContext(this[3], 0);
  CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD((CVP_SYSTEM_THREAD *)this);
}
