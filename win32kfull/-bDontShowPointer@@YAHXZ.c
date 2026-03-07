_BOOL8 __fastcall bDontShowPointer(__int64 a1)
{
  return *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 8672LL) != 0;
}
