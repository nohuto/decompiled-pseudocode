__int64 __fastcall CmGetDeviceContainerMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  DEVPROPKEY **v7; // r8
  unsigned int v8; // r9d
  DEVPROPKEY *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // ecx

  v7 = &off_14000B160;
  *a7 = 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = *v7;
    if ( *v7 )
      break;
LABEL_8:
    ++v8;
    v7 += 2;
    if ( v8 >= 4 )
      return a6 < *a7 ? 0xC0000023 : 0;
  }
  if ( a5 )
  {
    v10 = *a7;
    if ( (unsigned int)v10 < a6 )
    {
      v11 = 5 * v10;
      *(_GUID *)(a5 + 4 * v11) = v9->fmtid;
      *(_DWORD *)(a5 + 4 * v11 + 16) = v9->pid;
    }
  }
  v12 = *a7 + 1;
  if ( v12 >= *a7 )
  {
    *a7 = v12;
    goto LABEL_8;
  }
  *a7 = 0;
  return 3221225621LL;
}
