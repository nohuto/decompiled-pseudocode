_BOOL8 __fastcall MiPfnZeroingNeeded(__int64 a1)
{
  return (*(_DWORD *)(a1 + 16) & 0x3E0LL) != 0
      || (unsigned int)MiPageContentsRetainedAcrossAttributeChange(*(unsigned __int8 *)(a1 + 34) >> 6) == 0;
}
