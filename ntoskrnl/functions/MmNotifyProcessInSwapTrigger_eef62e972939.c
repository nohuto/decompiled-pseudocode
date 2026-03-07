char __fastcall MmNotifyProcessInSwapTrigger(__int64 a1)
{
  char result; // al
  __int64 v2; // r9
  __int64 v3; // r9
  int v4; // ecx
  int v5; // r8d
  int v6; // r10d
  int v7; // [rsp+20h] [rbp-39h]
  int v8; // [rsp+28h] [rbp-31h]
  int v9; // [rsp+40h] [rbp-19h] BYREF
  __int64 v10; // [rsp+48h] [rbp-11h] BYREF
  __int64 v11[4]; // [rsp+50h] [rbp-9h] BYREF
  _BYTE v12[16]; // [rsp+70h] [rbp+17h] BYREF
  int *v13; // [rsp+80h] [rbp+27h]
  int v14; // [rsp+88h] [rbp+2Fh]
  int v15; // [rsp+8Ch] [rbp+33h]
  __int64 *v16; // [rsp+90h] [rbp+37h]
  int v17; // [rsp+98h] [rbp+3Fh]
  int v18; // [rsp+9Ch] [rbp+43h]

  result = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( result == 64 && *(_QWORD *)&qword_140C69568 && **(_DWORD **)&qword_140C69568 > 5u )
  {
    result = tlgKeywordOn(*(_QWORD *)&qword_140C69568, 0x400000000008LL);
    if ( result )
    {
      tlgCreate1Sz_char(v12, v2 + 1448);
      v4 = *(_DWORD *)(v3 + 1088);
      v15 = 0;
      v18 = 0;
      v13 = &v9;
      v16 = &v10;
      v9 = v4;
      v14 = 4;
      v10 = 0x1000000LL;
      v17 = 8;
      return tlgWriteEx_EtwWriteEx(v6, (int)&word_140037E52, v5, 1, v7, v8, 5u, (__int64)v11);
    }
  }
  return result;
}
