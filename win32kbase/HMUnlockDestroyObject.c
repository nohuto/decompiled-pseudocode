__int64 __fastcall HMUnlockDestroyObject(_DWORD *a1)
{
  __int64 v1; // rcx

  if ( a1[2] == 1 )
  {
    HMMarkObjectDestroyWorker(a1);
    return HMUnlockObject(v1);
  }
  return (__int64)a1;
}
