__int64 __fastcall DxgkSetCompositionSurfaceInkCookie(_DWORD *a1, int a2)
{
  int v4; // ebx

  if ( (***((unsigned int (__fastcall ****)(_QWORD))a1 + 2))(*((_QWORD *)a1 + 2)) == 1 )
  {
    v4 = CPushLock::AcquireLockExclusive((CPushLock *)(a1 + 12));
    if ( v4 >= 0 )
    {
      a1[34] = a2;
      CPushLock::ReleaseLock((CPushLock *)(a1 + 12));
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
