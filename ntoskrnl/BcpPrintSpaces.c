__int64 __fastcall BcpPrintSpaces(__int64 *a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, _DWORD *a6)
{
  int v6; // ebx
  unsigned int v9; // edi
  __int64 result; // rax
  int v12; // ebp
  unsigned __int64 v13; // [rsp+40h] [rbp-38h]
  int v14; // [rsp+88h] [rbp+10h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF

  v6 = 0;
  v14 = 0;
  v15 = 0;
  v9 = a2;
  result = 0LL;
  if ( a2 >= a3 )
  {
LABEL_6:
    *a6 = v6;
  }
  else
  {
    v12 = a5;
    while ( 1 )
    {
      result = BgpDisplayCharacterEx(0x20u, a1, v9, a4, v12, v12, &v14, &v15, v13);
      if ( (int)result < 0 )
        break;
      v9 += v14;
      if ( v9 >= a3 )
      {
        v6 = v15;
        goto LABEL_6;
      }
    }
  }
  return result;
}
