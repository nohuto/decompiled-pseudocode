void KiAssignAllSubNodesToGroup0()
{
  __int64 v0; // rdx
  __int64 v1; // rax

  KiMaximumGroups = 1;
  if ( KiSubNodeCount )
  {
    v0 = (unsigned __int16)KiSubNodeCount;
    v1 = KiSubNodeConfigBlock + 5;
    do
    {
      *(_BYTE *)v1 |= 1u;
      *(_WORD *)(v1 + 1) = 0;
      v1 += 24LL;
      --v0;
    }
    while ( v0 );
  }
}
