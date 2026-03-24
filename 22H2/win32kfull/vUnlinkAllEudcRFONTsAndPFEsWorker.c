/*
 * XREFs of vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011E714
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEs @ 0x1C011E610 (vUnlinkAllEudcRFONTsAndPFEs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AE74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C016A260 (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 *     vMakeInactiveHelper @ 0x1C029836C (vMakeInactiveHelper.c)
 */

struct PFF *__fastcall vUnlinkAllEudcRFONTsAndPFEsWorker(__int64 a1, int a2, struct PFF *a3)
{
  __int64 v5; // rbx
  void *v6; // rcx
  __int64 v7; // rsi
  __int64 i; // rdx
  __int64 v9; // rcx
  struct PFF *result; // rax
  struct PFF *v11; // rdi
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  while ( 1 )
  {
    result = SkipInvalidPff(a3);
    v11 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v5 = *((_QWORD *)result + 9);
      if ( v5 )
      {
        v12 = 0LL;
        do
        {
          vMakeInactiveHelper(v5 + 728);
          if ( *(_QWORD *)(v5 + 736) )
            vMakeInactiveHelper(v5 + 736);
          if ( a2 )
          {
            v6 = *(void **)(v5 + 744);
            if ( v6 )
            {
              v7 = 0LL;
              if ( *(_DWORD *)(v5 + 840) )
              {
                do
                {
                  vMakeInactiveHelper(*(_QWORD *)(v5 + 744) + 8 * v7);
                  v7 = (unsigned int)(v7 + 1);
                }
                while ( (unsigned int)v7 < *(_DWORD *)(v5 + 840) );
                v6 = *(void **)(v5 + 744);
              }
              if ( v6 != (void *)(v5 + 752) )
                Win32FreePool(v6);
              *(_DWORD *)(v5 + 840) = 0;
              *(_QWORD *)(v5 + 744) = 0LL;
              *(_DWORD *)(v5 + 832) = 0;
              *(_DWORD *)(v5 + 836) = 0;
            }
          }
          *(_DWORD *)(v5 + 712) = 0;
          v5 = *(_QWORD *)(v5 + 496);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v12);
        }
        while ( v5 );
      }
      if ( a2 )
      {
        for ( i = 0LL; (unsigned int)i < *((_DWORD *)v11 + 52); *(_QWORD *)(v9 + 120) = 0LL )
        {
          v9 = *((_QWORD *)v11 + i + 27);
          i = (unsigned int)(i + 1);
        }
      }
    }
    a3 = (struct PFF *)*((_QWORD *)v11 + 1);
  }
  return result;
}
