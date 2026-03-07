void __fastcall PFFOBJ::vPFFC_Delete(void **this, struct PFFCLEANUP *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rdi
  void *i; // rbp
  _QWORD *v7; // r10
  __int64 v8; // rdx
  void *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r11
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *this;
  v3 = 0LL;
  for ( i = (void *)*((_QWORD *)*this + 27); (unsigned int)v3 < *((_DWORD *)*this + 52); v3 = (unsigned int)(v3 + 1) )
  {
    v17 = v2[v3 + 27];
    if ( v17 )
      PFEOBJ::vDelete((PFEOBJ *)&v17);
    v2 = *this;
  }
  *((_QWORD *)a2 + 1) = v2[10];
  *(_QWORD *)a2 = *((_QWORD *)*this + 11);
  *((_QWORD *)a2 + 2) = *((_QWORD *)*this + 19);
  v7 = *this;
  v8 = *((_QWORD *)*this + 19);
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 200);
    v11 = *this;
    if ( v10 )
    {
      v12 = v7[3];
      if ( v12 )
      {
        if ( *(_QWORD *)(*(_QWORD *)v10 + 80LL) == v12 )
        {
          v13 = 0LL;
          if ( *(_DWORD *)(v8 + 36) )
          {
            do
            {
              v14 = v7[19];
              v15 = *(_QWORD *)(*(_QWORD *)(v14 + 200) + 8 * v13);
              v16 = v14 + *(_QWORD *)(*(_QWORD *)(v7[25] + 8 * v13) + 80LL) - (_QWORD)v7;
              v13 = (unsigned int)(v13 + 1);
              *(_QWORD *)(v15 + 80) = v16;
              v11 = *this;
              v7 = *this;
            }
            while ( (unsigned int)v13 < *(_DWORD *)(*((_QWORD *)*this + 19) + 36LL) );
          }
        }
      }
    }
    *(_QWORD *)(v11[19] + 152LL) = 0LL;
  }
  else
  {
    if ( v7[25] && *((_DWORD *)v7 + 9) )
      FreeFileView();
    v9 = (void *)*((_QWORD *)*this + 24);
    if ( v9 )
      Win32FreePool(v9);
  }
  if ( i )
    Win32FreePool(i);
  Win32FreePool(*this);
  *this = 0LL;
}
