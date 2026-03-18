/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00A82C8
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C00A81E0 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C007F350 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C013E750 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C02A07F0 (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, struct PFF *a2)
{
  int v3; // ebp
  struct PFF *result; // rax
  __int64 v5; // rbx
  _QWORD *v6; // rcx
  unsigned int i; // esi
  unsigned int j; // ecx
  __int64 v9; // rax
  struct PFF *v10; // rdi
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v3 = a1;
  SGDGetSessionState(a1);
  for ( result = SkipInvalidPff(a2); ; result = SkipInvalidPff(*((struct PFF **)v10 + 1)) )
  {
    v10 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v5 = *((_QWORD *)result + 9);
      if ( v5 )
      {
        v11 = 0LL;
        do
        {
          if ( *(_QWORD *)(v5 + 720) )
            vMakeInactiveHelper(v5 + 720);
          if ( *(_QWORD *)(v5 + 728) )
            vMakeInactiveHelper(v5 + 728);
          if ( *(_QWORD *)(v5 + 736) )
            vMakeInactiveHelper(v5 + 736);
          if ( v3 )
          {
            v6 = *(_QWORD **)(v5 + 744);
            if ( v6 )
            {
              for ( i = 0; i < *(_DWORD *)(v5 + 840); ++i )
              {
                if ( v6[i] )
                {
                  vMakeInactiveHelper(&v6[i]);
                  v6 = *(_QWORD **)(v5 + 744);
                }
              }
              if ( v6 != (_QWORD *)(v5 + 752) )
                Win32FreePool(v6);
              *(_QWORD *)(v5 + 836) = 0LL;
              *(_QWORD *)(v5 + 744) = 0LL;
              *(_DWORD *)(v5 + 832) = 0;
            }
          }
          *(_DWORD *)(v5 + 712) = 0;
          v5 = *(_QWORD *)(v5 + 496);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
        }
        while ( v5 );
      }
      if ( v3 )
      {
        for ( j = 0; j < *((_DWORD *)v10 + 52); ++j )
        {
          v9 = *((_QWORD *)v10 + j + 27);
          if ( *(_QWORD *)(v9 + 120) )
            *(_QWORD *)(v9 + 120) = 0LL;
        }
      }
    }
  }
  return result;
}
