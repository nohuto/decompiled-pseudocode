/*
 * XREFs of ClassLock @ 0x1C00128B8
 * Callers:
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0012624 (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     xxxSetClassData @ 0x1C00ED168 (xxxSetClassData.c)
 *     xxxRecreateSmallIcons @ 0x1C0230A50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C00A1C30 (PushW32ThreadLock.c)
 */

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
