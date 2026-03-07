__int64 __fastcall CGdiSpriteBitmap::SetDirtyRectangles(CGdiSpriteBitmap *this, __int64 a2)
{
  unsigned int v3; // r8d
  const struct tagRECT *v4; // rdx
  int v5; // eax
  int *v7; // [rsp+20h] [rbp-68h] BYREF
  int v8; // [rsp+28h] [rbp-60h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  if ( *(_QWORD *)a2 )
  {
    v3 = *(_DWORD *)a2;
    v4 = *(const struct tagRECT **)(a2 + 8);
    v8 = 0;
    v7 = &v8;
    v5 = CRegion::TryAddRectangles((CRegion *)&v7, v4, v3);
    if ( v5 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v5, retaddr);
    CGdiSpriteBitmap::AddDirtyRegion(this, (struct CRegion *)&v7, 1);
    FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v7);
  }
  return 0LL;
}
