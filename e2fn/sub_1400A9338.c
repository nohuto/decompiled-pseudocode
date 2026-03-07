__int64 __fastcall sub_1400A9338(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        __int64 a9)
{
  __int64 v9; // r12
  unsigned int v10; // r13d
  unsigned __int64 v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  const wchar_t *v14; // r11
  __int64 v15; // r11
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r10
  const wchar_t *v22; // rcx
  const wchar_t *v23; // r8
  const wchar_t *v24; // rdx
  unsigned __int16 v25; // si
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v30; // [rsp+20h] [rbp-A8h]
  __int64 v31; // [rsp+38h] [rbp-90h]

  v9 = (__int64)a6;
  v10 = a3;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = -1LL;
  v13 = *((_DWORD *)&DeviceObject->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v14 = L"NULL";
  if ( !_bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) )
    goto LABEL_27;
  v15 = 10 * v11;
  if ( *((_BYTE *)&DeviceObject->Timer + 80 * v11 + 1) < a2 )
  {
    v14 = L"NULL";
LABEL_27:
    v25 = a4;
    goto LABEL_28;
  }
  if ( a9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)(a9 + 2 * v16) );
  }
  if ( a8 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a8[v17] );
  }
  if ( a7 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a7[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v19 = 10LL;
  }
  if ( a6 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a6[v20] );
    v21 = 2 * v20 + 2;
  }
  else
  {
    v21 = 10LL;
  }
  v22 = L"NULL";
  v23 = L"NULL";
  v24 = L"NULL";
  if ( a8 )
    v23 = a8;
  if ( a7 )
    v24 = a7;
  if ( a6 )
    v22 = a6;
  v31 = v19;
  v25 = a4;
  qword_1400DF3E8(*((_QWORD *)&DeviceObject->AttachedDevice + v15), 43LL, a5, a4, v22, v21, v24, v31, v23);
  v9 = (__int64)a6;
  v14 = L"NULL";
  v10 = a3;
LABEL_28:
  if ( a9 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( *(_WORD *)(a9 + 2 * v26) );
  }
  if ( a8 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a8[v27] );
  }
  if ( a7 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( a7[v28] );
  }
  if ( v9 )
  {
    do
      ++v12;
    while ( *(_WORD *)(v9 + 2 * v12) );
  }
  if ( v9 )
    v14 = (const wchar_t *)v9;
  LOWORD(v30) = v25;
  return WppAutoLogTrace(a1, a2, v10, a5, v30, (__int64)v14);
}
