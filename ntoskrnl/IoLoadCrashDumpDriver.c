/*
 * XREFs of IoLoadCrashDumpDriver @ 0x14054E410
 * Callers:
 *     <none>
 * Callees:
 *     MmLoadSystemImage @ 0x14072CDE0 (MmLoadSystemImage.c)
 */

__int64 __fastcall IoLoadCrashDumpDriver(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v8 = 0LL;
  v7[0] = 0LL;
  if ( !IopAllowLoadCrashDumpDriver )
    return 3221225474LL;
  if ( *(_DWORD *)a2 != 24 )
    return 3221225485LL;
  if ( *(_DWORD *)a3 != 24 )
    return 3221225485LL;
  v5 = *(_QWORD *)(a2 + 8);
  if ( !v5 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    return 3221225485LL;
  result = MmLoadSystemImage(a1, v5, v6, 2, (__int64)&v8, (__int64)v7);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a3 + 8) = v8;
    *(_QWORD *)(a3 + 16) = v7[0];
  }
  return result;
}
