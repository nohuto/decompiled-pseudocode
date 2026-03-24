/*
 * XREFs of NtGdiFONTOBJ_pfdg @ 0x1C02B4DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C001DF14 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009AF04 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00A476C (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C013CB7C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C013CD54 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C013CEBC (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

struct _FD_GLYPHSET *__fastcall NtGdiFONTOBJ_pfdg(__int64 a1)
{
  struct _FD_GLYPHSET *v2; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  struct _FD_GLYPHSET *v7; // rsi
  unsigned int v8; // ebp
  struct _FD_GLYPHSET *v9; // rax
  unsigned __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)Feature_1508323640__private_IsEnabledDeviceUsage() )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
      {
        ThreadCurrentObj = 0LL;
        goto LABEL_17;
      }
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
    v5 = UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v6 = v5;
    if ( v5 )
    {
      v2 = (struct _FD_GLYPHSET *)*((_QWORD *)ThreadCurrentObj + 41);
      if ( !v2 )
      {
        v11 = v5;
        UMPDAcquireRFONTSem((struct RFONTOBJ *)&v11, ThreadCurrentObj, 0, 0, 0LL);
        v7 = *(struct _FD_GLYPHSET **)(v6 + 472);
        if ( v7 )
        {
          if ( v7 < MmSystemRangeStart )
          {
            v2 = v7;
            *((_QWORD *)ThreadCurrentObj + 41) = v7;
          }
          else
          {
            v8 = 4 * (v7->cGlyphsSupported + 4 * (v7->cRuns + 1));
            if ( v8 )
            {
              v9 = (struct _FD_GLYPHSET *)UMPDOBJ::_AllocUserMem(ThreadCurrentObj, v8, 0);
              v2 = v9;
              if ( v9 )
              {
                if ( (unsigned int)WriteFD_GLYPHSET(v9, v7, v8) )
                  *((_QWORD *)ThreadCurrentObj + 41) = v2;
                else
                  v2 = 0LL;
              }
            }
          }
        }
        UMPDReleaseRFONTSem((struct RFONTOBJ *)&v11, ThreadCurrentObj, 0LL, 0LL, 0LL);
        v11 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v11);
      }
    }
  }
LABEL_17:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v2;
}
