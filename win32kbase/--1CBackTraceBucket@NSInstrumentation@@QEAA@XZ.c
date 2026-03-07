void __fastcall NSInstrumentation::CBackTraceBucket::~CBackTraceBucket(NSInstrumentation::CBackTraceBucket *this)
{
  _QWORD *i; // rcx

  for ( i = *(_QWORD **)this; i; i = *(_QWORD **)this )
  {
    *(_QWORD *)this = *i;
    ExFreePoolWithTag(i, 0);
  }
}
