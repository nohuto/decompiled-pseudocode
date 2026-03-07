void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( !*((_BYTE *)this + 1) )
  {
    WdLogSingleEntry1(1LL, 707LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v3, v2, v4, 0, 2, -1, (__int64)L"m_Entered", 707LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}
