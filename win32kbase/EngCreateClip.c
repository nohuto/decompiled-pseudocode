CLIPOBJ *EngCreateClip(void)
{
  CLIPOBJ *v0; // rbx
  struct _RECTL v2; // [rsp+20h] [rbp-18h] BYREF
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF

  v0 = (CLIPOBJ *)EngAllocMem(1u, 0x98u, 0x76726447u);
  if ( v0 )
  {
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v3, 0x70u);
    if ( !v3 )
    {
      EngDeleteClip(v0);
      return 0LL;
    }
    *(_QWORD *)&v0[2].rclBounds.top = v3;
    v2.top = -134217728;
    v2.left = -134217728;
    *(_WORD *)&v0->iDComplexity = 256;
    v2.bottom = 0x7FFFFFF;
    v2.right = 0x7FFFFFF;
    v0->iMode = 0;
    RGNOBJ::vSet((RGNOBJ *)&v3, &v2);
  }
  return v0;
}
