_BOOL8 __fastcall IopLiveDumpAddIptTraceBuffersPredicate(__int64 a1)
{
  return (*(_DWORD *)(a1 + 40) & 0x20) == 0;
}
