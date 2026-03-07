NTSTATUS __fastcall RtlHpHeapManagerStart(union _RTL_RUN_ONCE *a1)
{
  NTSTATUS result; // eax
  __int128 Parameter; // [rsp+30h] [rbp-18h] BYREF

  a1[1].Value = 0xFFFF800000000000uLL;
  result = RtlCSparseBitmapStart(&a1[2], 0x10000000LL, 1LL, 1LL);
  if ( result >= 0 )
  {
    result = RtlpHpVaMgrCtxStart((__int64)&a1[11], 1, 1LL, 0xFFFF800000000000uLL, 0x7FFFFFFFFFFFuLL);
    if ( result >= 0 )
    {
      Parameter = 0LL;
      *(_WORD *)((char *)&Parameter + 1) = 1;
      LOBYTE(Parameter) = 3;
      RtlpHpMetadataHeapCreate(a1 + 1814, &Parameter, 0LL);
      return 0;
    }
  }
  return result;
}
