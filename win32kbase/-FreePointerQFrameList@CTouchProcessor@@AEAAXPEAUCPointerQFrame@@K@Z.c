void __fastcall CTouchProcessor::FreePointerQFrameList(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        unsigned int a3)
{
  CInputDest *v4; // rdi
  __int64 v5; // rsi

  if ( a3 )
  {
    v4 = (struct CPointerQFrame *)((char *)a2 + 16);
    v5 = a3;
    do
    {
      CInputDest::SetEmpty(v4);
      v4 = (CInputDest *)((char *)v4 + 160);
      --v5;
    }
    while ( v5 );
  }
  if ( a2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a2);
}
