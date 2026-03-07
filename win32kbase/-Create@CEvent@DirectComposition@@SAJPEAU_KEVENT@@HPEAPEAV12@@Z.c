__int64 __fastcall DirectComposition::CEvent::Create(
        NSInstrumentation::CLeakTrackingAllocator *Object,
        unsigned __int64 a2,
        struct DirectComposition::CEvent **a3)
{
  unsigned int v4; // edi
  struct DirectComposition::CEvent *QuotaZInit; // rax

  v4 = 0;
  QuotaZInit = (struct DirectComposition::CEvent *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                                                     Object,
                                                     a2,
                                                     0x10uLL,
                                                     0x76654344u);
  *a3 = QuotaZInit;
  if ( QuotaZInit )
  {
    *((_QWORD *)QuotaZInit + 1) = Object;
    ObfReferenceObject(Object);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
