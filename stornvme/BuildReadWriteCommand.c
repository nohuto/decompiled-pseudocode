__int64 __fastcall BuildReadWriteCommand(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        unsigned int a4,
        _BYTE *a5,
        int a6)
{
  __int64 v9; // r10
  unsigned __int8 v10; // dl
  _BYTE *v11; // rbx
  __int64 v12; // rsi
  __int16 StreamId; // ax
  unsigned int v14; // ecx
  _DWORD *v15; // rax
  unsigned int v16; // r8d
  __int64 LbaFromCdb; // rax
  __int16 v18; // r8
  __int64 result; // rax
  int v20; // ecx
  _DWORD *v21; // [rsp+40h] [rbp+8h] BYREF

  v21 = 0LL;
  GetSrbDataBuffer(a2, &v21);
  if ( *(_BYTE *)(v9 + 2) == 40 )
    v10 = *(_BYTE *)(*(unsigned int *)(v9 + 52) + v9 + 10);
  else
    v10 = *(_BYTE *)(v9 + 7);
  v11 = a5;
  v12 = v10;
  if ( *a3 == 40 )
    goto LABEL_10;
  if ( *a3 != 42 )
  {
    if ( *a3 != 136 )
    {
      if ( *a3 != 138 )
        goto LABEL_11;
      goto LABEL_8;
    }
LABEL_10:
    *a5 = 2;
    goto LABEL_11;
  }
LABEL_8:
  *a5 = 1;
  StreamId = GetStreamId(a1, v9, v10);
  if ( StreamId )
  {
    v14 = *((_DWORD *)v11 + 12) & 0xFF1FFFFF;
    *((_WORD *)v11 + 27) = StreamId;
    *((_DWORD *)v11 + 12) = v14 | 0x100000;
  }
LABEL_11:
  *(_DWORD *)v11 &= 0xFFFFFCFF;
  *((_DWORD *)v11 + 1) = a6;
  v15 = v21;
  *((_QWORD *)v11 + 2) = 0LL;
  v16 = *(_DWORD *)(*(_QWORD *)(a1 + 8 * v12 + 1952) + 52LL);
  LbaFromCdb = GetLbaFromCdb(a3, a4, (v16 + *v15 - 1) / v16 - 1);
  *((_DWORD *)v11 + 10) = LbaFromCdb;
  *((_WORD *)v11 + 24) = v18;
  *((_DWORD *)v11 + 12) &= 0xC3FFFFFF;
  *((_DWORD *)v11 + 11) = HIDWORD(LbaFromCdb);
  result = *((_DWORD *)v11 + 12) & 0x3FFFFFFF;
  v20 = result | ((a3[1] & 8) << 27);
  v11[52] = 0;
  *((_DWORD *)v11 + 12) = v20;
  *((_QWORD *)v11 + 7) = 0LL;
  return result;
}
