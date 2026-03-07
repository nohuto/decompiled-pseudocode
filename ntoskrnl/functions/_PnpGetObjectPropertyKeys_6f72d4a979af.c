__int64 __fastcall PnpGetObjectPropertyKeys(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        __int64 a9)
{
  __int64 (__fastcall *v13)(__int64, __int64, _QWORD, __int64, int, _QWORD *); // rdi
  int v14; // eax
  unsigned int ObjectPropertyKeysWorker; // eax
  unsigned int v16; // ebx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // eax
  _QWORD v21[10]; // [rsp+58h] [rbp-39h] BYREF

  memset(v21, 0, sizeof(v21));
  v13 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, int, _QWORD *))(a1 + 488);
  v21[3] = 0LL;
  LODWORD(v21[8]) = 0;
  LOBYTE(v21[4]) = a6;
  v21[5] = a7;
  LODWORD(v21[6]) = a8;
  v21[7] = a9;
  v21[2] = a4;
  if ( v13 )
  {
    v14 = v13(a1, a2, a3, 6LL, 1, v21);
    if ( v14 == -1073741822 )
    {
      v13 = 0LL;
    }
    else
    {
      if ( v14 == -1073741536 )
        return LODWORD(v21[0]);
      if ( v14 )
        return (unsigned int)-1073741595;
    }
  }
  ObjectPropertyKeysWorker = PnpGetObjectPropertyKeysWorker(
                               a1,
                               a2,
                               a3,
                               v21[2],
                               v21[3],
                               v21[4],
                               v21[5],
                               v21[6],
                               v21[7],
                               v21[8]);
  v16 = ObjectPropertyKeysWorker;
  if ( !v13 )
    return v16;
  LODWORD(v21[0]) = ObjectPropertyKeysWorker;
  v18 = v13(a1, a2, a3, 6LL, 2, v21);
  v19 = v18;
  if ( v18 == -1073741822 )
    return v16;
  if ( v18 == -1073741536 )
    return LODWORD(v21[0]);
  v20 = v16;
  if ( v19 )
    return (unsigned int)-1073741595;
  return v20;
}
