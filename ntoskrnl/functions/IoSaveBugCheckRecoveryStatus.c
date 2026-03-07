LONG __fastcall IoSaveBugCheckRecoveryStatus(int *a1)
{
  int v2; // ecx
  int v3; // r9d
  int v4; // ecx
  int v5; // r8d
  _DWORD *v6; // rcx
  _OWORD v8[2]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v9; // [rsp+40h] [rbp-39h]
  _OWORD v10[2]; // [rsp+48h] [rbp-31h] BYREF
  __int16 v11; // [rsp+68h] [rbp-11h]
  char v12; // [rsp+6Ah] [rbp-Fh]
  _OWORD v13[2]; // [rsp+70h] [rbp-9h] BYREF
  int v14; // [rsp+90h] [rbp+17h]
  char v15; // [rsp+94h] [rbp+1Bh]
  _OWORD Src[2]; // [rsp+98h] [rbp+1Fh] BYREF
  char v17; // [rsp+B8h] [rbp+3Fh]

  v11 = 0;
  v12 = 0;
  v2 = *a1;
  v3 = v2 | 0x2A00;
  v9 = 0LL;
  v14 = 0;
  v15 = 0;
  v17 = 0;
  memset(v10, 0, sizeof(v10));
  memset(v8, 0, sizeof(v8));
  memset(v13, 0, sizeof(v13));
  memset(Src, 0, sizeof(Src));
  if ( v2 )
  {
    v4 = v2 - 1;
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        v6 = v13;
        v14 = MEMORY[0xFFFFF780000002C4];
        v5 = 5;
        v15 = *((_BYTE *)a1 + 4);
      }
      else
      {
        v5 = 3;
        v11 = *((_WORD *)a1 + 2);
        v6 = v10;
        v12 = *((_BYTE *)a1 + 6);
      }
    }
    else
    {
      v6 = v8;
      LOBYTE(v9) = *((_BYTE *)a1 + 4);
      v5 = 8;
      BYTE4(v9) = *((_BYTE *)a1 + 8);
      *(_WORD *)((char *)&v9 + 5) = 0;
      HIBYTE(v9) = 0;
      BYTE1(v9) = 1;
      WORD1(v9) = 1;
    }
  }
  else
  {
    v6 = Src;
    v17 = *((_BYTE *)a1 + 4);
    v5 = 1;
  }
  v6[3] = 0;
  v6[2] = v5 + 32;
  *v6 = 1733060695;
  v6[1] = 1;
  v6[5] = -2147483606;
  v6[4] = v3;
  v6[6] = 8;
  v6[7] = v5;
  return WheaLogInternalEvent(v6);
}
