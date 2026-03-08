/*
 * XREFs of EtwpValidateTraceControlFilterDescriptors @ 0x1409F24E4
 * Callers:
 *     EtwpNotifyGuid @ 0x14068EA84 (EtwpNotifyGuid.c)
 * Callees:
 *     EtwpAllocateFilter @ 0x14077F2A4 (EtwpAllocateFilter.c)
 */

__int64 __fastcall EtwpValidateTraceControlFilterDescriptors(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  __int64 v5; // r10
  int v8; // r15d
  unsigned int v9; // ebx
  int v10; // r14d
  unsigned int *i; // rdi
  unsigned __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF
  int v17; // [rsp+28h] [rbp-30h]
  int v18; // [rsp+2Ch] [rbp-2Ch]

  v4 = a3;
  v5 = a4;
  if ( a1 <= 0xD )
  {
    v8 = 0;
    v9 = 16 * a1;
    if ( 16 * a1 <= a3 )
    {
      v10 = 0;
      if ( !a1 )
        return (unsigned int)v4 < v9 + v8 ? 0xC000000D : 0;
      for ( i = (unsigned int *)(a2 + 8); ; i += 4 )
      {
        v12 = *((_QWORD *)i - 1);
        if ( v12 < v9 )
          break;
        if ( v12 >= v4 )
          break;
        v13 = i[1];
        if ( v13 == -2147479552 )
          break;
        if ( v13 == -2147483136 )
          break;
        if ( v13 == -2147482624 )
          break;
        if ( v13 == -2147483392 )
          break;
        if ( v13 == 0x80000000 )
          break;
        if ( v13 == -2147483646 )
          break;
        v14 = *i;
        if ( v12 + v14 > v4 )
          break;
        v17 = *i;
        v8 += v14;
        v16 = v12 + a2;
        v18 = v13;
        result = EtwpAllocateFilter(v13, &v16, v5, 0LL);
        if ( (int)result < 0 )
          return result;
        v5 = a4;
        if ( ++v10 >= a1 )
          return (unsigned int)v4 < v9 + v8 ? 0xC000000D : 0;
      }
    }
  }
  return 3221225485LL;
}
