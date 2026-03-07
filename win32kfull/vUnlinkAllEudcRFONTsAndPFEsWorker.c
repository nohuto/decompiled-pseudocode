void __fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, __int64 a2)
{
  int v3; // ebp
  __int64 v4; // rax
  unsigned int j; // ecx
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  unsigned int i; // esi
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  SGDGetSessionState(a1);
  while ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 52) & 8) == 0 )
    {
      v6 = *(_QWORD *)(a2 + 72);
      if ( v6 )
      {
        v9 = 0LL;
        do
        {
          if ( *(_QWORD *)(v6 + 720) )
            ((void (*)(void))vMakeInactiveHelper)();
          if ( *(_QWORD *)(v6 + 728) )
            ((void (*)(void))vMakeInactiveHelper)();
          if ( *(_QWORD *)(v6 + 736) )
            ((void (*)(void))vMakeInactiveHelper)();
          if ( v3 )
          {
            v7 = *(_QWORD **)(v6 + 744);
            if ( v7 )
            {
              for ( i = 0; i < *(_DWORD *)(v6 + 840); ++i )
              {
                if ( v7[i] )
                {
                  vMakeInactiveHelper(&v7[i]);
                  v7 = *(_QWORD **)(v6 + 744);
                }
              }
              if ( v7 != (_QWORD *)(v6 + 752) )
                Win32FreePool(v7);
              *(_QWORD *)(v6 + 836) = 0LL;
              *(_QWORD *)(v6 + 744) = 0LL;
              *(_DWORD *)(v6 + 832) = 0;
            }
          }
          *(_DWORD *)(v6 + 712) = 0;
          v6 = *(_QWORD *)(v6 + 496);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
        }
        while ( v6 );
      }
      if ( v3 )
      {
        for ( j = 0; j < *(_DWORD *)(a2 + 208); ++j )
        {
          v4 = *(_QWORD *)(a2 + 8LL * j + 216);
          if ( *(_QWORD *)(v4 + 120) )
            *(_QWORD *)(v4 + 120) = 0LL;
        }
      }
    }
    a2 = *(_QWORD *)(a2 + 8);
  }
}
