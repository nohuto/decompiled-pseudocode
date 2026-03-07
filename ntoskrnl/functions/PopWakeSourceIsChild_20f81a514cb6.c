char __fastcall PopWakeSourceIsChild(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // di

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  if ( (PVOID)v2 != IopRootDeviceNode && v2 )
  {
    while ( *(_WORD *)(v2 + 40) != *(_WORD *)a2
         || wcsncmp(
              *(const wchar_t **)(v2 + 48),
              *(const wchar_t **)(a2 + 8),
              (unsigned __int64)*(unsigned __int16 *)(v2 + 40) >> 1) )
    {
      v2 = *(_QWORD *)(v2 + 16);
      if ( (PVOID)v2 == IopRootDeviceNode || !v2 )
        return v3;
    }
    return 1;
  }
  return v3;
}
