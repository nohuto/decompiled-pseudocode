/*
 * XREFs of DNG_StretchRow @ 0x1C00CA9E0
 * Callers:
 *     DNG_DrawRow @ 0x1C00CA560 (DNG_DrawRow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DNG_StretchRow(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  __int64 v5; // rbp
  unsigned int v6; // r14d
  unsigned int v7; // edi
  _DWORD *v8; // rbx
  __int64 result; // rax
  _DWORD *v10; // r11
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r9
  bool v13; // cf

  v5 = a4[3];
  v6 = a4[2];
  v7 = a4[1];
  v8 = (_DWORD *)(a2 + 4LL * (int)a4[6]);
  result = *a4;
  v10 = (_DWORD *)(a3 + 4 * result);
  if ( *(_QWORD *)(a1 + 216) <= (unsigned __int64)v8 )
  {
    result = (int)a4[7];
    v11 = a2 + 4 * result;
    if ( v11 <= *(_QWORD *)(a1 + 224) && *(_QWORD *)(a1 + 232) <= (unsigned __int64)v10 )
    {
      result = *(_DWORD *)(a1 + 52) - *(_DWORD *)(a1 + 56);
      v12 = a3 + 4 * result;
      if ( v12 <= *(_QWORD *)(a1 + 240) )
      {
        while ( (unsigned __int64)v8 < v11 && (unsigned __int64)v10 < v12 )
        {
          v13 = v7 + v6 < v7;
          *v8 = *v10;
          v7 += v6;
          result = v13 + v5;
          ++v8;
          v10 += result;
        }
      }
    }
  }
  return result;
}
