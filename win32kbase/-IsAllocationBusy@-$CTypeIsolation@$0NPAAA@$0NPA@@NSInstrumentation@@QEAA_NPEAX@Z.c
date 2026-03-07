char __fastcall NSInstrumentation::CTypeIsolation<913408,3568>::IsAllocationBusy(_QWORD *a1, __int64 a2)
{
  char v2; // di
  int v6; // eax
  __int64 v7; // rbx
  _QWORD *i; // rsi

  v2 = 0;
  if ( !a2 )
    return 0;
  v7 = a1[2];
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v7, 0LL);
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    v6 = NSInstrumentation::CSectionBitmapAllocator<913408,3568>::CheckAllocationStatus(i[4], a2);
    if ( v6 == 1 )
    {
      v2 = 1;
      break;
    }
    if ( (unsigned int)(v6 - 2) < 2 )
      break;
  }
  ExReleasePushLockSharedEx(v7, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
