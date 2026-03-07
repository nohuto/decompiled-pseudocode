bool __fastcall MiIsActiveSystemHotPatch(__int64 a1)
{
  __int64 v1; // rdx

  return (*(_DWORD *)(a1 + 196) & 0x20) != 0 && (v1 = *(_QWORD *)(a1 + 280)) != 0 && *(_QWORD *)(v1 + 280) == a1;
}
