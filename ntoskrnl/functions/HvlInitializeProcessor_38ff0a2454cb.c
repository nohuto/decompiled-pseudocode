__int64 __fastcall HvlInitializeProcessor(union _SLIST_HEADER *a1)
{
  __int64 result; // rax
  __int64 v3; // r14
  void *v4; // rdi
  void *v5; // rsi
  __int64 OverlayPages; // rax
  void *v7; // rax
  unsigned __int16 ProcessorNodeNumber; // ax
  __int64 IndependentPages; // rax
  PHYSICAL_ADDRESS *v10; // rbp

  if ( !HvlHypervisorConnected )
    return 0LL;
  v3 = 2LL;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpEnableRootVirtualProcessor(), (int)result >= 0) )
  {
    v4 = 0LL;
    v5 = 0LL;
    if ( (HvlpFlags & 0x80000) != 0 && (HvlpFlags & 2) == 0 )
    {
      OverlayPages = HvlpAllocateOverlayPages();
      v5 = (void *)OverlayPages;
      if ( !OverlayPages )
        return 3221225626LL;
      a1[2160].Region = OverlayPages;
    }
    if ( (HvlpFlags & 2) == 0 && (HvlpFlags & 0x8000) != 0 )
    {
      v7 = (void *)HvlpAllocateOverlayPages();
      v4 = v7;
      if ( !v7 )
      {
LABEL_18:
        if ( v5 )
        {
          HvlpFreeOverlayPages(v5);
          a1[2160].Region = 0LL;
        }
        if ( v4 )
        {
          HvlpFreeOverlayPages(v4);
          a1[2187].Region = 0LL;
        }
        return 3221225626LL;
      }
      memset(v7, 0, 0x80uLL);
      a1[2187].Region = (unsigned __int64)v4;
    }
    ProcessorNodeNumber = KeGetProcessorNodeNumber((__int64)a1);
    IndependentPages = MmAllocateIndependentPagesEx(24576LL, ProcessorNodeNumber, 0LL, 0LL);
    v10 = (PHYSICAL_ADDRESS *)IndependentPages;
    if ( IndependentPages )
    {
      a1[2160].Alignment = IndependentPages;
      do
      {
        v10[2] = MmGetPhysicalAddress(v10);
        v10 += 512;
        --v3;
      }
      while ( v3 );
      HvlpSetupCachedHypercallPages(a1);
      return 0LL;
    }
    goto LABEL_18;
  }
  return result;
}
