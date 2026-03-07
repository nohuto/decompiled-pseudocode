__int64 __fastcall xxxGetDummyText(struct tagWINDOWSTATION *a1, int a2, struct tagGETCLIPBDATA *a3)
{
  int v5; // r15d
  int v6; // edx
  int v7; // edx
  unsigned int v8; // edi
  unsigned int v9; // esi
  struct tagCLIP *ClipFormat; // rax
  __int64 v11; // rbx
  struct tagWINDOWSTATION *v12; // rcx
  unsigned int v13; // edx
  struct tagCLIP *v14; // rax
  struct tagCLIP *v15; // rax
  __int64 v16; // rdi
  struct tagCLIP *v17; // rax

  v5 = 1;
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 6;
    if ( !v7 )
    {
      v8 = 13;
      v9 = 1;
      goto LABEL_8;
    }
    if ( v7 != 6 )
      return 0LL;
    v8 = 1;
  }
  else
  {
    v8 = 13;
  }
  v9 = 7;
LABEL_8:
  ClipFormat = FindClipFormat(a1, v8, 1);
  v11 = 0LL;
  if ( !ClipFormat )
    return 0LL;
  v12 = a1;
  if ( *((_QWORD *)ClipFormat + 1) == 1LL )
  {
    v14 = FindClipFormat(a1, v9, 1);
    if ( v14 && *((_QWORD *)v14 + 1) != 1LL )
    {
      v5 = 0;
      v13 = v9;
      v12 = a1;
      goto LABEL_14;
    }
    return 0LL;
  }
  v13 = v8;
LABEL_14:
  if ( !xxxGetClipboardData(v12, v13, a3) )
    return 0LL;
  if ( !v5 )
    v8 = v9;
  v15 = FindClipFormat(a1, v8, 1);
  if ( !v15 )
    return 0LL;
  *(_DWORD *)a3 = *(_DWORD *)v15;
  v16 = *((_QWORD *)v15 + 1);
  v17 = FindClipFormat(a1, 0x10u, 1);
  if ( v17 )
    v11 = *((_QWORD *)v17 + 1);
  *((_QWORD *)a3 + 1) = v11;
  return v16;
}
