__int64 __fastcall PspEnsureGuiThreadAndBatchFlush(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x200080) == 0 && (int)PsConvertToGuiThread() < 0 )
    return 3221225473LL;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 240) + 5952LL) )
    PsInvokeWin32Callout(7, 0LL, 0, 0LL);
  return 0LL;
}
