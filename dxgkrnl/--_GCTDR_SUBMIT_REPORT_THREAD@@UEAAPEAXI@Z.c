CVP_SYSTEM_THREAD *__fastcall CTDR_SUBMIT_REPORT_THREAD::`scalar deleting destructor'(CVP_SYSTEM_THREAD *P, char a2)
{
  CVP_SYSTEM_THREAD::~CVP_SYSTEM_THREAD(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x52445476u);
  return P;
}
