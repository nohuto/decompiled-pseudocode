/*
 * XREFs of LdrpSetProtection @ 0x180083688
 * Callers:
 *     LdrpProtectAndRelocateImage @ 0x1800835AC (LdrpProtectAndRelocateImage.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180032AD0 (RtlImageNtHeaderEx.c)
 *     ZwProtectVirtualMemory @ 0x18009DEE0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrpSetProtection(unsigned __int64 a1, char a2)
{
  __int64 v4; // rsi
  int v5; // edi
  unsigned int *i; // rbx
  int v7; // edx
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 result; // rax
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v12[6]; // [rsp+38h] [rbp-30h] BYREF
  char v13; // [rsp+80h] [rbp+18h] BYREF
  __int64 v14; // [rsp+88h] [rbp+20h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v14);
  v4 = v14;
  v5 = 0;
  if ( !*(_WORD *)(v14 + 6) )
    return 0LL;
  for ( i = (unsigned int *)(v14 + *(unsigned __int16 *)(v14 + 20) + 40LL); ; i += 10 )
  {
    v7 = i[5];
    if ( v7 >= 0 && *i )
    {
      if ( a2 )
      {
        v8 = (v7 & 0x20000000) != 0 ? ((v7 & 0x40000000) != 0 ? 32 : 16) : 2;
        v9 = v8;
        LODWORD(v9) = v8 | 0x200;
        if ( (v7 & 0x4000000) == 0 )
          v9 = v8;
      }
      else
      {
        v9 = 4LL;
      }
      v12[0] = a1 + *(i - 1);
      v11 = *i;
      if ( v11 )
      {
        result = ZwProtectVirtualMemory(-1LL, v12, &v11, v9, &v13);
        if ( (int)result < 0 )
          break;
      }
    }
    if ( ++v5 >= (unsigned int)*(unsigned __int16 *)(v4 + 6) )
      return 0LL;
  }
  return result;
}
