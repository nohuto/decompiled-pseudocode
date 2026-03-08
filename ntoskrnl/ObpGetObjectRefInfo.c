/*
 * XREFs of ObpGetObjectRefInfo @ 0x140979C84
 * Callers:
 *     ObpPushRefDerefInfo @ 0x14097A13C (ObpPushRefDerefInfo.c)
 *     ObpRegisterObject @ 0x14097A3B4 (ObpRegisterObject.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObpGetObjectRefInfo(__int64 a1, unsigned __int16 **a2)
{
  __int64 v3; // r8
  __int64 v4; // rbp
  unsigned __int16 *v5; // rsi
  unsigned __int16 *i; // rbx
  unsigned __int16 *v7; // rdi
  __int64 v8; // rax

  v3 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
  v4 = (unsigned int)v3;
  v5 = 0LL;
  for ( i = (unsigned __int16 *)*((_QWORD *)ObpObjectTable + v3); i; i = (unsigned __int16 *)*((_QWORD *)i + 1) )
  {
    v7 = i;
    if ( *(_QWORD *)i == a1 )
    {
      v8 = i[17];
      if ( i[16] == (_WORD)v8 )
      {
        i = (unsigned __int16 *)ExAllocatePool2(64LL, 12 * v8 + 6184, 1951556175LL);
        if ( !i )
          return 3221225495LL;
        memmove(i, v7, 12LL * v7[16] + 40);
        i[17] += 512;
        if ( v5 )
          *((_QWORD *)v5 + 1) = i;
        else
          *((_QWORD *)ObpObjectTable + v4) = i;
        ExFreePoolWithTag(v7, 0x7452624Fu);
      }
      break;
    }
    v5 = i;
  }
  *a2 = i;
  return 0LL;
}
