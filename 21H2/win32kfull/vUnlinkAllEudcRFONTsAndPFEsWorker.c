/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C015ED74
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C015EC88 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0019ED8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C02971C8 (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(int a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  unsigned int i; // esi
  unsigned int j; // ecx
  __int64 v8; // rax
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    do
    {
      if ( (*(_DWORD *)(v2 + 52) & 8) == 0 )
      {
        v4 = *(_QWORD *)(v2 + 72);
        if ( v4 )
        {
          v9 = 0LL;
          do
          {
            if ( *(_QWORD *)(v4 + 720) )
              vMakeInactiveHelper(v4 + 720);
            if ( *(_QWORD *)(v4 + 728) )
              vMakeInactiveHelper(v4 + 728);
            if ( *(_QWORD *)(v4 + 736) )
              vMakeInactiveHelper(v4 + 736);
            if ( a1 )
            {
              v5 = *(_QWORD *)(v4 + 744);
              if ( v5 )
              {
                for ( i = 0; i < *(_DWORD *)(v4 + 840); ++i )
                {
                  v5 = *(_QWORD *)(v4 + 744);
                  if ( *(_QWORD *)(v5 + 8LL * i) )
                  {
                    vMakeInactiveHelper(v5 + 8LL * i);
                    v5 = *(_QWORD *)(v4 + 744);
                  }
                }
                if ( v5 != v4 + 752 )
                  Win32FreePool(v5);
                *(_QWORD *)(v4 + 836) = 0LL;
                *(_QWORD *)(v4 + 744) = 0LL;
                *(_DWORD *)(v4 + 832) = 0;
              }
            }
            *(_DWORD *)(v4 + 712) = 0;
            v4 = *(_QWORD *)(v4 + 496);
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
          }
          while ( v4 );
        }
        if ( a1 )
        {
          for ( j = 0; j < *(_DWORD *)(v2 + 208); ++j )
          {
            v8 = *(_QWORD *)(v2 + 8LL * j + 216);
            if ( *(_QWORD *)(v8 + 120) )
              *(_QWORD *)(v8 + 120) = 0LL;
          }
        }
      }
      v2 = *(_QWORD *)(v2 + 8);
    }
    while ( v2 );
  }
}
