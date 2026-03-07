void __fastcall UmfdCallSessionUninitialize(__int64 a1)
{
  __int64 v1; // rdi
  PVOID *v2; // rbx

  v1 = 4LL;
  v2 = (PVOID *)(*(_QWORD *)(SGDGetSessionState(a1) + 40) + 48LL);
  do
  {
    if ( *(v2 - 4) )
      *(v2 - 4) = 0LL;
    if ( *v2 )
    {
      CMultipleConsumerWorkQueue::Destroy(*v2);
      *v2 = 0LL;
    }
    ++v2;
    --v1;
  }
  while ( v1 );
}
