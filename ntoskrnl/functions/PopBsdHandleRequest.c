__int64 __fastcall PopBsdHandleRequest(unsigned int a1)
{
  if ( (a1 & 1) != 0 )
    PopUpdateBsdPowerTransitionReferenceTime();
  if ( (a1 & 8) != 0 )
    return PopBsdFlush(a1);
  PopBsdUpdateRequests |= a1;
  return PopQueueWorkItem(&PopBsdUpdateWorkItem, 1LL);
}
