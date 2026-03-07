__int64 __fastcall MakeITable(Gre::Base *a1, struct RGBX *a2, int a3)
{
  int v3; // r15d
  int v4; // edi
  unsigned __int8 *v6; // rbx
  unsigned __int8 *v7; // rsi
  unsigned int v9; // ebp
  __int64 v10; // r14
  struct Gre::Base::SESSION_GLOBALS *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  struct RGBX *v14; // r9
  __int64 v15; // r10
  const void *v16; // rdx
  unsigned int *v17; // rax
  int v18; // r8d
  unsigned int *v19; // r12
  __int64 v20; // [rsp+70h] [rbp+8h]
  __int64 v21; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v4 = a3;
  v6 = (unsigned __int8 *)a1;
  v7 = (unsigned __int8 *)a1;
  if ( a2 )
  {
    v11 = Gre::Base::Globals(a1);
    v21 = *((_QWORD *)v11 + 5);
    GreAcquireSemaphore(v21);
    v9 = 1;
    v15 = *(_QWORD *)(SGDGetSessionState(v12) + 32);
    v20 = v15;
    if ( v4 >= 20 )
    {
      v13 = 0LL;
      v14 = a2;
      do
      {
        if ( *(_DWORD *)v14 != *((_DWORD *)v11 + (int)v13 % 20 + 964) )
          break;
        v13 = (unsigned int)(v13 + 1);
        v14 = (struct RGBX *)((char *)v14 + 4);
      }
      while ( (int)v13 < v4 );
      if ( (_DWORD)v13 == v4 )
      {
        v16 = *(const void **)(v15 + 19928);
        if ( v16 )
        {
          memmove(v6, v16, 0x8000uLL);
LABEL_30:
          SEMOBJ::vUnlock((SEMOBJ *)&v21);
          return v9;
        }
        v7 = (unsigned __int8 *)Win32AllocPool(0x8000LL, 1886221383LL, v13, v14);
        v4 = 20;
        if ( !v7 )
          v7 = v6;
      }
    }
    v17 = (unsigned int *)Win32AllocPool(0x20000LL, 1886221383LL, v13, v14);
    v19 = v17;
    if ( v17 )
    {
      inv_cmap(v4, a2, v18, v17, v7);
      Win32FreePool(v19);
      v3 = 1;
      if ( v7 != v6 )
      {
        memmove(v6, v7, 0x8000uLL);
        *(_QWORD *)(v20 + 19928) = v7;
      }
    }
    else if ( v7 != v6 )
    {
      Win32FreePool(v7);
    }
    v9 = v3;
    goto LABEL_30;
  }
  switch ( a3 )
  {
    case 2:
      return MakeITableMono((unsigned __int8 *)a1);
    case 16:
      return MakeITableVGA((unsigned __int8 *)a1);
    case 20:
      MakeITableVGA((unsigned __int8 *)a1);
      v9 = 1;
      v10 = 0x8000LL;
      do
      {
        if ( *v6 >= 8u )
          *v6 -= 16;
        ++v6;
        --v10;
      }
      while ( v10 );
      return v9;
    case 256:
      return MakeITable256((unsigned __int8 *)a1);
    default:
      return 0LL;
  }
}
