__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::operator()(
        BTL_TOPOLOGY_CONSTRUCTOR *this,
        int a2,
        CCD_TOPOLOGY *a3,
        unsigned __int16 *a4)
{
  __int64 v5; // r14
  int v7; // eax
  int v8; // ebx
  __int64 v9; // rdx
  __m128i *v11; // r15
  unsigned int v12; // esi
  unsigned int i; // r12d
  __int64 v14; // rbp
  int v15; // eax
  CCD_TOPOLOGY *v16; // rcx
  __int64 v17; // rcx
  unsigned __int16 v18; // dx
  unsigned __int16 v19; // ax
  __int64 v20; // rax
  unsigned __int16 v21; // cx
  const struct D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // rax
  unsigned int v23; // ecx
  unsigned int v24; // [rsp+20h] [rbp-68h] BYREF
  __m128i si128; // [rsp+28h] [rbp-60h] BYREF
  int v26; // [rsp+38h] [rbp-50h]

  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = 0;
  v5 = a2;
  CCD_TOPOLOGY::Clear(a3);
  v7 = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query((BTL_TOPOLOGY_CONSTRUCTOR *)((char *)this + 12));
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = v7;
LABEL_3:
    WdLogSingleEntry3(2LL, v9, v5, *(_QWORD *)this);
    return (unsigned int)v8;
  }
  v11 = &si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v26 = 8;
  v8 = -1073741811;
  v12 = 0;
  v24 = 0;
  for ( i = 0; i < 5; ++i )
  {
    v14 = v11->m128i_i32[0];
    if ( ((unsigned int)v14 & (unsigned int)v5) != (_DWORD)v14 )
      goto LABEL_21;
    switch ( (_DWORD)v14 )
    {
      case 1:
        v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructInternal(this);
LABEL_18:
        v8 = v15;
        if ( v15 >= 0 )
          goto LABEL_24;
        goto LABEL_19;
      case 2:
        v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructClone(this, 1);
        goto LABEL_18;
      case 4:
        v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExtend(this, 1);
        goto LABEL_18;
      case 8:
        v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructExternal(this);
        goto LABEL_18;
      case 0xF:
        v15 = BTL_TOPOLOGY_CONSTRUCTOR::_ConstructDefault(this, &v24);
        v12 = v24;
        goto LABEL_18;
    }
    v8 = -1073741811;
LABEL_19:
    if ( (_DWORD)v14 == 15 )
      goto LABEL_23;
    v16 = *(CCD_TOPOLOGY **)this;
    *((_DWORD *)this + 2) = 0;
    CCD_TOPOLOGY::Clear(v16);
    v12 = 0;
    v24 = 0;
    WdLogSingleEntry3(3LL, v8, v14, *(_QWORD *)this);
LABEL_21:
    v11 = (__m128i *)((char *)v11 + 4);
  }
  if ( v8 < 0 )
  {
LABEL_23:
    v9 = v8;
    goto LABEL_3;
  }
LABEL_24:
  v17 = *(_QWORD *)(*(_QWORD *)this + 64LL);
  if ( v17 )
    v18 = *(_WORD *)(v17 + 22);
  else
    v18 = 0;
  v19 = *((_WORD *)this + 4);
  if ( v19 <= v18 )
  {
    while ( 1 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)this + 64LL);
      v21 = v20 ? *(_WORD *)(v20 + 20) : 0;
      if ( v12 >= v21 )
        break;
      PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*(CCD_TOPOLOGY **)this, v12);
      v23 = v12;
      if ( *((_BYTE *)this + 11) )
        v23 = 0;
      *((_DWORD *)PathDescriptor + 46) = v23 | 0xFE530000;
      *(_QWORD *)PathDescriptor |= 0x4000000000000uLL;
      ++v12;
    }
  }
  else
  {
    if ( a4 )
      *a4 = v19;
    return (unsigned int)-1073741789;
  }
  return (unsigned int)v8;
}
