char __fastcall DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CGenericInkMarshaler *v4; // rcx
  unsigned int SegmentCount; // ebp
  unsigned __int64 v7; // rcx
  void *v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // ebx
  char *v12; // r9
  int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  void *v17; // [rsp+50h] [rbp+18h] BYREF

  if ( !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this) )
    return 1;
  SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(v4);
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 17) + 28LL;
    v8 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    v17 = v8;
    if ( (unsigned __int64)v8 < v7 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v17) )
        return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
      v8 = v17;
    }
    v9 = ((unsigned __int64)v8 - 28) / *((_QWORD *)this + 17);
    v10 = SegmentCount - *((_DWORD *)this + 37);
    if ( v10 >= (unsigned int)v9 )
      v10 = v9;
    v17 = 0LL;
    v11 = *((_DWORD *)this + 34) * v10 + 28;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, v11, &v17) )
      break;
    v12 = (char *)v17;
    *(_DWORD *)v17 = v11;
    v13 = *((_DWORD *)this + 37);
    *(_OWORD *)(v12 + 4) = 0LL;
    *(_QWORD *)(v12 + 20) = 0LL;
    v14 = v10 + v13;
    *((_DWORD *)v12 + 1) = 151;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 8);
    *((_DWORD *)v12 + 3) = *((_DWORD *)this + 37);
    *((_DWORD *)v12 + 4) = v10;
    *((_DWORD *)v12 + 6) = *((_DWORD *)this + 39);
    v15 = *((_DWORD *)this + 36);
    v16 = v15;
    if ( v15 <= v14 )
      v16 = v14;
    *((_DWORD *)v12 + 5) = v16 - v15;
    memmove(
      v12 + 28,
      (const void *)(*((_QWORD *)this + 12)
                   + *((_QWORD *)this + 17) * *((_QWORD *)this + 16) * *((unsigned int *)this + 37)),
      *((_QWORD *)this + 17) * *((_QWORD *)this + 16) * v10);
    *((_BYTE *)this + 152) = 0;
    *((_DWORD *)this + 37) = v14;
    if ( v14 == SegmentCount )
    {
      *((_DWORD *)this + 4) |= 0x40u;
      return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
    }
  }
  return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
}
