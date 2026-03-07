__int64 __fastcall CTouchProcessor::RecheckPointerCapture(
        CTouchProcessor *this,
        unsigned __int64 a2,
        int a3,
        struct CInputDest **a4,
        int *a5)
{
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-18h] BYREF
  struct CInputDest *v9; // [rsp+38h] [rbp-10h] BYREF

  v6 = 0;
  v9 = 0LL;
  v8 = 0;
  CTouchProcessor::GetPointerCapture(this, a2, a3, &v9, &v8);
  if ( v9 )
  {
    v6 = 1;
    *a4 = v9;
    *a5 = v8;
  }
  return v6;
}
