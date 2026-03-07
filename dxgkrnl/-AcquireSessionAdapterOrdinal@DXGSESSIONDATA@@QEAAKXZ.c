__int64 __fastcall DXGSESSIONDATA::AcquireSessionAdapterOrdinal(DXGSESSIONDATA *this)
{
  ULONG ClearBitsAndSet; // eax
  unsigned int v3; // ebx
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, (DXGSESSIONDATA *)((char *)this + 19160), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
  ClearBitsAndSet = RtlFindClearBitsAndSet((PRTL_BITMAP)((char *)this + 19208), 1u, 0);
  v3 = -1;
  if ( ClearBitsAndSet == -1 )
  {
    DxgkLogCodePointPacket(0x74u, 0, *((_DWORD *)this + 4802), 0, 0LL);
    WdLogSingleEntry2(3LL, *(unsigned int *)this, 2LL);
  }
  else
  {
    v3 = ClearBitsAndSet;
  }
  if ( v5[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
  return v3;
}
