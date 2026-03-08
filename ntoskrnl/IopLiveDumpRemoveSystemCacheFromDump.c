/*
 * XREFs of IopLiveDumpRemoveSystemCacheFromDump @ 0x140A99404
 * Callers:
 *     IopLiveDumpPopulateBitmapForDump @ 0x140A990E0 (IopLiveDumpPopulateBitmapForDump.c)
 * Callees:
 *     IopLiveDumpGetMillisecondCounter @ 0x14055793C (IopLiveDumpGetMillisecondCounter.c)
 *     MmRemoveSystemCacheFromDump @ 0x14062E2CC (MmRemoveSystemCacheFromDump.c)
 */

__int64 __fastcall IopLiveDumpRemoveSystemCacheFromDump(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 MillisecondCounter; // rbx
  __int64 result; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+48h] [rbp-10h]

  v7[3] = 0LL;
  MillisecondCounter = 0LL;
  v8 = 0LL;
  *a3 = 0LL;
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v7[4] = 0LL;
  v7[0] = 0LL;
  LODWORD(v8) = v8 | 1;
  v7[2] = a1 + 600;
  v7[1] = IoFreeDumpRange;
  result = MmRemoveSystemCacheFromDump((__int64)v7);
  if ( (*(_DWORD *)(a1 + 80) & 0x80u) != 0 )
  {
    result = IopLiveDumpGetMillisecondCounter(0) - MillisecondCounter;
    *a3 = result;
  }
  return result;
}
