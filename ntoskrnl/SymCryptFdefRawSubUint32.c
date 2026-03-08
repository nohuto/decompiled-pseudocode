/*
 * XREFs of SymCryptFdefRawSubUint32 @ 0x1403FE1D4
 * Callers:
 *     SymCryptFdefIntSubMixedSize @ 0x1403FDAC8 (SymCryptFdefIntSubMixedSize.c)
 *     SymCryptFdefIntSubUint32 @ 0x1403FDBD8 (SymCryptFdefIntSubUint32.c)
 *     SymCryptFdefModSetRandomGeneric @ 0x1403FF2CC (SymCryptFdefModSetRandomGeneric.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptFdefRawSubUint32(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r9d
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // rcx

  v4 = 16 * a4;
  result = a2;
  if ( v4 )
  {
    v6 = a1 - (_QWORD)a3;
    v7 = v4;
    do
    {
      v8 = *(unsigned int *)((char *)a3 + v6) - result;
      *a3++ = v8;
      result = BYTE4(v8) & 1;
      --v7;
    }
    while ( v7 );
  }
  return result;
}
