NTSTATUS __fastcall TraceDxgkPatchLocationList(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // r10d
  __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // [rsp+28h] [rbp-D8h]
  _BYTE v18[256]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v19[256]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v20[256]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v21[256]; // [rsp+380h] [rbp+280h] BYREF
  _DWORD v22[64]; // [rsp+480h] [rbp+380h] BYREF
  _BYTE v23[256]; // [rsp+580h] [rbp+480h] BYREF
  _DWORD v24[64]; // [rsp+680h] [rbp+580h] BYREF

  result = (unsigned int)memset(v22, 0, sizeof(v22));
  v11 = 0;
  do
  {
    v12 = 0;
    v13 = a3 - v11;
    if ( (unsigned int)v13 >= 0x40 )
    {
      v13 = 64LL;
LABEL_6:
      v14 = 0LL;
      do
      {
        v15 = v12 + v11;
        ++v12;
        v9 = 3 * v15;
        v24[v14 / 4] = *(_DWORD *)(a4 + 24 * v15);
        v14 += 4LL;
        v22[v14 / 4 + 63] = *(_DWORD *)(a4 + 24 * v15 + 4) & 0xFFFFFF;
        *(_DWORD *)&v20[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 8);
        *(_DWORD *)&v19[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 12);
        *(_DWORD *)&v18[v14 + 252] = *(_DWORD *)(a4 + 24 * v15 + 16);
        result = *(_DWORD *)(a4 + 24 * v15 + 20);
        *(_DWORD *)&v18[v14 - 4] = result;
      }
      while ( v12 < (unsigned int)v13 );
      goto LABEL_8;
    }
    if ( (_DWORD)v13 )
      goto LABEL_6;
LABEL_8:
    v11 += v13;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      LODWORD(v16) = v13;
      result = McTemplateK0ppqQR2QR2QR2QR2QR2QR2QR2_EtwWriteTransfer(
                 v10,
                 v9,
                 v13,
                 a1,
                 a2,
                 v16,
                 v24,
                 v23,
                 v22,
                 v21,
                 v20,
                 v19,
                 v18);
    }
  }
  while ( v11 < a3 );
  return result;
}
