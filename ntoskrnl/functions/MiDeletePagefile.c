void __fastcall MiDeletePagefile(char *P, int a2)
{
  __int64 i; // rsi
  void *v5; // rcx
  struct _PRIVILEGE_SET *v6; // rcx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  int v10; // ebp
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rdi
  char v14; // al
  void *v15; // rcx
  void *v16; // rcx
  void *v17; // rcx
  void *v18; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)P + 18); i = (unsigned int)(i + 1) )
    MiFreeModWriterEntry(*(_QWORD **)(*((_QWORD *)P + 8) + 8 * i), 0);
  v5 = (void *)*((_QWORD *)P + 8);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = (struct _PRIVILEGE_SET *)*((_QWORD *)P + 14);
  if ( v6 )
    CmSiFreeMemory(v6);
  v7 = *((_QWORD *)P + 27);
  if ( v7 )
    MiReleasePageHash(v7, *((_DWORD *)P + 2));
  MiFreePageFileHashPfns((union _SLIST_HEADER *)P);
  if ( _bittest16((const signed __int16 *)P + 102, 8u) )
    MiUpdatePageFileList((__int64)P, 0);
  if ( _bittest16((const signed __int16 *)P + 102, 0xBu) )
  {
    v8 = (unsigned __int64)(P + 256);
    v9 = *((_QWORD *)P + 32);
    if ( (P[264] & 1) != 0 && v9 )
      v9 ^= v8;
    v10 = P[264] & 1;
    if ( v9 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 )
          break;
        v12 = (_QWORD *)(v9 + 8);
        v11 = *(_QWORD *)(v9 + 8);
        if ( v11 )
        {
LABEL_19:
          if ( v10 )
            v9 ^= v11;
          else
            v9 = v11;
          *v12 = 0LL;
        }
        else
        {
          v13 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v10 && v13 )
            v13 ^= v9;
          MiDeletePageFileMemoryExtents((PVOID)v9);
          if ( !v13 )
            goto LABEL_28;
          v9 = v13;
        }
      }
      v12 = (_QWORD *)v9;
      goto LABEL_19;
    }
LABEL_28:
    v14 = P[264];
    *(_QWORD *)v8 = 0LL;
    *((_QWORD *)P + 33) = 0LL;
    if ( (v14 & 1) != 0 )
      P[264] = 1;
  }
  if ( _bittest16((const signed __int16 *)P + 102, 9u) )
    PiPagePathSetState(*((struct _FILE_OBJECT **)P + 7), 0);
  v15 = (void *)*((_QWORD *)P + 28);
  if ( v15 )
    ObCloseHandle(v15, 0);
  v16 = (void *)*((_QWORD *)P + 7);
  if ( v16 )
    ObfDereferenceObject(v16);
  v17 = (void *)*((_QWORD *)P + 13);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
  v18 = (void *)*((_QWORD *)P + 24);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( a2 )
    ExFreePoolWithTag(P, 0);
}
