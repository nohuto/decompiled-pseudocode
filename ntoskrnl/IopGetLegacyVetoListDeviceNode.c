char __fastcall IopGetLegacyVetoListDeviceNode(__int64 a1, __int64 a2)
{
  _QWORD *i; // rbx
  bool v6; // zf

  if ( (*(_DWORD *)(a1 + 560) & 0x8000) != 0 )
  {
    v6 = *(_QWORD *)a2 == 0LL;
    **(_DWORD **)(a2 + 16) = 1;
    if ( v6 || !(unsigned __int8)IopAppendLegacyVeto(a2, a1 + 40) )
      return 0;
  }
  for ( i = *(_QWORD **)(a1 + 8); i; i = (_QWORD *)*i )
  {
    if ( !(unsigned __int8)IopGetLegacyVetoListDeviceNode(i, a2) )
      return 0;
  }
  return 1;
}
