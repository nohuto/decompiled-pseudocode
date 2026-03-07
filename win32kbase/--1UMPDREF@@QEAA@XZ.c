void __fastcall UMPDREF::~UMPDREF(char **this)
{
  char *v2; // rcx
  char *v3; // rdi
  int v4; // eax

  v2 = *this;
  if ( v2 )
  {
    HmgDecrementShareReferenceCountEx((int *)v2, 0LL);
    v3 = *this;
    if ( qword_1C02D5F68 )
    {
      if ( (int)qword_1C02D5F68() >= 0 )
      {
        v4 = (int)qword_1C02D5F70;
        if ( qword_1C02D5F70 )
          v4 = qword_1C02D5F70(v3);
        if ( v4 )
        {
          if ( *this )
            NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *this);
        }
      }
    }
  }
}
