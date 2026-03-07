void __fastcall GetMonitorDpiInfo(HDEV a1, char a2, struct tagRECT *a3, struct _DPI_INFORMATION *a4)
{
  int v8; // ecx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _OWORD v14[6]; // [rsp+20h] [rbp-60h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( (int)DrvGetCurrentDpiInfoFromHDev(a1, v14) < 0 )
  {
    v8 = a3->right - a3->left;
    *(_QWORD *)&v14[0] = 0x6400000064LL;
    *((_QWORD *)&v14[0] + 1) = 0x6400000064LL;
    LODWORD(v14[2]) = v8;
    DWORD1(v14[2]) = a3->bottom - a3->top;
    HIDWORD(v14[5]) ^= (BYTE12(v14[5]) ^ (unsigned __int8)(32 * a2)) & 0x20;
    DWORD2(v14[5]) = 1;
  }
  v9 = v14[1];
  *(_OWORD *)a4 = v14[0];
  v10 = v14[2];
  *((_OWORD *)a4 + 1) = v9;
  v11 = v14[3];
  *((_OWORD *)a4 + 2) = v10;
  v12 = v14[4];
  *((_OWORD *)a4 + 3) = v11;
  v13 = v14[5];
  *((_OWORD *)a4 + 4) = v12;
  *((_OWORD *)a4 + 5) = v13;
}
