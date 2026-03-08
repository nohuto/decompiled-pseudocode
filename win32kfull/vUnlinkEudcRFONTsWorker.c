/*
 * XREFs of vUnlinkEudcRFONTsWorker @ 0x1C02A3388
 * Callers:
 *     vUnlinkEudcRFONTs @ 0x1C02A3018 (vUnlinkEudcRFONTs.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C011DDB0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     vMakeInactiveHelper @ 0x1C02A2F4C (vMakeInactiveHelper.c)
 */

void __fastcall vUnlinkEudcRFONTsWorker(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 i; // rsi
  struct RFONT **v6; // rcx
  __int64 v7; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  SGDGetSessionState(a1);
  while ( a2 )
  {
    if ( (*(_DWORD *)(a2 + 52) & 8) == 0 )
    {
      v4 = *(_QWORD *)(a2 + 72);
      if ( v4 )
      {
        v8 = 0LL;
        do
        {
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 840); i = (unsigned int)(i + 1) )
          {
            v6 = (struct RFONT **)(*(_QWORD *)(v4 + 744) + 8 * i);
            if ( *v6 )
            {
              v7 = *((_QWORD *)*v6 + 15);
              if ( v7 == *a1 || v7 == a1[1] )
                vMakeInactiveHelper(v6);
            }
          }
          *(_DWORD *)(v4 + 712) = 0;
          v4 = *(_QWORD *)(v4 + 496);
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
        }
        while ( v4 );
      }
    }
    a2 = *(_QWORD *)(a2 + 8);
  }
}
