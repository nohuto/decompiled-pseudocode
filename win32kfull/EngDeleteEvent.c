BOOL __stdcall EngDeleteEvent(PEVENT pEvent)
{
  if ( (pEvent->fFlags & 1) != 0 )
    return 0;
  Win32FreePool(pEvent);
  return 1;
}
