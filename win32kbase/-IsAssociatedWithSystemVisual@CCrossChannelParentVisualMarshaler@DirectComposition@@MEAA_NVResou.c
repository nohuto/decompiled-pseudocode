bool __fastcall DirectComposition::CCrossChannelParentVisualMarshaler::IsAssociatedWithSystemVisual(__int64 a1, int a2)
{
  __int64 v2; // r8
  bool result; // al

  v2 = *(_QWORD *)(a1 + 376);
  result = 0;
  if ( v2 )
    return *(_DWORD *)(v2 + 8) == a2;
  return result;
}
