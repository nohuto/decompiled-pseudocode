__int64 __fastcall DrvDbGetObjectDatabaseNodeName(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        unsigned int *a6)
{
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v11; // [rsp+20h] [rbp-48h]
  char v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle[2]; // [rsp+58h] [rbp-10h] BYREF

  Handle[0] = 0LL;
  v13 = 0LL;
  *a6 = 0;
  v12 = 0;
  v11 = 1;
  v7 = DrvDbOpenObjectRegKey(a1, 0LL, a2, a3, v11, v12, Handle, 0LL, &v13);
  if ( v7 >= 0 )
  {
    v8 = v13;
    v9 = *(unsigned __int16 *)(v13 + 16) + 2;
    *a6 = v9;
    if ( a4 && a5 >= v9 )
      memmove(a4, *(const void **)(v8 + 24), v9);
    else
      v7 = -1073741789;
  }
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v7;
}
