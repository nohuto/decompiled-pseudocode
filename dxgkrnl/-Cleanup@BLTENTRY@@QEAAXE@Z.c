void __fastcall BLTENTRY::Cleanup(struct _EX_RUNDOWN_REF **this, char a2)
{
  if ( a2 )
  {
    if ( this[5] )
      BLTENTRY::ReleaseRenderingDoneEvent((BLTENTRY *)this);
    if ( this[6] )
      BLTENTRY::ReleasePresentDoneEvent((BLTENTRY *)this, 0);
  }
  DXGALLOCATIONREFERENCE::AssignNull(this + 4);
}
