unsigned __int8 __fastcall VidSchIsGpuAccessBlocked(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 2624) + 4 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5));
  return _bittest(&v2, *(_DWORD *)(a1 + 4) & 0x1F);
}
