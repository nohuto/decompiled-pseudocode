__int64 __fastcall IommuDeviceQueryInformation(_BYTE *a1, unsigned int a2, int *a3, __int64 a4)
{
  int v4; // r10d
  __int64 result; // rax

  v4 = 0;
  result = 0LL;
  if ( a2 >= 3 )
  {
    v4 = 3;
    *(_WORD *)a4 = 0;
    *(_BYTE *)(a4 + 2) = 0;
    *(_BYTE *)a4 = a1[266];
    *(_BYTE *)(a4 + 1) = a1[265];
    *(_BYTE *)(a4 + 2) = a1[264];
  }
  else
  {
    result = 3221225507LL;
  }
  *a3 = v4;
  return result;
}
