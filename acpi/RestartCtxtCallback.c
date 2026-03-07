__int64 __fastcall RestartCtxtCallback(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1 - 328;
  LogSchedEvent(1381188418, a1 - 328, a1 - 328, 0LL, 0LL);
  return RestartContext(v1, (*(_DWORD *)(v1 + 64) & 0x100) == 0);
}
