void __fastcall DXGSHAREDRESOURCECA::~DXGSHAREDRESOURCECA(DXGSHAREDRESOURCECA *this)
{
  int *v2; // rcx

  *(_QWORD *)this = &DXGSHAREDRESOURCECA::`vftable';
  v2 = (int *)*((_QWORD *)this + 28);
  if ( v2 )
    VIDMM_FLIP_QUEUE_REFERENCES::ReleaseReference(v2);
  DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(this);
}
