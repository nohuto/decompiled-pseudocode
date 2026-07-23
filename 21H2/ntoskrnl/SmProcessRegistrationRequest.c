/*
 * XREFs of SmProcessRegistrationRequest @ 0x1407CF310
 * Callers:
 *     SmQueryStoreInformation @ 0x140621A68 (SmQueryStoreInformation.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     SmGetRegistrationInfo @ 0x1407CF3BC (SmGetRegistrationInfo.c)
 */

__int64 __fastcall SmProcessRegistrationRequest(__int64 a1, int a2, _DWORD *a3, char a4)
{
  __int128 *v5; // rbx
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = (__int128 *)a1;
  v7 = 0LL;
  if ( a2 != 16 )
    return 3221225990LL;
  if ( a4 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v5 < 0x7FFFFFFF0000LL )
      a1 = (__int64)v5;
    *(_BYTE *)a1 = *(_BYTE *)a1;
    *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
  }
  v7 = *v5;
  if ( (_BYTE)v7 != 2 || (v7 & 0xFFFFFF00) != 0 )
    return 3221225485LL;
  LOBYTE(a1) = a4;
  result = SmGetRegistrationInfo(a1, &v7);
  if ( (int)result >= 0 )
  {
    *v5 = v7;
    *a3 = 16;
  }
  return result;
}
