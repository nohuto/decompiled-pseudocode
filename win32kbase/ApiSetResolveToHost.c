/*
 * XREFs of ApiSetResolveToHost @ 0x1C00B22A8
 * Callers:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x1C00B2130 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 * Callees:
 *     ApiSetpSearchForApiSet @ 0x1C00B2394 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char v5; // bl
  __int64 v8; // r8
  __int64 result; // rax
  _WORD *v10; // rcx
  unsigned int v11; // eax
  unsigned __int16 v12; // ax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rax

  v5 = 0;
  *(_OWORD *)a5 = 0LL;
  v8 = *a2;
  if ( (unsigned int)v8 >= 8 )
  {
    v15 = (_QWORD *)*((_QWORD *)a2 + 1);
    v16 = *v15 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v16 == 0x2D004900500041LL || v16 == 0x2D005400580045LL )
    {
      v10 = (_WORD *)((char *)v15 + v8);
      v11 = v8;
      do
      {
        v11 -= 2;
        --v10;
      }
      while ( *v10 != 45 && v11 > 1 );
      v12 = (unsigned __int16)v11 >> 1;
      if ( v12 )
      {
        v13 = ApiSetpSearchForApiSet(a1, v15, v12);
        if ( v13 )
        {
          if ( *(_DWORD *)(v13 + 20) )
          {
            v14 = *(unsigned int *)(v13 + 16);
            v5 = 1;
            *(_QWORD *)(a5 + 8) = a1 + *(unsigned int *)(v14 + a1 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v14 + a1 + 16);
            *(_WORD *)a5 = *(_WORD *)(v14 + a1 + 16);
          }
        }
      }
    }
  }
  result = 0LL;
  *a4 = v5;
  return result;
}
