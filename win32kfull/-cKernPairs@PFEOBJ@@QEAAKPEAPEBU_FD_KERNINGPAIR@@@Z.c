unsigned __int64 __fastcall PFEOBJ::cKernPairs(PFEOBJ *this, const struct _FD_KERNINGPAIR **a2)
{
  const struct _FD_KERNINGPAIR *v4; // r8
  __int64 v5; // rcx
  unsigned __int64 result; // rax
  __int64 FontTree; // rax
  __int64 v8; // rcx
  _WORD *i; // rax
  _QWORD v10[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = *(const struct _FD_KERNINGPAIR **)(*(_QWORD *)this + 48LL);
  *a2 = v4;
  v5 = *(_QWORD *)this;
  if ( v4 )
    return *(unsigned int *)(v5 + 64);
  v10[0] = *(_QWORD *)v5;
  FontTree = PFFOBJ::QueryFontTree(
               (PFFOBJ *)v10,
               *(struct DHPDEV__ **)(v10[0] + 96LL),
               *(_QWORD *)(v10[0] + 80LL),
               *(_DWORD *)(v5 + 8),
               2u,
               (unsigned __int64 *)(v5 + 56));
  *(_QWORD *)(*(_QWORD *)this + 48LL) = FontTree;
  v8 = *(_QWORD *)this;
  if ( FontTree )
  {
    for ( i = *(_WORD **)(v8 + 48); *i || i[1] || i[2]; i += 3 )
      ;
    *a2 = *(const struct _FD_KERNINGPAIR **)(*(_QWORD *)this + 48LL);
    result = 0xAAAAAAAAAAAAAAABuLL * (((__int64)i - *(_QWORD *)(*(_QWORD *)this + 48LL)) >> 1);
    *(_DWORD *)(*(_QWORD *)this + 64LL) = result;
  }
  else
  {
    *(_QWORD *)(v8 + 48) = &unk_1C03118DC;
    *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
    return 0LL;
  }
  return result;
}
