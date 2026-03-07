__int64 __fastcall CRedirectedVisualContent::Initialize(struct CResource **this)
{
  int v2; // eax
  unsigned int v3; // ecx
  int VisualTree; // ebx
  CVisual *v5; // rcx
  struct CVisualTree *v6; // rcx
  struct CVisualTree **v8; // [rsp+30h] [rbp-28h]
  struct CVisualTree *v9; // [rsp+38h] [rbp-20h] BYREF
  char v10; // [rsp+40h] [rbp-18h]

  v2 = CResource::RegisterNotifier((CResource *)this, this[9]);
  VisualTree = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x23u, 0LL);
  }
  else
  {
    v5 = this[9];
    v9 = 0LL;
    v8 = this + 10;
    v10 = 1;
    VisualTree = CVisual::GetVisualTree(v5, &v9, 1);
    if ( v10 )
    {
      v6 = *v8;
      *v8 = v9;
      if ( v6 )
        (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( VisualTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v6, 0LL, 0, VisualTree, 0x26u, 0LL);
  }
  return (unsigned int)VisualTree;
}
