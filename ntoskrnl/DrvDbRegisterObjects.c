/*
 * XREFs of DrvDbRegisterObjects @ 0x14081D7C4
 * Callers:
 *     DrvDbOpenContext @ 0x14081D690 (DrvDbOpenContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDbRegisterObjects(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  __int64 *v3; // r9
  unsigned int v4; // r11d
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = 0;
  v3 = &qword_140008A60;
  v4 = 0;
  while ( 1 )
  {
    v6 = *(int *)v3;
    if ( (unsigned int)(v6 - 1) > 0xA )
      break;
    _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v6 + 296), v3[1]);
    v7 = *(int *)v3;
    if ( (unsigned int)(v7 - 1) > 0xA )
      break;
    _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v7 + 392), a2);
    ++v4;
    v3 += 2;
    if ( v4 >= 5 )
      return v2;
  }
  return (unsigned int)-1073741811;
}
