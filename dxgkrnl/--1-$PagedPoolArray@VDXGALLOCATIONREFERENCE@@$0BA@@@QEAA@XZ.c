void __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,16>::~PagedPoolArray<DXGALLOCATIONREFERENCE,16>(__int64 a1)
{
  DXGALLOCATIONREFERENCE *v2; // rcx
  unsigned int i; // ebx

  v2 = *(DXGALLOCATIONREFERENCE **)a1;
  if ( v2 == (DXGALLOCATIONREFERENCE *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 136); ++i )
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)(*(_QWORD *)a1 + 8LL * i));
  }
  else if ( v2 )
  {
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v2);
  }
}
