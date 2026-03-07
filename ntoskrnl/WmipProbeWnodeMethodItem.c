__int64 __fastcall WmipProbeWnodeMethodItem(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  int v6; // eax

  if ( a2 < 0x44 )
    return 3221225473LL;
  result = WmipProbeWnodeWorker((__int64)a1, 0x44u, a1[12], a1[15], a1[16], a2, a3, 1, 1);
  if ( (int)result < 0 )
    return result;
  v6 = a1[11];
  if ( (v6 & 0x8000) != 0 && a2 == *a1 && (v6 & 0xFFFF7F7F) == 0 )
    return 0LL;
  else
    return 3221225473LL;
}
