__int64 __fastcall UserGetRedirectedWindowOrigin(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 StyleWindow; // rax

  v4 = 0;
  GreLockVisRgnShared(*(_QWORD *)(gpDispInfo + 40LL));
  v5 = LookupDC(a1, 1LL);
  if ( v5 && (*(_DWORD *)(v5 + 64) & 0x4000) != 0 )
  {
    v6 = *(_QWORD *)(v5 + 16);
    v7 = 0LL;
    v8 = *(_QWORD *)(v6 + 24);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 8);
      if ( v9 )
        v7 = *(_QWORD *)(v9 + 24);
    }
    if ( v6 == v7 )
    {
      *(_QWORD *)a2 = 0LL;
      goto LABEL_9;
    }
    StyleWindow = GetStyleWindow(v6, 2848LL);
    if ( StyleWindow )
    {
      *(_DWORD *)a2 = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 88LL);
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(*(_QWORD *)(StyleWindow + 40) + 92LL);
LABEL_9:
      v4 = 1;
    }
  }
  GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  return v4;
}
