char __fastcall CTokenQueue::CompleteIndependentFlipNotifyToken(CTokenQueue **this, __int64 a2, unsigned int a3)
{
  CTokenQueue *v3; // rbx
  char i; // bp
  char *v8; // rdi

  v3 = *this;
  for ( i = 0; v3 != (CTokenQueue *)this; v3 = *(CTokenQueue **)v3 )
  {
    v8 = (char *)v3 - 8;
    if ( *((_QWORD *)v3 + 4) == a2
      && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 112LL))((__int64)v3 - 8) <= a3 )
    {
      i |= (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 160LL))((__int64)v3 - 8);
    }
  }
  return i;
}
