__int64 __fastcall CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3)
{
  unsigned int v6; // ebx
  const struct CMILMatrix *TopByReference; // rax
  const struct CMILMatrix *v8; // rax
  _DWORD *v9; // rax
  bool v10; // r8
  bool v11; // cl
  int PolygonAndPushToBspTree; // eax
  __int64 v13; // rcx
  _OWORD v15[4]; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+70h] [rbp-18h]

  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)a2 + 248LL))(a2) || a3 )
  {
    TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 64));
    v15[0] = *(_OWORD *)TopByReference;
    v15[1] = *((_OWORD *)TopByReference + 1);
    v15[2] = *((_OWORD *)TopByReference + 2);
    v15[3] = *((_OWORD *)TopByReference + 3);
    v16 = *((_DWORD *)TopByReference + 16);
    v8 = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
    CMILMatrix::Multiply(v8, (const struct CMILMatrix *)v15, (struct CMILMatrix *)v15);
    CMILMatrix::IsFacingUser((CMILMatrix *)v15);
    v9 = (_DWORD *)CWatermarkStack<enum MilBackfaceVisibility::Enum,64,2,10>::GetTopByReference((__int64)this + 128);
    v11 = 1;
    if ( !v10 )
    {
      if ( *v9 == 1 && !a3 )
        return v6;
      if ( *v9 )
        v11 = 0;
    }
    PolygonAndPushToBspTree = CBspPreComputeHelper::CreatePolygonAndPushToBspTree(this, a2, v10, v11, a3);
    v6 = PolygonAndPushToBspTree;
    if ( PolygonAndPushToBspTree < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, PolygonAndPushToBspTree, 0x11Eu, 0LL);
  }
  return v6;
}
