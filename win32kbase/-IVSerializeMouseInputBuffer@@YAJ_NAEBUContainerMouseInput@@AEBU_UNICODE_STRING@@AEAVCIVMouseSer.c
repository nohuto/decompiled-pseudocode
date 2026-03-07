int __fastcall IVSerializeMouseInputBuffer(
        char a1,
        const struct ContainerMouseInput *a2,
        const struct _UNICODE_STRING *a3,
        struct CIVMouseSerializer *a4)
{
  __int64 v4; // rbx
  int v8; // eax
  int v9; // r10d
  int result; // eax

  v4 = *((_QWORD *)a4 + 2);
  v8 = 0;
  v9 = 0;
  *(_DWORD *)(v4 + 16) = 0;
  if ( a3->Length )
  {
    result = CIVSerializer::Serialize(a4, (struct _UNICODE_STRING *)v4, a3, 0);
    if ( result < 0 )
      return result;
    *(_DWORD *)(v4 + 16) |= 4u;
    v8 = *(_DWORD *)(v4 + 16);
    v9 = v8;
  }
  if ( a1 )
  {
    v9 = v8 | 2;
    *(_DWORD *)(v4 + 16) = v8 | 2;
    *(_QWORD *)(v4 + 48) = *(_QWORD *)(*(_QWORD *)a2 + 40LL);
  }
  if ( *((_BYTE *)a2 + 20) )
  {
    *(_DWORD *)(v4 + 36) = *((_DWORD *)a2 + 3);
    *(_DWORD *)(v4 + 40) = *((_DWORD *)a2 + 4);
    *(_DWORD *)(v4 + 16) = v9 | 1;
  }
  *(_DWORD *)(v4 + 32) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(v4 + 24) = *(_QWORD *)a2;
  return CIVMouseSerializer::Serialize(
           a4,
           (struct _IVMouseInputData **)(v4 + 24),
           *(const struct ContainerMouseInputData **)a2,
           *((unsigned int *)a2 + 2),
           0);
}
