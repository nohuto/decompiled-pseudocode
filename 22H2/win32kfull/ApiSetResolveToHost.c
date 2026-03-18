/*
 * XREFs of ApiSetResolveToHost @ 0x1C00BF28C
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x1C00BEF64 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1C00BF39C (ApiSetpSearchForApiSet.c)
 *     ApiSetResolveToHost_V7 @ 0x1C0140C78 (ApiSetResolveToHost_V7.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, int a3, char *a4, __int64 a5)
{
  __int64 v6; // rbx
  char v8; // di
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  _WORD *v13; // rcx
  unsigned __int16 v14; // ax
  __int64 v15; // rax
  __int64 v16; // rcx

  v6 = a1;
  if ( *(_BYTE *)a1 == 7 )
    return ApiSetResolveToHost_V7(a1, (_DWORD)a2, a3, (_DWORD)a4, a5);
  if ( *(_DWORD *)a1 == 6 && (*(_DWORD *)(a1 + 8) & 4) != 0 )
  {
    a1 += 28LL;
    if ( *(_BYTE *)a1 == 7 )
      return ApiSetResolveToHost_V7(a1, (_DWORD)a2, a3, (_DWORD)a4, a5);
  }
  v8 = 0;
  *(_OWORD *)a5 = 0LL;
  v9 = *a2;
  if ( (unsigned int)v9 >= 8 )
  {
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = *v10 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v11 == 0x2D004900500041LL || v11 == 0x2D005400580045LL )
    {
      v12 = v9;
      v13 = (_WORD *)((char *)v10 + v9);
      do
      {
        if ( v12 <= 1 )
          break;
        v12 -= 2;
        --v13;
      }
      while ( *v13 != 45 );
      v14 = (unsigned __int16)v12 >> 1;
      if ( v14 )
      {
        v15 = ApiSetpSearchForApiSet(v6, v10, v14);
        if ( v15 )
        {
          if ( *(_DWORD *)(v15 + 20) )
          {
            v16 = *(unsigned int *)(v15 + 16);
            v8 = 1;
            *(_QWORD *)(a5 + 8) = v6 + *(unsigned int *)(v16 + v6 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v16 + v6 + 16);
            *(_WORD *)a5 = *(_WORD *)(v16 + v6 + 16);
          }
        }
      }
    }
  }
  *a4 = v8;
  return 0LL;
}
