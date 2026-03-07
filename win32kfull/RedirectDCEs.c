__int64 __fastcall RedirectDCEs(__int64 a1)
{
  __int64 *i; // rbx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8

  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
  for ( i = *(__int64 **)(gpDispInfo + 24LL); i; i = (__int64 *)*i )
  {
    v3 = *((_DWORD *)i + 16);
    if ( (v3 & 0x4400800) == 0 )
    {
      v4 = i[2];
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
          UpdateRedirectedDCE(i, 0LL);
        }
      }
    }
LABEL_3:
    ;
  }
  return GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
}
