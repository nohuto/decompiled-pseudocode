/*
 * XREFs of ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C00FA678
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C00A70D8 (_ChangeWindowMessageFilterEx.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00A75A0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00FA554 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMessageAllowedByFilterEx(void *const *a1, unsigned __int16 a2, void ***a3, void ***a4)
{
  void **v6; // r11
  void **v7; // r9
  unsigned int v8; // r8d

  if ( a1
    && (v6 = (void **)a1[(unsigned __int64)a2 >> 13]) != 0LL
    && (v7 = (void **)v6[(a2 >> 9) & 0xF]) != 0LL
    && (v8 = 1, ((unsigned __int8)(1 << (a2 & 7)) & *((_BYTE *)v7 + (((unsigned __int64)a2 >> 3) & 0x3F))) != 0) )
  {
    if ( a3 )
      *a3 = v6;
    if ( a4 )
      *a4 = v7;
  }
  else
  {
    return 0;
  }
  return v8;
}
