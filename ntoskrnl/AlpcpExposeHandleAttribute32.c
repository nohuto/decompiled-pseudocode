/*
 * XREFs of AlpcpExposeHandleAttribute32 @ 0x140782BAC
 * Callers:
 *     AlpcpExposeAttributes @ 0x1407CDCB0 (AlpcpExposeAttributes.c)
 * Callees:
 *     AlpcpExposeHandleAttribute @ 0x1407CE344 (AlpcpExposeHandleAttribute.c)
 */

__int64 __fastcall AlpcpExposeHandleAttribute32(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]
  unsigned int v9; // [rsp+34h] [rbp-14h]

  v7 = 0LL;
  v8 = 0;
  result = AlpcpExposeHandleAttribute(a1, a2, &v7);
  if ( (*a4 & 0x10000000) != 0 )
  {
    *a3 = v7;
    a3[1] = DWORD2(v7);
    a3[2] = v8;
    result = v9;
    a3[3] = v9;
  }
  return result;
}
