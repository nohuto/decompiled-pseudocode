__int64 __fastcall sub_1400A8E20(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        char a9,
        __int64 a10)
{
  __int64 v10; // r12
  unsigned int v11; // r13d
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  int v14; // eax
  const wchar_t *v15; // r11
  __int64 v16; // r11
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r10
  const wchar_t *v23; // rcx
  const wchar_t *v24; // r9
  const wchar_t *v25; // rdx
  unsigned __int16 v26; // si
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v31; // [rsp+20h] [rbp-B8h]
  __int64 v32; // [rsp+38h] [rbp-A0h]

  v10 = (__int64)a6;
  v11 = a3;
  v12 = (unsigned __int64)a3 >> 16;
  v13 = -1LL;
  v14 = *((_DWORD *)&DeviceObject->Timer + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v15 = L"NULL";
  if ( !_bittest(&v14, ((_BYTE)a3 - 1) & 0x1F) )
    goto LABEL_27;
  v16 = 10 * v12;
  if ( *((_BYTE *)&DeviceObject->Timer + 80 * v12 + 1) < a2 )
  {
    v15 = L"NULL";
LABEL_27:
    v26 = a4;
    goto LABEL_28;
  }
  if ( a10 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(a10 + 2 * v17) );
  }
  if ( a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a8[v18] );
  }
  if ( a7 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a7[v19] );
    v20 = 2 * v19 + 2;
  }
  else
  {
    v20 = 10LL;
  }
  if ( a6 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( a6[v21] );
    v22 = 2 * v21 + 2;
  }
  else
  {
    v22 = 10LL;
  }
  v23 = L"NULL";
  v24 = L"NULL";
  v25 = L"NULL";
  if ( a8 )
    v24 = a8;
  if ( a7 )
    v25 = a7;
  if ( a6 )
    v23 = a6;
  v32 = v20;
  v26 = a4;
  qword_1400DF3E8(*((_QWORD *)&DeviceObject->AttachedDevice + v16), 43LL, a5, a4, v23, v22, v25, v32, v24);
  v10 = (__int64)a6;
  v15 = L"NULL";
  v11 = a3;
LABEL_28:
  if ( a10 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(a10 + 2 * v27) );
  }
  if ( a8 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a8[v28] );
  }
  if ( a7 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a7[v29] );
  }
  if ( v10 )
  {
    do
      ++v13;
    while ( *(_WORD *)(v10 + 2 * v13) );
  }
  if ( v10 )
    v15 = (const wchar_t *)v10;
  LOWORD(v31) = v26;
  return WppAutoLogTrace(a1, a2, v11, a5, v31, (__int64)v15);
}
