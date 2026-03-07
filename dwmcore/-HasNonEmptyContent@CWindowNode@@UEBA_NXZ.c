char __fastcall CWindowNode::HasNonEmptyContent(CWindowNode *this)
{
  __int64 v1; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *ProjectedShadowReceivers; // rax

  v1 = *((_QWORD *)this + 99);
  v3 = 1;
  if ( v1 && *(_BYTE *)(v1 + 168)
    || (*((_BYTE *)this + 890)
     || ((v4 = *((_QWORD *)this + 97), (v4 & 2) != 0)
       ? (v5 = *(_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFCuLL))
       : (v5 = *((_QWORD *)this + 97) & 1LL),
         !v5))
    && ((v7 = *((_QWORD *)this + 98), (v7 & 2) != 0)
      ? (v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFFCuLL))
      : (v8 = *((_QWORD *)this + 98) & 1LL),
        !v8) )
  {
    v9 = *((_QWORD *)this + 32);
    if ( !v9 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v9 + 192LL))(v9) )
    {
      if ( (**((_DWORD **)this + 29) & 0x20000) == 0 )
        return 0;
      ProjectedShadowReceivers = (_QWORD *)CVisual::GetProjectedShadowReceivers((__int64)this);
      if ( *ProjectedShadowReceivers == ProjectedShadowReceivers[1] )
        return 0;
    }
  }
  return v3;
}
