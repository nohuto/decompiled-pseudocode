__int64 __fastcall DirectComposition::CEvent::Create(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        unsigned __int64 a2,
        struct DirectComposition::CEvent **a3)
{
  DirectComposition::CEvent *QuotaZInit; // rax
  DirectComposition::CEvent *v6; // rdi
  unsigned int v7; // edx
  int v8; // ebx

  QuotaZInit = (DirectComposition::CEvent *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                              a1,
                                              a2,
                                              0x10uLL,
                                              0x76654344u);
  v6 = QuotaZInit;
  if ( QuotaZInit )
  {
    v8 = DirectComposition::CEvent::Initialize(QuotaZInit, a1, 0);
    if ( v8 < 0 )
      DirectComposition::CEvent::`scalar deleting destructor'(v6, v7);
    else
      *a3 = v6;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v8;
}
