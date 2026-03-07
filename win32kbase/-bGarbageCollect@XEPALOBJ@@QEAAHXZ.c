__int64 __fastcall XEPALOBJ::bGarbageCollect(XEPALOBJ *this)
{
  unsigned int v2; // ebx
  HSEMAPHORE v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 40LL);
  EngAcquireSemaphore(v4);
  v2 = 0;
  if ( *(_QWORD *)this )
    v2 = XEPALOBJ::bDeletePaletteInternal(this, 1);
  SEMOBJ::vUnlock((PERESOURCE *)&v4);
  return v2;
}
