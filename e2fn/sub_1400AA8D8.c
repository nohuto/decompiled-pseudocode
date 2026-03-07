__int64 __fastcall sub_1400AA8D8(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6,
        const wchar_t *a7,
        const wchar_t *a8,
        const char *a9)
{
  unsigned int v10; // r14d
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  int v13; // eax
  const wchar_t *v14; // r10
  __int64 v15; // r14
  __int64 v16; // r10
  __int64 v17; // r10
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r11
  const wchar_t *v24; // rcx
  const wchar_t *v25; // r8
  const char *v26; // r9
  const wchar_t *v27; // rdx
  unsigned __int16 v28; // di
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  int v33; // [rsp+20h] [rbp-A8h]
  __int64 v34; // [rsp+38h] [rbp-90h]
  __int64 v39; // [rsp+110h] [rbp+48h]

  v10 = a3;
  v11 = (unsigned __int64)a3 >> 16;
  v12 = -1LL;
  v13 = *((_DWORD *)&DeviceObject->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  v14 = L"NULL";
  if ( !_bittest(&v13, ((_BYTE)a3 - 1) & 0x1F) )
    goto LABEL_33;
  v15 = 10 * v11;
  if ( *((_BYTE *)&DeviceObject->Timer + 80 * v11 + 1) < a2 )
  {
    v10 = a3;
LABEL_33:
    v28 = a4;
    goto LABEL_34;
  }
  if ( a9 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a9[v16] );
    v17 = v16 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( a8[v18] );
    v39 = 2 * v18 + 2;
  }
  else
  {
    v39 = 10LL;
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
  v21 = (__int64)a6;
  if ( a6 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( a6[v22] );
    v23 = 2 * v22 + 2;
    v21 = (__int64)a6;
  }
  else
  {
    v23 = 10LL;
  }
  v24 = L"NULL";
  v25 = L"NULL";
  v26 = "NULL";
  if ( a9 )
    v26 = a9;
  v27 = L"NULL";
  if ( a8 )
    v25 = a8;
  if ( a7 )
    v27 = a7;
  if ( v21 )
    v24 = (const wchar_t *)v21;
  v34 = v20;
  v28 = a4;
  ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, const wchar_t *, __int64, const wchar_t *, __int64, const char *, __int64, _QWORD))qword_1400DF3E8)(
    *((_QWORD *)&DeviceObject->AttachedDevice + v15),
    43LL,
    a5,
    a4,
    v24,
    v23,
    v27,
    v34,
    v25,
    v39,
    v26,
    v17,
    0LL);
  v10 = a3;
  v14 = L"NULL";
LABEL_34:
  if ( a9 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( a9[v29] );
  }
  if ( a8 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( a8[v30] );
  }
  if ( a7 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( a7[v31] );
  }
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
  }
  if ( a6 )
    v14 = a6;
  LOWORD(v33) = v28;
  return WppAutoLogTrace(a1, a2, v10, a5, v33, (__int64)v14);
}
