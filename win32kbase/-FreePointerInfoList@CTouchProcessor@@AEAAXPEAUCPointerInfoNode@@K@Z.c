void __fastcall CTouchProcessor::FreePointerInfoList(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        unsigned int a3)
{
  char *v4; // rdi
  __int64 v5; // rsi

  if ( a3 )
  {
    v4 = (char *)a2 + 24;
    v5 = a3;
    do
    {
      CInputDest::SetEmpty((CInputDest *)(v4 + 328));
      CInputDest::SetEmpty((CInputDest *)v4);
      v4 += 480;
      --v5;
    }
    while ( v5 );
  }
  if ( a2 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)a2);
}
