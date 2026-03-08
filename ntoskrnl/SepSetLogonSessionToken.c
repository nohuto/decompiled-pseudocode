/*
 * XREFs of SepSetLogonSessionToken @ 0x14079AF7C
 * Callers:
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     SepStopReferencingLogonSession @ 0x140742B6C (SepStopReferencingLogonSession.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 */

LONG_PTR __fastcall SepSetLogonSessionToken(__int64 a1)
{
  LONG_PTR result; // rax
  int v3; // eax
  PVOID v4; // rcx
  _DWORD v5[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-28h]
  __int64 v7; // [rsp+50h] [rbp-20h]
  int v8; // [rsp+58h] [rbp-18h]
  int v9; // [rsp+5Ch] [rbp-14h]
  __int128 v10; // [rsp+60h] [rbp-10h]
  PVOID Object; // [rsp+80h] [rbp+10h] BYREF

  v9 = 0;
  v5[1] = 0;
  result = *(_QWORD *)(a1 + 216);
  if ( !*(_QWORD *)(result + 48) )
  {
    result = *(unsigned int *)(a1 + 200);
    if ( (result & 0x10) == 0 && (result & 8) == 0 )
    {
      Object = 0LL;
      v6 = 0LL;
      v8 = 0;
      v7 = 0LL;
      v5[0] = 48;
      v10 = 0LL;
      result = SepDuplicateToken(a1, (unsigned int)v5, 0, 1, 0, 0, 0, (__int64)&Object);
      if ( (int)result >= 0 )
      {
        v3 = SepStopReferencingLogonSession((__int64)Object);
        v4 = Object;
        if ( v3 >= 0 )
        {
          result = _InterlockedCompareExchange64(
                     (volatile signed __int64 *)(*(_QWORD *)(a1 + 216) + 48LL),
                     (signed __int64)Object,
                     0LL);
          if ( !result )
            return result;
          v4 = Object;
        }
        return ObfDereferenceObject(v4);
      }
    }
  }
  return result;
}
