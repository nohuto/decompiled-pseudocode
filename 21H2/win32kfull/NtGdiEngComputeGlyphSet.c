/*
 * XREFs of NtGdiEngComputeGlyphSet @ 0x1C02B29A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C001DF14 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z @ 0x1C00A476C (-WriteFD_GLYPHSET@@YAHPEAU_FD_GLYPHSET@@0K@Z.c)
 *     EngComputeGlyphSet @ 0x1C00A48E0 (EngComputeGlyphSet.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiEngComputeGlyphSet(INT nCodePage, INT nFirstChar, INT cChars)
{
  __int64 v6; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  FD_GLYPHSET *v9; // rax
  struct _FD_GLYPHSET *v10; // rsi
  unsigned int cjThis; // ebp
  __int64 v12; // rax

  v6 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( ThreadCurrentObj )
  {
    if ( (unsigned int)Feature_1508323640__private_IsEnabledDeviceUsage() )
    {
      if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
      {
        ThreadCurrentObj = 0LL;
        goto LABEL_11;
      }
    }
    else
    {
      ++*((_DWORD *)ThreadCurrentObj + 105);
    }
    v9 = EngComputeGlyphSet(nCodePage, nFirstChar, cChars);
    v10 = v9;
    if ( v9 )
    {
      cjThis = v9->cjThis;
      if ( v9->cjThis )
      {
        v12 = (__int64)UMPDOBJ::_AllocUserMem(ThreadCurrentObj, cjThis, 0);
        v6 = v12;
        if ( v12 )
          v6 = -(__int64)((unsigned int)WriteFD_GLYPHSET((struct _FD_GLYPHSET *)v12, v10, cjThis) != 0) & v12;
      }
      EngFreeMem(v10);
    }
  }
LABEL_11:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v6;
}
