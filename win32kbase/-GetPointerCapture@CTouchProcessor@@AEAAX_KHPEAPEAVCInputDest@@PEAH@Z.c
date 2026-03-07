void __fastcall CTouchProcessor::GetPointerCapture(
        CTouchProcessor *this,
        unsigned __int64 a2,
        int a3,
        struct CInputDest **a4,
        int *a5)
{
  struct CPointerCaptureData *PointerCaptureData; // rax

  PointerCaptureData = CTouchProcessor::GetPointerCaptureData(this, a2);
  if ( PointerCaptureData )
  {
    *a4 = CTouchProcessor::GetPointerCaptureInt(
            this,
            (struct CPointerCaptureData *)((char *)PointerCaptureData + (a3 != 0 ? 0x88 : 0) + 32),
            a5);
  }
  else
  {
    *a4 = 0LL;
    if ( a5 )
      *a5 = 0;
  }
}
