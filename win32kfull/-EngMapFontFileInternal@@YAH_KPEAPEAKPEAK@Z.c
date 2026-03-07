__int64 __fastcall EngMapFontFileInternal(__int64 a1, unsigned int **a2, unsigned int *a3)
{
  struct Gre::Base::SESSION_GLOBALS *v5; // r15
  unsigned int v6; // edi
  int v7; // ebp
  unsigned int **v8; // r12
  const WCHAR **v9; // r14
  void *v10; // rcx
  const WCHAR *v11; // rcx
  unsigned int v12; // esi
  PVOID v14[17]; // [rsp+20h] [rbp-88h] BYREF
  ULONG_PTR ViewSize; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int **v16; // [rsp+B8h] [rbp+10h]

  v16 = a2;
  v5 = Gre::Base::Globals((Gre::Base *)a1);
  memset_0(v14, 0, 0x50uLL);
  v6 = 1;
  v7 = 1;
  GreAcquireFastMutex(*((_QWORD *)v5 + 18));
  v8 = (unsigned int **)(a1 + 8);
  if ( *(_QWORD *)(a1 + 8) )
  {
    ++*(_DWORD *)(a1 + 96);
    v7 = 0;
    v9 = (const WCHAR **)(a1 + 80);
  }
  else
  {
    v9 = (const WCHAR **)(a1 + 80);
    if ( *(_QWORD *)(a1 + 80) )
    {
      v10 = *(void **)(a1 + 32);
      if ( v10 )
      {
        ViewSize = 0LL;
        if ( MmMapViewInSessionSpace(v10, (PVOID *)(a1 + 8), &ViewSize) < 0 )
          v6 = 0;
        else
          *(_DWORD *)(a1 + 96) = 1;
        v7 = 0;
      }
    }
  }
  GreReleaseFastMutex(*((_QWORD *)v5 + 18));
  if ( v7 )
  {
    v11 = *v9;
    LODWORD(ViewSize) = 0;
    if ( !(unsigned int)bMapFile(v11) )
      return 0;
    GreAcquireFastMutex(*((_QWORD *)v5 + 18));
    ++*(_DWORD *)(a1 + 96);
    if ( *v8 )
    {
      v12 = 0;
    }
    else
    {
      v12 = bMapRoutine(a1, (__int64)v14, 0, ViewSize);
      v6 = v12;
    }
    GreReleaseFastMutex(*((_QWORD *)v5 + 18));
    if ( !v12 )
      vUnmapFile(v14);
  }
  if ( v6 )
  {
    if ( v16 )
      *v16 = *v8;
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 24);
  }
  return v6;
}
