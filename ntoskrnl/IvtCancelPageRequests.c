/*
 * XREFs of IvtCancelPageRequests @ 0x140529AD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtCancelPageRequests(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // r10
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // r10
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // edx

  v3 = a1[20];
  v5 = a1[18];
  v6 = a1[1];
  v7 = v3 >> 5;
  v8 = a3;
  v9 = *(_QWORD *)(v6 + 192);
  v10 = (*(_QWORD *)(v6 + 200) >> 5) & 0x3FFFLL;
  result = (v9 >> 5) & 0x3FFF;
  if ( (_DWORD)result != (_DWORD)v10 )
  {
    do
    {
      v12 = v5 + 32LL * (unsigned int)result;
      if ( (*(_QWORD *)v12 & 0x100LL) != 0
        && (HIDWORD(*(_QWORD *)v12) & 0xFFFFF) == v8
        && *(unsigned __int16 *)(v12 + 2) == a2 )
      {
        *(_QWORD *)(v12 + 8) &= 0xFFFFFFFFFFFFFFFCuLL;
      }
      v13 = ((int)result + 1) % (unsigned int)v7;
      result = v13;
    }
    while ( v13 != (_DWORD)v10 );
  }
  return result;
}
