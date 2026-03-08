/*
 * XREFs of Normalization__GetLastChar @ 0x1409BD888
 * Callers:
 *     Normalization__IsNormalized @ 0x1409BDB3C (Normalization__IsNormalized.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Normalization__GetLastChar(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _WORD *v6; // rdx
  unsigned int v10; // r8d
  __int64 v11; // r10
  char v12; // cl
  char v13; // r9
  char v14; // r9
  __int64 result; // rax

  v6 = (_WORD *)(a2 - 2);
  if ( (_WORD *)*a3 == v6 )
    return *a4;
  if ( (unsigned __int16)(*v6 + 10240) <= 0x7FFu && (_WORD *)*a3 == --v6 )
    return *a4;
  v10 = (unsigned __int16)*v6;
  if ( v10 - 55296 <= 0x7FF )
    v10 += ((unsigned __int16)*(v6 - 1) - 55287) << 10;
  v11 = *(unsigned __int8 *)(((__int64)(int)v10 >> 7) + *(_QWORD *)(a1 + 32));
  v12 = 0;
  if ( (_BYTE)v11 )
  {
    v14 = *(_BYTE *)((v10 & 0x7F) + (v11 << 7) + *(_QWORD *)(a1 + 40) - 128);
    v12 = v14 & 0x3F;
    v13 = v14 & 0xC0;
  }
  else
  {
    v13 = 0;
  }
  *a6 = v13;
  *a5 = v12;
  result = v10;
  *a3 = v6;
  *a4 = v10;
  return result;
}
