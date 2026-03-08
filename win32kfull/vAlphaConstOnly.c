/*
 * XREFs of vAlphaConstOnly @ 0x1C00E7E70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vAlphaConstOnly(__int64 a1, _DWORD *a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  _DWORD *v5; // r10
  unsigned int v6; // r9d
  _DWORD *v7; // rbx
  __int64 v8; // r11
  unsigned int v9; // r8d
  unsigned int v10; // edx

  result = a3;
  v5 = a2;
  v6 = HIWORD(a4);
  v7 = &a2[a3];
  if ( a2 != v7 )
  {
    v8 = a1 - (_QWORD)a2;
    do
    {
      v9 = (unsigned __int8)v6 * ((*v5 & 0xFF00FF) - (*(_DWORD *)((char *)v5 + v8) & 0xFF00FF))
         + 8388736
         + 255 * (*(_DWORD *)((char *)v5 + v8) & 0xFF00FF);
      v10 = 255 * ((*(_DWORD *)((char *)v5 + v8) >> 8) & 0xFF00FF)
          + 8388736
          + (unsigned __int8)v6 * (((*v5 >> 8) & 0xFF00FF) - ((*(_DWORD *)((char *)v5 + v8) >> 8) & 0xFF00FF));
      result = v10 + ((v10 >> 8) & 0xFFFF00FF);
      *(_DWORD *)((char *)v5++ + v8) = (v10 + ((v10 >> 8) & 0xFF00FF)) ^ (result ^ ((v9 + ((v9 >> 8) & 0xFF00FF)) >> 8)) & 0xFF00FF;
    }
    while ( v5 != v7 );
  }
  return result;
}
