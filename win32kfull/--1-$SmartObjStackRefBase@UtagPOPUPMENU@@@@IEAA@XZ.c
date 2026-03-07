_QWORD *__fastcall SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(_QWORD *a1)
{
  __int64 ThreadWin32Thread; // rdi
  _QWORD *result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
  {
    if ( *(_BYTE *)(*a1 + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(ThreadWin32Thread + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(ThreadWin32Thread + 1512) = result;
  }
  return result;
}
