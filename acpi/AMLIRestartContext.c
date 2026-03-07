__int64 __fastcall AMLIRestartContext(__int64 a1)
{
  __int64 v1; // rdx

  v1 = *(_DWORD *)(a1 + 64) >> 8;
  LOBYTE(v1) = (*(_DWORD *)(a1 + 64) & 0x100) == 0;
  return RestartContext(a1, v1);
}
