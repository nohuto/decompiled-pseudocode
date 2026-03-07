void __fastcall EtwpCovSampCaptureBufferProcess(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&BugCheckParameter2) < 0 )
    goto LABEL_6;
  if ( (*(_DWORD *)(a2 + 56) & 4) != 0 )
  {
    v4 = BugCheckParameter2;
    EtwpCovSampContextAddSamples(BugCheckParameter2);
    goto LABEL_7;
  }
  if ( (unsigned int)EtwpCovSampStackHashCheck(
                       a1,
                       *(unsigned __int16 *)(a2 + 62),
                       a2 + 64,
                       *(unsigned __int16 *)(a2 + 62)) )
  {
LABEL_6:
    v4 = BugCheckParameter2;
  }
  else
  {
    v4 = BugCheckParameter2;
    EtwpCovSampContextAddAddresses(BugCheckParameter2);
  }
LABEL_7:
  if ( v4 )
  {
    ExReleaseRundownProtection_0(&stru_140C31880);
    KeLeaveCriticalRegion();
  }
}
