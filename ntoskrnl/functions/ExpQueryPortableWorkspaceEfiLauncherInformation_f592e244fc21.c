__int64 __fastcall ExpQueryPortableWorkspaceEfiLauncherInformation(bool *a1, int a2, _DWORD *a3)
{
  unsigned int *v5; // rsi
  _DWORD *v6; // rdi
  int v7; // ebx
  int v9; // eax
  bool v10; // al
  __int64 Pool2; // rax
  int BootEntryOrder; // eax
  __int64 v13; // rax
  unsigned int *v14; // r8
  unsigned int *i; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned int v18; // [rsp+28h] [rbp-40h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+38h] [rbp-30h]
  unsigned int v21; // [rsp+88h] [rbp+20h] BYREF

  v21 = 0;
  v18 = 0;
  v5 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0LL;
  if ( dword_140C316F0 != 2 )
  {
    v7 = -1073741821;
    goto LABEL_3;
  }
  if ( a2 != 1 )
  {
    *a3 = 1;
    v7 = -1073741820;
    goto LABEL_3;
  }
  v9 = ZwEnumerateBootEntries(0LL, (__int64)&v21);
  v7 = v9;
  if ( v9 < 0 )
  {
    if ( v9 != -1073741789 )
      goto LABEL_3;
    Pool2 = ExAllocatePool2(257LL, v21, 1868983881LL);
    v5 = (unsigned int *)Pool2;
    v19 = Pool2;
    if ( !Pool2 )
      goto LABEL_14;
    v7 = ZwEnumerateBootEntries(Pool2, (__int64)&v21);
    if ( v7 < 0 )
      goto LABEL_3;
    BootEntryOrder = ZwQueryBootEntryOrder(0LL, (__int64)&v18);
    v7 = BootEntryOrder;
    if ( BootEntryOrder >= 0 )
      goto LABEL_11;
    if ( BootEntryOrder != -1073741789 )
      goto LABEL_3;
    v13 = ExAllocatePool2(257LL, 4LL * v18, 1868983881LL);
    v6 = (_DWORD *)v13;
    v20 = v13;
    if ( !v13 )
    {
LABEL_14:
      v7 = -1073741670;
      goto LABEL_3;
    }
    v7 = ZwQueryBootEntryOrder(v13, (__int64)&v18);
    if ( v7 < 0 )
      goto LABEL_3;
    v14 = 0LL;
    for ( i = v5; ; i = (unsigned int *)((char *)i + v17) )
    {
      if ( i[7] == 16 )
      {
        v16 = *((_QWORD *)i + 4) - PORTABLE_WORKSPACE_LAUNCHER_EFI_ENTRY_ID;
        if ( !v16 )
          v16 = *((_QWORD *)i + 5) - 0x1536958043F38A81LL;
        if ( !v16 )
          break;
      }
      v17 = *i;
      if ( !(_DWORD)v17 )
        goto LABEL_27;
    }
    v14 = i + 1;
LABEL_27:
    if ( v14 )
    {
      v10 = v14[2] == *v6;
      goto LABEL_29;
    }
  }
LABEL_11:
  v10 = 0;
LABEL_29:
  *a1 = v10;
  *a3 = 1;
  v7 = 0;
LABEL_3:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6F666E49u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6F666E49u);
  return (unsigned int)v7;
}
