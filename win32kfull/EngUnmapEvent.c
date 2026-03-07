BOOL __stdcall EngUnmapEvent(PEVENT pEvent)
{
  if ( (pEvent->fFlags & 1) == 0 )
    return 0;
  ObfDereferenceObject(pEvent->pKEvent);
  Win32FreePool(pEvent);
  return 1;
}
