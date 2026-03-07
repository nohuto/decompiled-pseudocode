__int64 __fastcall CSceneVisual::Get3DContentBounds(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v2 = *(_QWORD *)(a1 + 256);
  if ( !v2 )
  {
    a2[4] = 0;
    a2[5] = 0;
    a2[3] = 0;
    a2[2] = 0;
    a2[1] = 0;
    *a2 = 0;
    return 0;
  }
  v3 = CSceneWorld::Get3DBounds(v2, a2, a2);
  v5 = v3;
  if ( v3 >= 0 )
    return 0;
  MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x45u, 0LL);
  return v5;
}
