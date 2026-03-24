/*
 * XREFs of ?ValidateDoubleClick@@YAHAEBUtagTAP_INFO@@KKH@Z @ 0x1C02191C4
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0218DC8 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ValidateDoubleClick(const struct tagTAP_INFO *a1, int a2, int a3, int a4)
{
  __int16 v4; // bx
  int v5; // r11d
  __int64 v6; // rax
  _BOOL8 result; // rax

  v4 = *((_WORD *)a1 + 4);
  v5 = 0;
  result = 0;
  if ( v4 )
  {
    if ( *(_QWORD *)a1 == gptiCurrent && *((_DWORD *)a1 + 5) == a3 )
    {
      LOBYTE(v5) = a4 != 0;
      if ( (*((_DWORD *)a1 + 6) != 0) == v5 )
      {
        if ( v4 == word_1C033AAD0[12 * a2 + 4] )
          return 1;
        v6 = (unsigned int)(a2 + 1);
        if ( (unsigned int)v6 < 5 && v4 == word_1C033AAD0[12 * v6 + 4] )
          return 1;
      }
    }
  }
  return result;
}
