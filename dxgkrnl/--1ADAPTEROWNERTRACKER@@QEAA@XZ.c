void __fastcall ADAPTEROWNERTRACKER::~ADAPTEROWNERTRACKER(ADAPTEROWNERTRACKER *this)
{
  DXGADAPTER *v2; // rcx
  DXGADAPTER *v3; // rcx

  v2 = (DXGADAPTER *)*((_QWORD *)this + 1);
  if ( v2 )
    DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v2);
  v3 = (DXGADAPTER *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    if ( *((DXGADAPTER **)this + 1) != v3 )
      DXGADAPTER::PopWorkerThreadOfExclusiveOwner(v3);
  }
}
