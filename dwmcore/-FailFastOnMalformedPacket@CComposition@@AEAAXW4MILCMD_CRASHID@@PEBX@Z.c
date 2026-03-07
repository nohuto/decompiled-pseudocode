void __fastcall __noreturn CComposition::FailFastOnMalformedPacket(__int64 a1, int a2, const void *a3)
{
  MilWerRegisterMemoryBlock(*(const void **)(a1 + 632), *(_DWORD *)(a1 + 640));
  MilFailFastForHR(a2, a3);
  JUMPOUT(0x1801B192FLL);
}
