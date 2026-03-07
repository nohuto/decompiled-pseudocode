__int64 __fastcall AMLICreateOverrideObjectDefault(_BYTE *Src, size_t Size, __int64 a3)
{
  size_t v3; // rdi
  unsigned int v4; // ebx
  unsigned int v7; // ecx
  _BYTE *v8; // rdx
  void *v9; // rax
  __int128 v10; // xmm1
  void *v11; // xmm0_8
  __int128 v13; // [rsp+20h] [rbp-30h] BYREF
  __int128 v14; // [rsp+30h] [rbp-20h]
  void *v15; // [rsp+40h] [rbp-10h]

  v3 = (unsigned int)Size;
  v15 = 0LL;
  v4 = 0;
  v13 = 0LL;
  v14 = 0LL;
  if ( (_DWORD)Size == 4 )
  {
    LODWORD(v14) = (_DWORD)Src;
    goto LABEL_14;
  }
  if ( (_DWORD)Size == 8 )
  {
    *(_QWORD *)&v14 = Src;
LABEL_14:
    WORD1(v13) = 1;
    goto LABEL_15;
  }
  v7 = 0;
  if ( (_DWORD)Size )
  {
    v8 = Src;
    do
    {
      if ( !*v8 )
        break;
      ++v7;
      ++v8;
    }
    while ( v7 < (unsigned int)v3 );
  }
  if ( v7 != (_DWORD)v3 - 1 )
    return (unsigned int)-1073741637;
  DWORD2(v14) = v3;
  WORD1(v13) = 2;
  v9 = (void *)NewObjData(gpheapGlobal, &v13);
  v15 = v9;
  if ( v9 )
  {
    memmove(v9, Src, v3);
LABEL_15:
    v10 = v14;
    *(_OWORD *)a3 = v13;
    v11 = v15;
    *(_OWORD *)(a3 + 16) = v10;
    *(_QWORD *)(a3 + 32) = v11;
    return v4;
  }
  return (unsigned int)-1073741670;
}
