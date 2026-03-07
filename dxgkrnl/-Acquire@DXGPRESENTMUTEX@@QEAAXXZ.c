void __fastcall DXGPRESENTMUTEX::Acquire(DXGPRESENTMUTEX *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((_BYTE *)this + 16) )
  {
    WdLogSingleEntry1(1LL, 7780LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v3, v2, v4, 0, 2, -1, (__int64)L"!m_Acquired", 100, 0, 0, 0, 0);
    }
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(*((_QWORD *)this + 1) + 776LL));
  *((_BYTE *)this + 16) = 1;
}
