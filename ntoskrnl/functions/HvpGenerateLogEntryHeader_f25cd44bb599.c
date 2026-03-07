__int64 __fastcall HvpGenerateLogEntryHeader(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        int a6,
        int a7,
        char a8)
{
  _DWORD *v8; // r10
  int v9; // ebx
  int v11; // esi
  __int64 v12; // r11
  unsigned int v13; // edi
  bool v14; // zf
  __int64 result; // rax
  _DWORD *v16; // r9
  __int64 v17; // rdx
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int128 v20; // xmm1
  int v21; // eax
  unsigned int v22; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+38h] [rbp-38h] BYREF
  int v24; // [rsp+3Ch] [rbp-34h]
  int v25; // [rsp+40h] [rbp-30h]
  int v26; // [rsp+44h] [rbp-2Ch]
  int v27; // [rsp+48h] [rbp-28h]
  int v28; // [rsp+4Ch] [rbp-24h]
  __int128 v29; // [rsp+50h] [rbp-20h]

  v8 = (_DWORD *)(a1 + 172);
  v9 = 0;
  v11 = a2;
  v12 = a1;
  v13 = *a5;
  v22 = *a5;
  if ( a8 )
  {
    v16 = *(_DWORD **)(a2 + 8);
    v17 = 4LL;
    v18 = *(_OWORD **)(a1 + 64);
    v19 = v16;
    do
    {
      *v19 = *v18;
      v19[1] = v18[1];
      v19[2] = v18[2];
      v19[3] = v18[3];
      v19[4] = v18[4];
      v19[5] = v18[5];
      v19[6] = v18[6];
      v19 += 8;
      v20 = v18[7];
      v18 += 8;
      *(v19 - 1) = v20;
      --v17;
    }
    while ( v17 );
    v16[1] = *v8;
    v16[2] = *v8;
    v16[7] = 6;
    v16[10] = *(_DWORD *)(v12 + 280);
    v16[11] = 1;
    v21 = HvpHeaderCheckSum(v16, 0LL, 128LL);
    *(_DWORD *)(a4 + 508) = v21;
    v22 = v13 + 512;
  }
  v29 = 0LL;
  v23 = 1162638920;
  v24 = a6;
  if ( a8 )
    v24 = a6 - 512;
  v26 = *v8;
  v14 = (*(_BYTE *)(*(_QWORD *)(v12 + 64) + 144LL) & 1) == 0;
  v27 = *(_DWORD *)(v12 + 280);
  if ( !v14 )
    v9 = 1;
  v28 = a7;
  v25 = v9;
  HvpCopyDataToOffsetArray((unsigned int)&v23, 40, v11, a4, a4, (__int64)&v22);
  result = v22;
  *a5 = v22;
  return result;
}
