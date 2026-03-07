__int64 __fastcall UsbhGetHubPdoName(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rdi
  _DWORD *v9; // rbp
  size_t v10; // r12
  _WORD *v12; // rax
  unsigned int v13; // edi
  _WORD *v14; // rdi
  __int16 v15; // ax
  unsigned int v16; // ebx
  size_t v17; // r8
  _WORD *v18; // rcx
  unsigned int v19; // ebx

  v5 = a4;
  FdoExt(a1);
  v9 = PdoExt(a2);
  v10 = (unsigned int)v5;
  Log(a1, 8, 1735290430, (__int64)a3, v5);
  *a5 = 0;
  if ( !a3 )
    return 3221225485LL;
  if ( (unsigned int)v5 < 6 )
    return 3221225507LL;
  if ( (v9[355] & 0xC) == 0xC )
  {
    v12 = (_WORD *)*((_QWORD *)v9 + 151);
    v13 = 0;
    if ( *v12 == 92 )
    {
      v14 = v12 + 1;
      v15 = v12[1];
      if ( v15 == 92 )
        goto LABEL_11;
      do
      {
        if ( !v15 )
          break;
        v15 = *++v14;
      }
      while ( *v14 != 92 );
      if ( *v14 == 92 )
LABEL_11:
        LODWORD(v14) = (_DWORD)v14 + 2;
      v13 = (_DWORD)v14 - v9[302];
    }
    v16 = *((unsigned __int16 *)v9 + 600) - v13;
    memset(a3, 0, v10);
    v17 = v16;
    v18 = a3 + 2;
    v19 = v16 + 6;
    if ( v10 < v17 + 6 )
    {
      *(_DWORD *)a3 = v19;
      *v18 = 0;
      *a5 = 6;
    }
    else
    {
      memmove(v18, (const void *)(*((_QWORD *)v9 + 151) + 2 * ((unsigned __int64)v13 >> 1)), v17);
      *a5 = v19;
      *(_DWORD *)a3 = v19;
    }
  }
  else
  {
    *(_DWORD *)a3 = 6;
    a3[2] = 0;
    *a5 = 6;
  }
  Log(a1, 8, 1735290428, *a5, 0LL);
  return 0LL;
}
