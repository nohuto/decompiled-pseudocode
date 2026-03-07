void __fastcall CSERIALIZEDWORKQUEUE::~CSERIALIZEDWORKQUEUE(CSERIALIZEDWORKQUEUE *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((_BYTE *)this + 64) || *((CSERIALIZEDWORKQUEUE **)this + 6) != (CSERIALIZEDWORKQUEUE *)((char *)this + 48) )
  {
    WdLogSingleEntry1(1LL, 816LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v3,
        v2,
        v4,
        0LL,
        2,
        -1,
        L"!m_WorkItemActive && IsListEmpty(&m_WorkItemList)",
        816LL,
        0LL,
        0LL,
        0LL,
        0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX(this);
}
