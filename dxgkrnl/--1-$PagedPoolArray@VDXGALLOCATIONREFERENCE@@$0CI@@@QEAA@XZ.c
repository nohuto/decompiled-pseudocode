void __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,40>::~PagedPoolArray<DXGALLOCATIONREFERENCE,40>(__int64 a1)
{
  DXGALLOCATIONREFERENCE *v2; // rcx
  unsigned int i; // ebx

  v2 = *(DXGALLOCATIONREFERENCE **)a1;
  if ( v2 == (DXGALLOCATIONREFERENCE *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 328); ++i )
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(*(_QWORD *)a1 + 8LL * i));
  }
  else if ( v2 )
  {
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v2);
  }
}
