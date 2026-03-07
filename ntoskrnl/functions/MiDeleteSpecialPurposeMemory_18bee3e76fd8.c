void __fastcall MiDeleteSpecialPurposeMemory(__int64 a1)
{
  PVOID *v1; // rdi
  void *v3; // rcx
  char *v4; // rbx
  PVOID *v5; // rax
  char *v6; // rdx
  __int64 v7; // rcx
  char **v8; // rax

  v1 = (PVOID *)(a1 + 16944);
  if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
  {
    while ( 1 )
    {
      v4 = (char *)*v1;
      if ( *v1 == v1 )
        break;
      if ( *((PVOID **)v4 + 1) != v1 || (v5 = *(PVOID **)v4, *(char **)(*(_QWORD *)v4 + 8LL) != v4) )
LABEL_15:
        __fastfail(3u);
      *v1 = v5;
      v6 = v4 + 72;
      v5[1] = v1;
      v7 = *((_QWORD *)v4 + 9);
      if ( v7 )
      {
        if ( *(char **)(v7 + 8) != v6 )
          goto LABEL_15;
        v8 = (char **)*((_QWORD *)v4 + 10);
        if ( *v8 != v6 )
          goto LABEL_15;
        *v8 = (char *)v7;
        *(_QWORD *)(v7 + 8) = v8;
      }
      ZwClose(*((HANDLE *)v4 + 7));
      ExFreePoolWithTag(v4, 0);
    }
  }
  else
  {
    if ( *v1 )
      ObfDereferenceObjectWithTag(*v1, 0x72536D4Du);
    v3 = *(void **)(a1 + 16952);
    if ( v3 )
      ZwClose(v3);
  }
}
