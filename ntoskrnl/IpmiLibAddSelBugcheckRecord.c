/*
 * XREFs of IpmiLibAddSelBugcheckRecord @ 0x140675714
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406751AC (IpmiHwContextInitialized.c)
 *     IpmiLibAddSelRecord @ 0x1406758D8 (IpmiLibAddSelRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140675980 (IpmiLibpAddSelRawData.c)
 */

__int64 __fastcall IpmiLibAddSelBugcheckRecord(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 *v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int8 v8; // bl
  unsigned __int8 v9; // si
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-20h] BYREF
  __int128 v14; // [rsp+28h] [rbp-18h] BYREF
  __int16 v15; // [rsp+78h] [rbp+38h] BYREF
  char v16; // [rsp+7Ah] [rbp+3Ah]
  char v17; // [rsp+7Bh] [rbp+3Bh]

  v17 = HIBYTE(a4);
  v4 = (unsigned __int16 *)KiBugCheckDriver;
  v13 = KiBugCheckDriverOffset;
  v15 = 0;
  v16 = 0;
  if ( !IpmiHwContextInitialized((__int64)&WheaIpmiContext) )
    return 3221225473LL;
  *(_QWORD *)&v14 = 0x20000LL;
  *(_QWORD *)((char *)&v14 + 7) = 0xFF016F0020040041uLL;
  HIBYTE(v14) = -1;
  result = IpmiLibAddSelRecord(v5, &v14, &v15);
  if ( (int)result >= 0 && !(_BYTE)v15 )
  {
    v8 = 0;
    v14 = 0LL;
    BYTE2(v14) = -34;
    *(_WORD *)((char *)&v14 + 7) = 311;
    BYTE9(v14) = 0;
    HIBYTE(v14) = 1;
    while ( 1 )
    {
      v9 = v8 + 1;
      BYTE10(v14) = v8 + 1;
      *(_DWORD *)((char *)&v14 + 11) = KiBugCheckData[v8];
      result = IpmiLibAddSelRecord(v7, &v14, &v15);
      if ( (int)result < 0 )
        break;
      if ( (_BYTE)v15 )
        break;
      if ( v8 )
      {
        *(_DWORD *)((char *)&v14 + 11) = HIDWORD(KiBugCheckData[v8]);
        result = IpmiLibAddSelRecord(v7, &v14, &v15);
        if ( (int)result < 0 || (_BYTE)v15 )
          break;
      }
      ++v8;
      if ( v9 >= 5u )
      {
        if ( v4 )
        {
          LOBYTE(v10) = -64;
          result = ((__int64 (__fastcall *)(__int64, __int64, int *, __int64))IpmiLibpAddSelRawData)(v7, v10, &v13, 4LL);
          if ( (int)result >= 0 )
          {
            LOBYTE(v11) = -62;
            return IpmiLibpAddSelRawData(v12, v11, *((_QWORD *)v4 + 1), *v4, v13, v14, *((_QWORD *)&v14 + 1));
          }
        }
        return result;
      }
    }
  }
  return result;
}
