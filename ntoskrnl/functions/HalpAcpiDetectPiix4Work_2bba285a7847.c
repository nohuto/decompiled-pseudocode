__int64 __fastcall HalpAcpiDetectPiix4Work(__int64 a1)
{
  __int64 v1; // rcx

  HalpMmAllocCtxFree(a1, a1);
  LOBYTE(v1) = 1;
  return HalpPiix4Detect(v1);
}
