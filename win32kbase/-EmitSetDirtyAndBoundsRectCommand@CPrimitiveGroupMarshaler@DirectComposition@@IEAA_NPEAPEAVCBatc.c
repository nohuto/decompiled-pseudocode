char __fastcall DirectComposition::CPrimitiveGroupMarshaler::EmitSetDirtyAndBoundsRectCommand(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v4; // di
  int v5; // eax
  unsigned int v6; // esi
  char *v7; // rcx
  char *v9; // rcx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 1;
  if ( (*((_DWORD *)this + 4) & 0x100) != 0 )
  {
    v10 = 0LL;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x1CuLL, &v10) )
      return 0;
    v9 = (char *)v10;
    *(_DWORD *)v10 = 28;
    *(_OWORD *)(v9 + 4) = 0LL;
    *(_QWORD *)(v9 + 20) = 0LL;
    *((_DWORD *)v9 + 1) = 288;
    *((_DWORD *)v9 + 2) = *((_DWORD *)this + 8);
    *(_OWORD *)(v9 + 12) = *(_OWORD *)((char *)this + 180);
    *((_DWORD *)this + 4) &= ~0x100u;
  }
  v5 = *((_DWORD *)this + 44);
  if ( v5 )
  {
    v10 = 0LL;
    v6 = 16 * (v5 + 1);
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, v6, &v10) )
    {
      v7 = (char *)v10;
      *(_DWORD *)v10 = v6;
      *(_QWORD *)(v7 + 4) = 0LL;
      *((_DWORD *)v7 + 3) = 0;
      *((_DWORD *)v7 + 1) = 289;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 8);
      *((_DWORD *)v7 + 3) = *((_DWORD *)this + 44);
      memmove(v7 + 16, (char *)this + 112, 16LL * *((unsigned int *)this + 44));
      *((_DWORD *)this + 44) = 0;
      return v4;
    }
    return 0;
  }
  return v4;
}
