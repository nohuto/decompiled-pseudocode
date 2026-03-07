__int64 __fastcall EditionHandleRawInput(
        int a1,
        int a2,
        unsigned __int8 a3,
        char a4,
        int a5,
        __int64 *a6,
        __int16 a7,
        __int16 a8,
        int a9,
        __int64 a10)
{
  __int64 *v10; // r10
  unsigned int v11; // ebx
  __int16 v13; // cx
  _DWORD v14[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v15; // [rsp+28h] [rbp-28h]
  __int16 v16; // [rsp+2Ah] [rbp-26h]
  int v17; // [rsp+2Ch] [rbp-24h]
  BOOL v18; // [rsp+30h] [rbp-20h]
  int v19; // [rsp+34h] [rbp-1Ch]
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  int v21; // [rsp+40h] [rbp-10h]

  v10 = a6;
  v11 = 0;
  v16 = 0;
  v14[0] = a1;
  v17 = a2;
  v18 = a4 == 0;
  v14[1] = a5;
  v15 = a3;
  v20 = 0LL;
  v21 = 0;
  if ( a6 )
  {
    v19 = 0;
  }
  else
  {
    WORD1(v20) = a7;
    v19 = 1;
    if ( (a8 & 0x100) != 0 )
      v13 = 2;
    else
      v13 = 0;
    v10 = &v20;
    WORD2(v20) = (a9 != 0) | v13;
  }
  LOBYTE(v11) = (unsigned int)HandleRawInput(a10, v10, v14) == 1;
  return v11;
}
