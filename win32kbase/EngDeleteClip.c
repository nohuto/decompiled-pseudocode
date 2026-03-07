void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  unsigned __int64 v2; // rcx

  if ( pco )
  {
    v2 = *(_QWORD *)&pco[2].rclBounds.top;
    if ( v2 )
      REGION::vDeleteREGION(v2);
    EngFreeMem(pco);
  }
}
