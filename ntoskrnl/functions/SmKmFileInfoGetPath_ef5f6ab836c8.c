__int64 __fastcall SmKmFileInfoGetPath(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v4; // rdi
  BOOLEAN v6; // bp
  int NameStringMode; // ebx
  unsigned int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-248h] BYREF
  void *v11[66]; // [rsp+40h] [rbp-238h] BYREF

  v10[0] = 0;
  v4 = a3;
  memset(v11, 0, sizeof(v11));
  v6 = IoSetThreadHardErrorMode(0);
  NameStringMode = ObQueryNameStringMode(*(char **)(a1 + 8), (__int64)v11, 0x210u, v10, 0);
  if ( NameStringMode >= 0 )
  {
    memset(a2, 0, (unsigned int)v4);
    v8 = LOWORD(v11[0]);
    if ( LOWORD(v11[0]) >= (unsigned __int64)(v4 - 2) )
      v8 = v4 - 2;
    memmove(a2, v11[1], v8);
    NameStringMode = 0;
  }
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)NameStringMode;
}
