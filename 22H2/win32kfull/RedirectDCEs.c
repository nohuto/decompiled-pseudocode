/*
 * XREFs of RedirectDCEs @ 0x1C00D3618
 * Callers:
 *     UnsetLayeredWindow @ 0x1C00C8C24 (UnsetLayeredWindow.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     SetRedirectedWindow @ 0x1C00D36F4 (SetRedirectedWindow.c)
 * Callees:
 *     UpdateRedirectedDCE @ 0x1C008EDF0 (UpdateRedirectedDCE.c)
 */

__int64 __fastcall RedirectDCEs(__int64 a1)
{
  __int64 i; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(_QWORD *)(gpDispInfo + 24LL); i; i = *(_QWORD *)i )
  {
    v3 = *(_DWORD *)(i + 64);
    if ( (v3 & 0x4400800) == 0 )
    {
      v4 = *(_QWORD *)(i + 16);
      if ( v4 )
      {
        if ( (v3 & 0x1000) != 0 )
        {
          v5 = *(_QWORD *)(a1 + 24);
          v6 = 0LL;
          if ( v5 )
          {
            v7 = *(_QWORD *)(v5 + 8);
            if ( v7 )
              v6 = *(_QWORD *)(v7 + 24);
          }
          if ( a1 == v6 )
          {
            if ( a1 != v4 )
              continue;
          }
          else
          {
            while ( a1 != v4 )
            {
              if ( (*(_WORD *)(*(_QWORD *)(v4 + 40) + 42LL) & 0x2FFF) == 0x29D )
                goto LABEL_3;
              v4 = *(_QWORD *)(v4 + 104);
            }
          }
          UpdateRedirectedDCE(i, 0);
        }
      }
    }
LABEL_3:
    ;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
