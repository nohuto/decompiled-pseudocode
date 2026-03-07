__int64 __fastcall HalpNumaQueryProximityId(unsigned __int16 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9

  v3 = HalpNumaConfig;
  if ( (unsigned int)a1 >= *(_DWORD *)(HalpNumaConfig + 56) )
    return 3221226021LL;
  *a2 = *(_DWORD *)(*(_QWORD *)(HalpNumaConfig + 24) + 4LL * a1);
  if ( a3 )
    *a3 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 4LL * a1);
  return 0LL;
}
