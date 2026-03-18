/*
 * XREFs of HMUnlockDestroyObject @ 0x1C012CAA0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     ?HMMarkObjectDestroyWorker@@YAHPEAX@Z @ 0x1C0064D08 (-HMMarkObjectDestroyWorker@@YAHPEAX@Z.c)
 */

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
