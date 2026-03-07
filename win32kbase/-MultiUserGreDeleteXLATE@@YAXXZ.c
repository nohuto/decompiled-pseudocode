void __fastcall MultiUserGreDeleteXLATE(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rsi
  char *v4; // rsi

  v1 = 0LL;
  v2 = 8LL;
  do
  {
    a1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
    v3 = *(_QWORD *)(v1 + a1 + 6640);
    if ( v3 )
    {
      v4 = (char *)(v3 - 32);
      PopThreadGuardedObject(v4);
      if ( v4 )
        NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v4);
    }
    v1 += 32LL;
    --v2;
  }
  while ( v2 );
}
