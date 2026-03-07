__int64 __fastcall CDataBlockReader::GetNextItemSafe(
        CDataBlockReader *this,
        unsigned int *a2,
        void **a3,
        unsigned int *a4)
{
  char *v4; // rdi
  void **v7; // r8
  unsigned int *v8; // r9
  unsigned int NextItemSafe; // r10d
  __int64 v10; // rdx
  int v12; // eax
  __int64 v13; // rdx

  v4 = (char *)this + 16;
  NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataBlockReader *)((char *)this + 16), a2, a3, a4);
  if ( NextItemSafe == 1 )
  {
    v10 = **((_QWORD **)this + 1);
    if ( v10 != *(_QWORD *)this )
    {
      *((_QWORD *)this + 1) = v10;
      v12 = *(_DWORD *)(v10 + 20);
      v13 = v10 + 24;
      *(_QWORD *)v4 = v13;
      *((_QWORD *)v4 + 1) = v13;
      *((_DWORD *)v4 + 4) = v12;
      NextItemSafe = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)v4, a2, v7, v8);
      if ( NextItemSafe == 1 && **((_QWORD **)this + 1) != *(_QWORD *)this )
        return (unsigned int)-2147467259;
    }
  }
  return NextItemSafe;
}
