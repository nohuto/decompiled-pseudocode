void *__fastcall bMapFileRetainHandle(const unsigned __int16 *a1, struct _FILEVIEW *a2, int a3, int *a4)
{
  Gre::Base *v6; // rcx
  void *v7; // rsi
  unsigned int v8; // ebx
  void *result; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  PVOID MappedBase[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v15; // [rsp+40h] [rbp-40h]
  PVOID Section[2]; // [rsp+50h] [rbp-30h]
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int128 v18; // [rsp+70h] [rbp-10h]
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp+38h] BYREF

  ViewSize = (ULONG_PTR)a4;
  memset_0(MappedBase, 0, 0x50uLL);
  Gre::Base::Globals(v6);
  v7 = (void *)*((_QWORD *)a2 + 6);
  v8 = 0;
  if ( v7 || (result = hGetHandleFromFilePath(L"\\SystemRoot\\system32\\FNTCACHE.DAT", a3 != 0), (v7 = result) != 0LL) )
  {
    if ( (unsigned int)bCreateSectionFromHandle(
                         v7,
                         L"\\SystemRoot\\system32\\FNTCACHE.DAT",
                         (struct _FILEVIEW *)MappedBase,
                         a3,
                         0LL,
                         0) )
    {
      ViewSize = 0LL;
      if ( MmMapViewInSessionSpace(Section[0], &MappedBase[1], &ViewSize) < 0 )
      {
        vUnreferenceFileviewSection((struct _FILEVIEW *)MappedBase);
      }
      else
      {
        v8 = 1;
        v10 = v15;
        *(_OWORD *)a2 = *(_OWORD *)MappedBase;
        v11 = *(_OWORD *)Section;
        *((_OWORD *)a2 + 1) = v10;
        v12 = v17;
        *((_OWORD *)a2 + 2) = v11;
        v13 = v18;
        *((_OWORD *)a2 + 3) = v12;
        *((_OWORD *)a2 + 4) = v13;
      }
    }
    else if ( !*((_QWORD *)a2 + 6) )
    {
      ZwClose(v7);
    }
    return (void *)v8;
  }
  return result;
}
