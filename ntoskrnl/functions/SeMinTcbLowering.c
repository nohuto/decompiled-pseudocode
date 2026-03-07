__int64 SeMinTcbLowering()
{
  if ( (SeCiDebugOptions & 4) != 0 )
    return 1LL;
  if ( KdpBootedNodebug )
    return 0LL;
  return ((unsigned int)SeCiDebugOptions >> 1) & 1;
}
