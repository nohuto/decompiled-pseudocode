bool __fastcall DXGGLOBAL::ToggleTopologyTransition(DXGGLOBAL *this, char a2)
{
  int v2; // ebx
  int v4; // edx
  int v5; // ecx
  int v6; // r8d

  if ( a2 )
  {
    v2 = _InterlockedIncrement((volatile signed __int32 *)this + 218);
  }
  else
  {
    v2 = _InterlockedDecrement((volatile signed __int32 *)this + 218);
    if ( v2 < 0 )
    {
      WdLogSingleEntry1(1LL, 1582LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v5,
            v4,
            v6,
            0,
            2,
            -1,
            (__int64)L"Result >= 0",
            1582LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  return v2 != 0;
}
