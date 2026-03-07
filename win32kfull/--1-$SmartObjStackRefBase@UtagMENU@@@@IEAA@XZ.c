_QWORD *__fastcall SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  _QWORD *result; // rax

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( *a1 != gSmartObjNullRef && !--*(_DWORD *)(*a1 + 8LL) )
  {
    if ( *(_BYTE *)(*a1 + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
  }
  result = *(_QWORD **)(v2 + 1512);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v2 + 1512) = result;
  }
  return result;
}
