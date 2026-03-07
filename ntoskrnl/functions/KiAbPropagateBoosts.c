__int64 __fastcall KiAbPropagateBoosts(__int64 **a1, __int64 a2, __int64 a3)
{
  __int64 *i; // r9
  __int64 result; // rax
  volatile signed __int16 *v8; // rdi
  signed __int32 v9[8]; // [rsp+0h] [rbp-48h] BYREF

  for ( i = *a1; i; i = *a1 )
  {
    result = *i;
    v8 = (volatile signed __int16 *)(i - 101);
    *a1 = (__int64 *)*i;
    *i = 1LL;
    _InterlockedOr(v9, 0);
    if ( *((_BYTE *)i - 15) )
      result = KiAbProcessThreadLocks((_DWORD)v8, 0, 1, 0, a3, (__int64)a1, a2);
    _InterlockedDecrement16(v8 + 434);
  }
  return result;
}
