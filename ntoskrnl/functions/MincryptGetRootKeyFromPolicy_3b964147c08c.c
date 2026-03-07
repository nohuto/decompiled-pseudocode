__int64 __fastcall MincryptGetRootKeyFromPolicy(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax

  if ( *(_DWORD *)a1
    && (v1 = *(_QWORD *)(a1 + 16)) != 0
    && (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0
    && (v2 = *(_DWORD *)(v1 + 16)) != 0 )
  {
    return *(_QWORD *)(v1 + 8) + 16LL * (unsigned int)(v2 - 1);
  }
  else
  {
    return 0LL;
  }
}
