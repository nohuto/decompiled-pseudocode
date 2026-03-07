__int64 __fastcall CDataBlockReader::GetFirstItemSafe(__int64 **this, unsigned int *a2, void **a3, unsigned int *a4)
{
  __int64 v6; // r8
  char *v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  __int64 result; // rax

  v6 = **this;
  if ( *this == (__int64 *)v6 )
    return 1LL;
  this[1] = (__int64 *)v6;
  v7 = (char *)(this + 2);
  v8 = *(_DWORD *)(v6 + 20);
  v9 = v6 + 24;
  *(_QWORD *)v7 = v9;
  *((_QWORD *)v7 + 1) = v9;
  *((_DWORD *)v7 + 4) = v8;
  result = CDataStreamReader::GetNextItemSafe((CDataStreamReader *)v7, a2, a3, a4);
  if ( (_DWORD)result == 1 && (__int64 *)*this[1] != *this )
    return 2147500037LL;
  return result;
}
