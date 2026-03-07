__int64 __fastcall LdrCaptureDynamicRelocationTableHeader(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  unsigned __int64 v8; // r15
  int v10; // r10d
  unsigned __int16 v11; // bx
  int v12; // esi
  __int64 v13; // r11
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r11
  __int64 v18; // rax
  int v19; // edx
  __int64 v20; // [rsp+28h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-28h]

  v8 = a2;
  v20 = 0LL;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0LL;
  *a7 = 0;
  if ( a6 == 523 )
  {
    if ( a4 >= 0xE6 )
    {
      v11 = *(_WORD *)(a3 + 228);
      v12 = *(_DWORD *)(a3 + 224);
    }
    if ( a4 >= 0xC8 )
      v13 = *(_QWORD *)(a3 + 192);
  }
  else
  {
    if ( a4 >= 0x8E )
    {
      v11 = *(_WORD *)(a3 + 140);
      v12 = *(_DWORD *)(a3 + 136);
    }
    if ( a4 >= 0x7C )
      v13 = *(unsigned int *)(a3 + 120);
  }
  if ( v11 )
  {
    v15 = a2 + a1;
    v10 = RtlImageNtHeaderEx(0, a1, a2, &v20);
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v11 > *(_WORD *)(v20 + 6) )
      return (unsigned int)-1073741701;
    v16 = v20 + *(unsigned __int16 *)(v20 + 20) - 16LL + 40LL * v11;
    if ( v15 <= v16 || v15 < v16 + 40 )
      return (unsigned int)-1073741701;
    _mm_lfence();
    v17 = (unsigned int)(v12 + *(_DWORD *)(v16 + 12));
  }
  else
  {
    if ( !v13 )
      return (unsigned int)-1073741637;
    if ( a5 )
      v17 = (unsigned int)(v13 - a5);
    else
      v17 = (unsigned int)(v13 - a1);
  }
  if ( v17 + 8 < (unsigned __int64)(unsigned int)v17 )
    return (unsigned int)-1073741701;
  if ( v17 + 8 > v8 )
    return (unsigned int)-1073741701;
  v21 = *(_QWORD *)(v17 + a1);
  v18 = v21;
  v19 = HIDWORD(v21) + 8;
  if ( (unsigned int)(HIDWORD(v21) + 8) < HIDWORD(v21)
    || v19 + (int)v17 < (unsigned int)v17
    || v19 + (int)v17 > (unsigned int)v8 )
  {
    return (unsigned int)-1073741701;
  }
  else
  {
    *a7 = v17;
    if ( a8 )
      *a8 = v18;
  }
  return (unsigned int)v10;
}
