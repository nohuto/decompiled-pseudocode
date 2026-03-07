__int64 __fastcall CmpOpenHiveFiles(
        const UNICODE_STRING *a1,
        int a2,
        unsigned int a3,
        int *a4,
        _BYTE *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  int v10; // ecx
  unsigned int v11; // edx
  int v12; // r15d
  int v13; // eax
  unsigned int FileSecurityDescriptor; // r14d
  int v16; // r15d
  int v17; // eax
  int v18; // r8d
  int v19; // [rsp+28h] [rbp-71h]
  int v20; // [rsp+5Ch] [rbp-3Dh]
  int v21; // [rsp+70h] [rbp-29h]
  char v23; // [rsp+F0h] [rbp+57h]

  v23 = 1;
  v10 = (a3 >> 19) & 0x40;
  v21 = a2 & 0x8000;
  if ( (a2 & 0x8000) != 0 )
  {
    v23 = 0;
    v11 = v10 | ((a2 & 0x40000 | 0x10000u) >> 11);
  }
  else
  {
    v11 = v10 | 2;
    if ( (a3 & 0x40000000) == 0 )
      v11 = (a3 >> 19) & 0x40;
    if ( *a5 )
      v11 |= 1u;
  }
  v12 = v11 | 0x100;
  if ( (a3 & 0x10) == 0 )
    v12 = v11;
  v20 = v12;
  v13 = CmpOpenHiveFile(a1, v12, a7, a8, 0LL, 0LL, a9);
  FileSecurityDescriptor = v13;
  if ( v13 >= 0 )
  {
    if ( !v21 )
    {
      FileSecurityDescriptor = CmpQueryFileSecurityDescriptor(0LL);
      if ( (FileSecurityDescriptor & 0x80000000) != 0 )
      {
        SetFailureLocation(a9, 0, 45, FileSecurityDescriptor, 32);
        return FileSecurityDescriptor;
      }
    }
    if ( (a3 & 0x10000000) != 0 )
    {
      v16 = 1;
      v17 = CmpOpenHiveFile(a1, v20, a7, 0LL, 0LL, 0LL, a9);
      if ( v17 < 0 )
      {
        if ( v23 )
        {
          v19 = 48;
          v18 = 45;
LABEL_32:
          FileSecurityDescriptor = v17;
          SetFailureLocation(a9, 0, v18, v17, v19);
          return FileSecurityDescriptor;
        }
        goto LABEL_27;
      }
    }
    else
    {
      v16 = 2;
      v17 = CmpOpenHiveFile(a1, v20, a7, 0LL, 0LL, 0LL, a9);
      if ( v17 < 0 && v23 )
      {
        v19 = 64;
LABEL_31:
        v18 = 28;
        goto LABEL_32;
      }
      v17 = CmpOpenHiveFile(a1, v20, a7, 0LL, 0LL, 0LL, a9);
      if ( v17 < 0 )
      {
        if ( v23 )
        {
          v19 = 80;
          goto LABEL_31;
        }
        goto LABEL_27;
      }
    }
    if ( v23 )
    {
LABEL_14:
      *a6 = 0LL;
      a6[1] = 0LL;
      a6[3] = 0LL;
      a6[2] = 0LL;
      *a5 = 0;
      *a4 = v16;
      return FileSecurityDescriptor;
    }
LABEL_27:
    v16 = 0;
    goto LABEL_14;
  }
  SetFailureLocation(a9, 0, 45, v13, 16);
  return FileSecurityDescriptor;
}
