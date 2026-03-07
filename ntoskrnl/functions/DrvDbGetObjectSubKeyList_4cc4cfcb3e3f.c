__int64 __fastcall DrvDbGetObjectSubKeyList(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        unsigned int a6,
        unsigned int *a7,
        int a8)
{
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // eax
  _DWORD v16[130]; // [rsp+20h] [rbp-288h] BYREF
  __int64 v17; // [rsp+228h] [rbp-80h]
  __int64 v18; // [rsp+230h] [rbp-78h]
  _WORD *v19; // [rsp+238h] [rbp-70h]
  unsigned int v20; // [rsp+240h] [rbp-68h]
  unsigned int v21; // [rsp+244h] [rbp-64h]

  *a7 = 0;
  if ( a5 && a6 )
    *a5 = 0;
  memset(&v16[1], 0, 0x204uLL);
  v16[0] = a8;
  v17 = a3;
  v18 = a4;
  v19 = a5;
  v20 = a6;
  v21 = 0;
  v12 = PnpCtxRegEnumKeyWithCallback(a1, a2, (__int64)DrvDbGetObjectSubKeyCallback, (__int64)v16);
  if ( v12 >= 0 )
  {
    v13 = v21;
    *a7 = v21;
    if ( v13 )
    {
      v14 = v13 + 1;
      *a7 = v14;
      if ( a5 && v14 <= a6 )
        a5[v14 - 1] = 0;
      else
        return (unsigned int)-1073741789;
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v12;
}
