__int64 __fastcall CLegacyRotationMgr::xxxSetAutoRotationState(CLegacyRotationMgr *this, int a2)
{
  int v3; // edi
  CLegacyRotationMgr *v4; // rcx
  unsigned int v5; // eax

  v3 = CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, a2);
  v5 = CLegacyRotationMgr::xxxSetSlateAutoRotationState(v4, a2);
  if ( v3 >= 0 )
    return v5;
  return (unsigned int)v3;
}
