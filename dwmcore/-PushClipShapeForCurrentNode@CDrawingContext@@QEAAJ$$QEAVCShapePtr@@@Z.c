__int64 __fastcall CDrawingContext::PushClipShapeForCurrentNode(CDrawingContext *this, __int64 *a2)
{
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rbx
  const struct CMILMatrix *TopByReference; // rax
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-89h] BYREF
  __int64 v13; // [rsp+38h] [rbp-81h] BYREF
  char v14; // [rsp+40h] [rbp-79h]
  __int128 v15; // [rsp+A4h] [rbp-15h]
  __int128 v16; // [rsp+B4h] [rbp-5h]
  __int128 v17; // [rsp+C4h] [rbp+Bh]
  __int128 v18; // [rsp+D4h] [rbp+1Bh]
  int v19; // [rsp+E4h] [rbp+2Bh]
  char v20; // [rsp+120h] [rbp+67h] BYREF

  CDrawingContext::NodeEffects::NodeEffects((CDrawingContext::NodeEffects *)&v12);
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 3) + 32LL))((char *)this + 24);
  v5 = *((_BYTE *)a2 + 8);
  v6 = *a2;
  v12 = v4;
  CShapePtr::Release((CShapePtr *)&v13);
  v14 = v5;
  v13 = v6;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 400));
  v20 = 0;
  v15 = *(_OWORD *)TopByReference;
  v16 = *((_OWORD *)TopByReference + 1);
  v17 = *((_OWORD *)TopByReference + 2);
  v18 = *((_OWORD *)TopByReference + 3);
  v19 = *((_DWORD *)TopByReference + 16);
  v8 = CDrawingContext::PushLocalSpaceClipAndAlphaInternal(this, 0LL, (__int64)&v12, &v20);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xCEFu, 0LL);
  CShapePtr::Release((CShapePtr *)&v13);
  return v10;
}
