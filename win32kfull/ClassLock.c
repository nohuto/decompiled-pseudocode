__int64 __fastcall ClassLock(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 v4; // rdx
  int v6; // eax

  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 < 131068 )
  {
    v4 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 72) = v2 + 1;
    if ( a1 == v4 )
    {
LABEL_3:
      PushW32ThreadLock(a1, a2, ClassUnlockWorker);
      return 1LL;
    }
    v6 = *(_DWORD *)(v4 + 72);
    if ( v6 < 131068 )
    {
      *(_DWORD *)(v4 + 72) = v6 + 1;
      goto LABEL_3;
    }
    *(_DWORD *)(a1 + 72) = v2;
  }
  return 0LL;
}
