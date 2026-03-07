__int64 __fastcall FsRtlPrivateRemoveLock(__int64 a1, __int64 a2, char a3)
{
  int v3; // eax
  _RTL_SPLAY_LINKS **v4; // r9
  _RTL_SPLAY_LINKS *v5; // r10
  bool v7; // zf
  _RTL_SPLAY_LINKS *v8; // rdx

  v3 = *(_DWORD *)(a2 + 20);
  v4 = (_RTL_SPLAY_LINKS **)(a2 + 8);
  v5 = *(_RTL_SPLAY_LINKS **)(a2 + 32);
  v7 = *(_BYTE *)(a2 + 16) == 0;
  v8 = *(_RTL_SPLAY_LINKS **)(a2 + 24);
  if ( v7 )
    return FsRtlFastUnlockSingleShared(a1, (__int64)v8, (unsigned __int64 *)a2, v4, (__int64)v5, v3, 0LL, 1, a3);
  else
    return FsRtlFastUnlockSingleExclusive(a1, v8, (_RTL_SPLAY_LINKS **)a2, v4, v5, v3, 0LL, 1, a3);
}
