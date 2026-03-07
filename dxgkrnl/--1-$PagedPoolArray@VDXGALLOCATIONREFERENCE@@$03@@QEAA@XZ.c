void __fastcall PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(__int64 a1)
{
  DXGALLOCATIONREFERENCE *v2; // rcx
  unsigned int i; // ebx

  v2 = *(DXGALLOCATIONREFERENCE **)a1;
  if ( v2 == (DXGALLOCATIONREFERENCE *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)(*(_QWORD *)a1 + 8LL * i));
  }
  else if ( v2 )
  {
    DXGALLOCATIONREFERENCE::`vector deleting destructor'(v2);
  }
}
