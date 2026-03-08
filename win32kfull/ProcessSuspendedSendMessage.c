/*
 * XREFs of ProcessSuspendedSendMessage @ 0x1C0015688
 * Callers:
 *     xxxInterSendMsgEx @ 0x1C004A280 (xxxInterSendMsgEx.c)
 * Callees:
 *     ?ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z @ 0x1C000F514 (-ProcessComplexCoalescence@@YAHII_K_JPEA_KPEA_J@Z.c)
 */

__int64 __fastcall ProcessSuspendedSendMessage(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        __int64 a5)
{
  unsigned int v8; // ebx
  __int64 *v10; // rdi
  __int64 *i; // r11

  if ( a3 >= 0x400 )
    return 1LL;
  v8 = ((unsigned __int16)MessageTable[a3] >> 10) & 7;
  if ( v8 )
  {
    if ( v8 >= 2 )
    {
      v10 = (__int64 *)(a1 + 520);
      for ( i = *(__int64 **)(a1 + 520); i != v10; i = (__int64 *)*i )
      {
        if ( *((_DWORD *)i + 22) == a3
          && i[12] == a2
          && !i[6]
          && !i[2]
          && (*((_DWORD *)i + 17) & 0x4008) == 8
          && !ProcessComplexCoalescence(v8, a3, a4, a5, (unsigned __int64 *)i + 9, i + 10) )
        {
          return 0LL;
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}
