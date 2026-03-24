/*
 * XREFs of NtGdiFONTOBJ_cGetAllGlyphHandles @ 0x1C02B48F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00CFBDC (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1C013CEBC (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C01552E4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     Feature_1508323640__private_IsEnabledDeviceUsage @ 0x1C016A12C (Feature_1508323640__private_IsEnabledDeviceUsage.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016D8BC (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     FONTOBJ_cGetAllGlyphHandles @ 0x1C02935A0 (FONTOBJ_cGetAllGlyphHandles.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C02B2070 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiFONTOBJ_cGetAllGlyphHandles(__int64 a1, char *a2)
{
  ULONG v4; // ebp
  HGLYPH *v5; // rdi
  ULONG v6; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  FONTOBJ *v9; // rax
  FONTOBJ *v10; // r14
  ULONG AllGlyphHandles; // eax

  v4 = 0;
  v5 = 0LL;
  v6 = 0;
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
    v9 = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)ThreadCurrentObj, a1);
    v10 = v9;
    if ( v9 )
    {
      if ( a2 )
      {
        AllGlyphHandles = FONTOBJ_cGetAllGlyphHandles(v9, 0LL);
        v4 = AllGlyphHandles;
        if ( AllGlyphHandles )
        {
          if ( AllGlyphHandles > 0x9C4000 )
            goto LABEL_17;
          v5 = (HGLYPH *)PALLOCMEM2(4 * AllGlyphHandles, 1886221639LL, 0);
        }
      }
      v6 = FONTOBJ_cGetAllGlyphHandles(v10, v5);
      if ( v6 && a2 )
      {
        if ( !v5 )
          goto LABEL_17;
        v6 &= -((unsigned int)bSafeCopyBits(a2, v5, 4 * v4) != 0);
      }
      if ( v5 )
        Win32FreePool(v5);
    }
  }
LABEL_17:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v6;
}
