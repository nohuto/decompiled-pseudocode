__int64 __fastcall NLS_DOWNCASE(__int64 a1, int a2)
{
  if ( (unsigned __int16)a2 < 0x41u )
    return (unsigned __int16)a2;
  if ( (unsigned __int16)a2 <= 0x5Au )
    return (unsigned int)(a2 + 32);
  if ( !a1 || (unsigned __int16)a2 < 0xC0u )
    return (unsigned __int16)a2;
  return (unsigned __int16)(*(_WORD *)(a1
                                     + 2LL
                                     * ((a2 & 0xF)
                                      + (unsigned int)*(unsigned __int16 *)(a1
                                                                          + 2LL
                                                                          * (((unsigned __int8)a2 >> 4)
                                                                           + (unsigned int)*(unsigned __int16 *)(a1 + 2 * ((unsigned __int64)(unsigned __int16)a2 >> 8))))))
                          + a2);
}
