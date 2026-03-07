_BOOL8 __fastcall GreIsProcessSystemCritical(struct _EPROCESS *a1)
{
  return Gre::Umfd::IsSessionGlobalsAreaAllocated(a1) && UmfdHostLifeTimeManager::IsProcessUmfdHost(a1);
}
