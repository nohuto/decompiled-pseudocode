char __fastcall CmRmIsKcbStackVisible(__int64 a1)
{
  __int64 v1; // r8
  __int64 KcbAtLayerHeight; // rax
  __int16 v3; // dx
  __int64 v4; // r9

  v1 = a1;
  if ( *(__int16 *)(a1 + 2) < 0 )
    return 1;
  while ( 1 )
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v1);
    if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      break;
    if ( (__int16)(v3 - 1) < 0 )
      return 1;
  }
  return CmRmIsKCBVisible(KcbAtLayerHeight, v4);
}
