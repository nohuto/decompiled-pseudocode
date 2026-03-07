__int64 __fastcall WmipProbeWnodeSingleInstance(_DWORD *a1, unsigned int a2, unsigned int a3, char a4)
{
  char v6; // zf
  __int64 result; // rax
  int v8; // eax

  if ( a2 < 0x40 )
    return 3221225473LL;
  v6 = a4 == 0;
  if ( a4 )
  {
    if ( a3 < 0x40 )
      return 3221225473LL;
    v6 = a4 == 0;
  }
  result = WmipProbeWnodeWorker((_DWORD)a1, 64, a1[12], a1[14], a1[15], a2, a3, a4, v6);
  if ( (int)result < 0 )
    return result;
  v8 = a1[11];
  if ( (v8 & 2) == 0 || a2 != *a1 || (v8 & 0xFFFFFF7D) != 0 )
    return 3221225473LL;
  return 0LL;
}
