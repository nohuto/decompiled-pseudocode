__int64 __fastcall ApiSetResolveToHost(__int64 a1, unsigned __int16 *a2, __int64 a3, char *a4, __int64 a5)
{
  char v5; // bl
  __int64 v8; // r8
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rax
  _WORD *v11; // rcx
  unsigned int v12; // eax
  unsigned __int16 v13; // ax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax

  v5 = 0;
  *(_OWORD *)a5 = 0LL;
  v8 = *a2;
  if ( (unsigned int)v8 >= 8 )
  {
    v9 = (_QWORD *)*((_QWORD *)a2 + 1);
    v10 = *v9 & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v10 == 0x2D004900500041LL || v10 == 0x2D005400580045LL )
    {
      v11 = (_WORD *)((char *)v9 + v8);
      v12 = v8;
      do
      {
        v12 -= 2;
        --v11;
      }
      while ( *v11 != 45 && v12 > 1 );
      v13 = (unsigned __int16)v12 >> 1;
      if ( v13 )
      {
        v14 = ApiSetpSearchForApiSet(a1, v9, v13);
        if ( v14 )
        {
          if ( *(_DWORD *)(v14 + 20) )
          {
            v15 = *(unsigned int *)(v14 + 16);
            v5 = 1;
            *(_QWORD *)(a5 + 8) = a1 + *(unsigned int *)(v15 + a1 + 12);
            *(_WORD *)(a5 + 2) = *(_WORD *)(v15 + a1 + 16);
            *(_WORD *)a5 = *(_WORD *)(v15 + a1 + 16);
          }
        }
      }
    }
  }
  result = 0LL;
  *a4 = v5;
  return result;
}
