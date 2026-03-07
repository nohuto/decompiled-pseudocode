__int64 __fastcall DXGGLOBAL::AcquireAdapterOrdinal(struct _RTL_BITMAP *this, char a2)
{
  unsigned int v4; // edi
  ULONG v5; // eax
  ULONG ClearBitsAndSet; // ebp
  _BYTE v8[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (struct DXGFASTMUTEX *const)&this[49], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v4 = -1;
  if ( a2 && this[53].SizeOfBitMap )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(this + 53, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v4 = DXGGLOBAL::GetMaximumGlobalAdapterCount((DXGGLOBAL *)this) + ClearBitsAndSet;
      goto LABEL_4;
    }
    DxgkLogCodePointPacket(0x74u, 2u, this[53].SizeOfBitMap, 0, 0LL);
  }
  v5 = RtlFindClearBitsAndSet(this + 52, 1u, 0);
  if ( v5 == -1 )
  {
    DxgkLogCodePointPacket(0x74u, 1u, this[52].SizeOfBitMap, 0, 0LL);
    WdLogSingleEntry1(3LL, 1024LL);
  }
  else
  {
    v4 = v5;
  }
LABEL_4:
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v4;
}
