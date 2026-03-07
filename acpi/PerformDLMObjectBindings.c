__int64 __fastcall PerformDLMObjectBindings(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  __int64 v4; // rcx
  int v5; // edi
  unsigned int v6; // esi
  _QWORD *i; // rbx
  _DWORD *v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // r14
  unsigned int v11; // eax

  if ( *(_WORD *)(a1 + 2) != 4 )
  {
LABEL_10:
    LODWORD(v4) = -1072431089;
    return (unsigned int)v4;
  }
  v3 = *(_DWORD **)(a1 + 32);
  v4 = 0LL;
  v5 = 0;
  v6 = *v3;
  if ( *v3 )
  {
    for ( i = v3 + 10; *((_WORD *)i - 15) == 4; i += 5 )
    {
      v8 = (_DWORD *)*i;
      if ( *(_DWORD *)*i > 1u )
      {
        v9 = (__int64)(v8 + 2);
        v10 = (__int64)(v8 + 12);
        do
        {
          v11 = ParseDLMObjectInternal(v4, a2, v9, v10);
          v4 = v11;
        }
        while ( v11 == -1073741802 );
      }
      if ( ++v5 >= v6 )
        return (unsigned int)v4;
    }
    goto LABEL_10;
  }
  return (unsigned int)v4;
}
