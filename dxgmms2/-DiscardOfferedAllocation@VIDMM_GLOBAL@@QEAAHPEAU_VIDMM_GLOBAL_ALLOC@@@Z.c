__int64 __fastcall VIDMM_GLOBAL::DiscardOfferedAllocation(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  unsigned int v2; // ecx

  if ( (*((_DWORD *)this + 1764) & 0x10) != 0
    || _InterlockedCompareExchange16((volatile signed __int16 *)(*((_QWORD *)a2 + 67) + 4LL), 3, 2) != 2 )
  {
    return 0;
  }
  else
  {
    v2 = 1;
    if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
    {
      McTemplateK0p_EtwWriteTransfer(1LL, &EventDiscardAllocation, 3LL, a2);
      return 1;
    }
  }
  return v2;
}
