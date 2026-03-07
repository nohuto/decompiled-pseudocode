LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C013B810 && !byte_1C013B811 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C013B820 + 3912), 2LL);
    if ( *(_BYTE *)(qword_1C013B820 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_1C013B820 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C013B820 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C013B818 + 72), 0);
    _InterlockedExchange64(&qword_1C013B4D8, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
