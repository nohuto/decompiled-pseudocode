__int64 __fastcall PnpGetGenericObjectList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v7; // edx
  int v8; // ecx
  _QWORD v10[3]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  *a7 = 0;
  if ( a6 )
    *a5 = 0;
  v10[1] = a4;
  v10[0] = CmContainerListGenericObjectCallback;
  v10[2] = a5;
  v11 = a6;
  v12 = 0;
  v7 = PnpCtxRegEnumKeyWithCallback(a1, a2, &PnpObjectListCallback, v10);
  if ( v7 >= 0 )
  {
    v8 = v12;
    *a7 = v12;
    if ( v8 )
    {
      *a7 = v8 + 1;
      if ( a5 && a6 >= v8 + 1 )
        a5[v8] = 0;
      else
        return (unsigned int)-1073741789;
    }
  }
  return (unsigned int)v7;
}
