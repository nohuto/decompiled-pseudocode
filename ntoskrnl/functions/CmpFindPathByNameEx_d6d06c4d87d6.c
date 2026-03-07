char __fastcall CmpFindPathByNameEx(
        __int64 a1,
        __m128i *a2,
        UNICODE_STRING *a3,
        int a4,
        unsigned int *a5,
        ULONG_PTR *a6)
{
  unsigned int *v6; // r12
  unsigned __int16 v7; // r14
  ULONG_PTR *v10; // rcx
  __m128i v11; // xmm0
  unsigned __int16 v12; // bx
  unsigned __int16 MaximumLength; // r15
  ULONG_PTR v15; // rsi
  unsigned int v16; // ecx
  wchar_t *Buffer; // rdi
  _BYTE *v18; // r13
  __int64 CellFlat; // rax
  ULONG_PTR v20; // rcx
  unsigned int v21; // r12d
  unsigned __int64 v23; // rax
  _DWORD v24[2]; // [rsp+20h] [rbp-30h] BYREF
  UNICODE_STRING v25; // [rsp+28h] [rbp-28h]
  __int64 v26; // [rsp+38h] [rbp-18h]
  wchar_t *v27; // [rsp+40h] [rbp-10h]
  UNICODE_STRING *v28; // [rsp+A0h] [rbp+50h]

  v28 = a3;
  v6 = a5;
  v7 = 0;
  v26 = 0LL;
  v24[0] = -1;
  *a5 = -1;
  v10 = a6;
  v24[1] = 0;
  *a6 = 0LL;
  if ( a3 )
  {
    RtlInitUnicodeString(a3, 0LL);
    a3 = v28;
    v10 = a6;
  }
  v11 = *a2;
  v12 = _mm_cvtsi128_si32(*a2);
  v25 = (UNICODE_STRING)v11;
  if ( v12 )
  {
    MaximumLength = v25.MaximumLength;
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 32);
      *v10 = v15;
      v16 = *(_DWORD *)(a1 + 40);
      Buffer = v25.Buffer;
      *a5 = v16;
    }
    else
    {
      v15 = CmpMasterHive;
      Buffer = v25.Buffer;
      v16 = *(_DWORD *)(*(_QWORD *)(CmpMasterHive + 64) + 36LL);
      do
      {
        if ( *Buffer != 92 )
          break;
        v12 -= 2;
        ++Buffer;
        MaximumLength -= 2;
        v25.Length = v12;
      }
      while ( v12 );
      v25.Buffer = Buffer;
      v25.MaximumLength = MaximumLength;
      if ( !v12 )
        goto LABEL_20;
      do
      {
        if ( *Buffer == 92 )
          break;
        v12 -= 2;
        ++Buffer;
        MaximumLength -= 2;
        v25.Length = v12;
      }
      while ( v12 );
      v25.Buffer = Buffer;
      v25.MaximumLength = MaximumLength;
    }
    while ( 1 )
    {
      if ( v12 )
      {
        do
        {
          if ( *Buffer != 92 )
            break;
          v12 -= 2;
          ++Buffer;
          MaximumLength -= 2;
          v25.Length = v12;
        }
        while ( v12 );
        v25.Buffer = Buffer;
        v25.MaximumLength = MaximumLength;
      }
LABEL_20:
      if ( a3 )
        *a3 = v25;
      if ( !v12 )
        break;
      v18 = (_BYTE *)(v15 + 140);
      if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
        CellFlat = HvpGetCellFlat(v15, v16);
      else
        CellFlat = HvpGetCellPaged(v15);
      if ( !CellFlat )
        return 0;
      v27 = Buffer;
      LOWORD(v26) = 0;
      do
      {
        if ( Buffer[(unsigned __int64)v7 >> 1] == 92 )
          break;
        v7 += 2;
      }
      while ( v7 < v12 );
      LOWORD(v26) = v7;
      if ( (*(_BYTE *)(CellFlat + 2) & 2) != 0 )
      {
        v20 = v15;
        v15 = *(_QWORD *)(CellFlat + 36);
        v21 = *(_DWORD *)(CellFlat + 28);
        if ( (*v18 & 1) != 0 )
          HvpReleaseCellFlat(v20, v24);
        else
          HvpReleaseCellPaged(v20, v24);
        if ( v15 != CmpMasterHive && a4 && (a4 & *(_DWORD *)(v15 + 4112)) == 0 )
          return 0;
        if ( !((*(_BYTE *)(v15 + 140) & 1) != 0 ? HvpGetCellFlat(v15, v21) : HvpGetCellPaged(v15)) )
          return 0;
        v6 = a5;
      }
      CmpFindSubKeyByNameWithStatus(v15);
      if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
        HvpReleaseCellFlat(v15, v24);
      else
        HvpReleaseCellPaged(v15, v24);
      v16 = 0;
      MaximumLength -= v7;
      v12 -= v7;
      *v6 = 0;
      v25.MaximumLength = MaximumLength;
      v25.Length = v12;
      *a6 = v15;
      v23 = v7;
      v7 = 0;
      Buffer += v23 >> 1;
      v25.Buffer = Buffer;
      if ( !v12 )
        return 1;
      a3 = v28;
    }
    return 1;
  }
  if ( a1 )
  {
    *v10 = *(_QWORD *)(a1 + 32);
    *a5 = *(_DWORD *)(a1 + 40);
    return 1;
  }
  return 0;
}
