__int64 __fastcall SmartObjStackRefBase<tagMENU>::Init(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v6; // rdx
  __int64 result; // rax

  v4 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v4 = *ThreadWin32Thread;
  v6 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 152);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 152) + 8LL);
  }
  result = *(_QWORD *)(v4 + 1512);
  *v6 = result;
  *(_QWORD *)(v4 + 1512) = v6;
  return result;
}
