__int64 __fastcall ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax

  v1 = *(_QWORD *)(a1 + 16);
  if ( *(int *)(v1 + 2820) < 2500 )
    return (unsigned int)(*(_DWORD *)(v1 + 412) != 32902) + 1;
  v2 = *(_DWORD *)(a1 + 24);
  if ( (v2 & 4) != 0 || (v2 & 8) == 0 )
    return 2LL;
  else
    return 1LL;
}
