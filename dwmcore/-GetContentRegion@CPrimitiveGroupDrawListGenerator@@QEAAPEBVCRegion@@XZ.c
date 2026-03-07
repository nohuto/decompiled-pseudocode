const struct CRegion *__fastcall CPrimitiveGroupDrawListGenerator::GetContentRegion(
        CPrimitiveGroupDrawListGenerator *this)
{
  _DWORD *v2; // rax
  void **v3; // rcx
  void **v4; // rcx
  unsigned int i; // edi
  __int64 v7; // r11
  struct tagRECT *v8; // rax
  CRegion *v9; // rcx
  int v10; // eax
  struct tagRECT v11; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v12; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  struct D2D_RECT_F *v14; // [rsp+58h] [rbp-20h]
  const void *retaddr; // [rsp+78h] [rbp+0h]

  if ( !*((_QWORD *)this + 12) )
  {
    v2 = DefaultHeap::Alloc(0x48uLL);
    if ( v2 )
    {
      *(_QWORD *)v2 = v2 + 2;
      v2[2] = 0;
    }
    v3 = (void **)*((_QWORD *)this + 12);
    *((_QWORD *)this + 12) = v2;
    if ( v3 )
      CRegion::`scalar deleting destructor'(v3, 1);
    if ( *((_QWORD *)this + 12) )
    {
      for ( i = 0; i < *(_DWORD *)(*((_QWORD *)this + 2) + 8LL); ++i )
      {
        CPrimitiveGroupDrawListGenerator::GetIteratorForState((__int64)this, (__int64)v13, i);
        if ( (*(_BYTE *)(v7 + 4) & 2) == 0 && *(_DWORD *)v7 && *(_DWORD *)(v7 + 40) < *((_DWORD *)this + 8) )
        {
          do
          {
            v8 = RECTFromD2DRectF(&v12, v14);
            v9 = (CRegion *)*((_QWORD *)this + 12);
            v11 = *v8;
            v10 = CRegion::TryAddRectangle(v9, &v11);
            if ( v10 < 0 )
              ModuleFailFastForHRESULT(v10, retaddr);
          }
          while ( CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v13) );
        }
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v3, 0LL, 0, -2147024882, 0x1F6u, 0LL);
      v4 = (void **)*((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = 0LL;
      if ( v4 )
        CRegion::`scalar deleting destructor'(v4, 1);
    }
  }
  return (const struct CRegion *)*((_QWORD *)this + 12);
}
