/*
 * XREFs of VfCheckDifDdiExist @ 0x140A89888
 * Callers:
 *     DifRegisterPlugin @ 0x140604970 (DifRegisterPlugin.c)
 * Callees:
 *     ViCheckDifDdiExist @ 0x140A89FC0 (ViCheckDifDdiExist.c)
 */

char __fastcall VfCheckDifDdiExist(unsigned int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx
  char **v3; // rax
  __int64 v4; // rdx

  if ( !(unsigned __int8)ViCheckDifDdiExist(&VfDifThunks, a1) && !(unsigned __int8)ViCheckDifDdiExist(&VfPoolThunks, v1) )
  {
    v3 = &VfDifIoCallbackThunks;
    while ( *((_DWORD *)v3 + 7) != (_DWORD)v2 )
    {
      v3 += 4;
      if ( !*v3 )
      {
        if ( (unsigned __int8)ViCheckDifDdiExist(&VfRegularThunks, v2) )
          return 1;
        return ViCheckDifDdiExist(&VfMandatoryThunks, v4);
      }
    }
  }
  return 1;
}
