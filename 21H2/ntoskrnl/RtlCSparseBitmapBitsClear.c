/*
 * XREFs of RtlCSparseBitmapBitsClear @ 0x140220B54
 * Callers:
 *     RtlpHpVaMgrRangeCleanup @ 0x140220A90 (RtlpHpVaMgrRangeCleanup.c)
 *     RtlCSparseBitmapBitmaskWrite @ 0x140221288 (RtlCSparseBitmapBitmaskWrite.c)
 *     RtlpHpVaMgrRangeCreate @ 0x140221A9C (RtlpHpVaMgrRangeCreate.c)
 *     RtlpHpSegSegmentFree @ 0x140389C1C (RtlpHpSegSegmentFree.c)
 * Callees:
 *     RtlpCSparseBitmapPageDecommit @ 0x140220E60 (RtlpCSparseBitmapPageDecommit.c)
 */

__int64 __fastcall RtlCSparseBitmapBitsClear(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // r9
  signed __int64 v8; // rbx
  __int64 v9; // rax
  signed __int64 v10; // r11
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rcx
  volatile signed __int32 *v13; // r8
  __int64 v14; // r10
  unsigned __int64 v15; // r9
  __int64 *v16; // r8
  __int64 *v17; // r10
  __int64 v18; // rdx
  __int64 *i; // r8
  __int64 v20; // r9
  bool v21; // zf
  unsigned int v22; // eax
  __int64 v23; // rcx
  signed __int64 v24; // [rsp+28h] [rbp-80h]
  unsigned __int64 v25; // [rsp+60h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF
  signed __int64 v27; // [rsp+C8h] [rbp+20h]

  result = (__int64)&retaddr;
  while ( a3 )
  {
    v7 = a2 & 0x7FFF;
    v8 = a3;
    v27 = a3;
    v9 = v7 + a3;
    if ( a3 < 0 )
    {
      v8 = ~v7;
      if ( v9 >= 0 )
        v8 = a3;
    }
    else
    {
      if ( v9 <= 0x8000 )
        goto LABEL_5;
      v8 = 0x8000 - v7;
    }
    v27 = v8;
LABEL_5:
    v10 = v8;
    v24 = v8;
    v11 = a2 >> 15;
    if ( _bittest64((const signed __int64 *)(a1 + 56), a2 >> 30) )
    {
      result = *(_QWORD *)a1;
      if ( !_bittest64(*(const signed __int64 **)a1, v11) )
        goto LABEL_36;
      v25 = *(_QWORD *)(a1 + 8) + (v11 << 12);
      v12 = v8;
      v13 = (volatile signed __int32 *)(v25 + 4 * (v7 >> 5));
      v14 = a2 & 0x1F;
      if ( (unsigned __int64)(v14 + v8) <= 0x20 )
      {
        if ( v8 == 32 )
        {
          *v13 = 0;
          goto LABEL_13;
        }
        v22 = ~(((1 << v8) - 1) << v14);
      }
      else
      {
        if ( (a2 & 0x1F) != 0 )
        {
          _InterlockedAnd(v13, ~(((1 << (32 - (a2 & 0x1F))) - 1) << v14));
          v8 = v27;
          v12 = v27 - (32 - (unsigned int)(a2 & 0x1F));
          ++v13;
        }
        while ( v12 >= 0x20 )
        {
          *v13++ = 0;
          v12 -= 32LL;
        }
        if ( !v12 )
        {
LABEL_13:
          if ( v8 >= 512 )
          {
            result = 1LL;
          }
          else
          {
            v15 = a2 & 0x7E00;
            if ( 0x8000 - v15 < 0x200 )
            {
              result = 0LL;
            }
            else
            {
              v16 = (__int64 *)(v25 + 8 * (v15 >> 6));
              v17 = (__int64 *)(v25 + 8 * ((v15 + 511) >> 6));
              v18 = *v16;
              if ( v16 == v17 )
              {
                v21 = v18 == 0;
                goto LABEL_22;
              }
              if ( v18 )
              {
LABEL_25:
                result = 0LL;
              }
              else
              {
                for ( i = v16 + 1; ; ++i )
                {
                  v20 = *i;
                  if ( i == v17 )
                    break;
                  if ( v20 )
                    goto LABEL_25;
                }
                v21 = v20 == 0;
LABEL_22:
                result = v21;
              }
              v10 = v24;
            }
            v8 = v27;
          }
          if ( (_DWORD)result )
            result = RtlpCSparseBitmapPageDecommit(a1, a2 >> 15, v10 == 0x8000);
          goto LABEL_36;
        }
        v22 = -1 << v12;
      }
      _InterlockedAnd(v13, v22);
      v8 = v27;
      goto LABEL_13;
    }
    result = a2 & 0x3FFFFFFF;
    v8 = a3;
    v23 = result + a3;
    if ( a3 >= 0 )
    {
      if ( v23 > 0x40000000 )
        v8 = 0x40000000 - result;
    }
    else
    {
      v8 = ~(unsigned __int64)(unsigned int)result;
      if ( v23 >= 0 )
        v8 = a3;
    }
LABEL_36:
    a2 += v8;
    a3 -= v8;
  }
  return result;
}
