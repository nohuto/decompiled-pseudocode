__int64 __fastcall RtlpCompressRvaList(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, unsigned __int32 *),
        __int64 (__fastcall *a4)(__int64, unsigned __int32 *),
        _DWORD *a5,
        _QWORD *a6,
        int *a7)
{
  _DWORD *v7; // rdi
  unsigned __int32 *v8; // r13
  unsigned int v9; // r15d
  int v11; // r12d
  _BYTE *v12; // rsi
  unsigned int v13; // ebp
  int v14; // eax
  int v15; // ebx
  __int64 v16; // r8
  int v17; // r10d
  unsigned int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 result; // rax
  unsigned __int32 v26[18]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int32 v28; // [rsp+80h] [rbp+18h] BYREF
  __int64 (__fastcall *v29)(__int64, unsigned __int32 *); // [rsp+88h] [rbp+20h]

  v29 = a4;
  v7 = a5;
  v8 = &v28;
  v9 = 0;
  v28 = 0;
  v11 = 0;
  if ( !a5 )
    v8 = 0LL;
  v12 = a5;
  v13 = 0;
  v14 = a3(a2, v8);
  v15 = v14;
  if ( !v14 )
  {
    v9 = -1073741811;
    goto LABEL_35;
  }
  if ( v7 )
  {
    v16 = v28;
    v12 = v7 + 1;
    *v7 = v14;
    RtlpSetRvaListRvaStateBits(a1, 0LL, v16);
  }
  v13 = 4;
  v17 = v15;
  v11 = 1;
LABEL_7:
  while ( v15 != v17 )
  {
    do
    {
LABEL_12:
      v20 = 0;
      v21 = v17 - v15;
      while ( 1 )
      {
        v22 = *((_DWORD *)RtlpRvaCompressionTableScales + v20);
        if ( v21 >= v22 )
          break;
        if ( ++v20 >= 4 )
          goto LABEL_7;
      }
      if ( v22 != 1 )
        v21 /= v22;
      if ( v21 >= 0x3F )
        v21 = 63;
      if ( v12 )
        *v12++ = v21 | ((_BYTE)v20 << 6);
      ++v13;
      v15 += v21 * v22;
    }
    while ( v15 != v17 );
    if ( v20 != 3 )
    {
      if ( v12 )
        *v12++ = -64;
      ++v13;
    }
  }
  v18 = v17;
  v19 = v29(a2, v8);
  v17 = v19;
  if ( !v19 )
    goto LABEL_34;
  if ( v19 > v18 )
  {
    if ( v12 )
    {
      v26[0] = v28;
      if ( v28 )
      {
        v23 = *(_DWORD *)(a1 + 8);
        if ( v23 > 1 )
        {
          v24 = 0;
          do
          {
            if ( _bittest((const signed __int32 *)v26, v24) )
              _bittestandset64(*(signed __int64 **)(a1 + 40), v11 * v23 + (unsigned __int64)v24);
            ++v24;
          }
          while ( v24 < *(_DWORD *)(a1 + 8) );
        }
      }
    }
    ++v11;
    goto LABEL_12;
  }
  v9 = -1073741701;
LABEL_34:
  v7 = a5;
LABEL_35:
  if ( !v7 )
    *a6 = v13;
  result = v9;
  if ( a7 )
    *a7 = v11;
  return result;
}
