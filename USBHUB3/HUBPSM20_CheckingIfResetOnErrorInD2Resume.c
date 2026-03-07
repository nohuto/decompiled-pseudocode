__int64 __fastcall HUBPSM20_CheckingIfResetOnErrorInD2Resume(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  bool v3; // zf
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 960);
  if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 2) == 0 )
    return 3005LL;
  if ( (*(_DWORD *)(v1 + 204) & 1) != 0 )
    return 3005LL;
  v2 = *(_QWORD *)(v1 + 1328);
  if ( *(_DWORD *)(v2 + 2708) != 3 )
    return 3005LL;
  v3 = (*(_DWORD *)(v2 + 1644) & 0x8000000) == 0;
  result = 3089LL;
  if ( v3 )
    return 3005LL;
  return result;
}
