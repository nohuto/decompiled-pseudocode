__int64 __fastcall sub_14075C930(
        char a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7)
{
  return (*(unsigned __int16 *)(a6 + 2LL * (a1 & 3)) + __ROR4__(~a7, a2 % 0xF + 1))
       * (unsigned int)*(unsigned __int16 *)(a6 + 2LL * (((a1 & 3) + (unsigned __int8)(a3 / 3) + (_BYTE)a3 + 1) & 3));
}
