char __fastcall bUnreferenceNetworkedFontFileNode(HANDLE *Buffer)
{
  char v3; // bl
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = *gpxsGlobals;
  GreAcquireSemaphore(v5);
  if ( (*((_DWORD *)Buffer + 8))-- == 1 )
  {
    if ( *Buffer )
    {
      ZwClose(*Buffer);
      *Buffer = 0LL;
    }
    RtlDeleteElementGenericTableAvl(*(PRTL_AVL_TABLE *)(gpxsGlobals + 8LL), Buffer);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  return v3;
}
