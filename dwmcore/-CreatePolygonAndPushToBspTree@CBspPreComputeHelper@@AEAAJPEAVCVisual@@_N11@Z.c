__int64 __fastcall CBspPreComputeHelper::CreatePolygonAndPushToBspTree(
        CBspPreComputeHelper *this,
        struct CVisual *a2,
        bool a3,
        char a4,
        bool a5)
{
  const struct CMILMatrix *TopByReference; // rax
  int v10; // ecx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  char *v14; // rax
  char v15; // bl
  unsigned int *v16; // r8
  int v17; // r9d
  int v18; // r10d
  int v19; // r11d
  int PolygonNoRef; // eax
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  CBspNode *v24; // rsi
  CBspNode *v25; // rax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  CBspNode *v32; // [rsp+68h] [rbp-21h] BYREF
  _OWORD v33[4]; // [rsp+78h] [rbp-11h] BYREF
  int v34; // [rsp+B8h] [rbp+2Fh]
  struct CPolygon *v35; // [rsp+E8h] [rbp+5Fh] BYREF

  TopByReference = CMatrixStack::GetTopByReference((CBspPreComputeHelper *)((char *)this + 96));
  v35 = 0LL;
  v10 = *((_DWORD *)this + 72);
  v11 = *((_OWORD *)TopByReference + 1);
  v33[0] = *(_OWORD *)TopByReference;
  v12 = *((_OWORD *)TopByReference + 2);
  v33[1] = v11;
  v13 = *((_OWORD *)TopByReference + 3);
  v34 = *((_DWORD *)TopByReference + 16);
  v14 = 0LL;
  v33[2] = v12;
  v33[3] = v13;
  if ( v10 )
    v14 = (char *)(*((_QWORD *)this + 38) + (unsigned int)(v10 - 1));
  v15 = *v14;
  CWatermarkStack<float,64,2,10>::GetTopByReference((__int64)this + 256);
  PolygonNoRef = CVisual::GetPolygonNoRef(a2, v33, v16, *v16, v17, v18, v19, a4, v15, a5, &v35);
  v22 = PolygonNoRef;
  if ( PolygonNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, PolygonNoRef, 0x1BCu, 0LL);
    goto LABEL_13;
  }
  v24 = *(CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(this);
  if ( v24 )
    goto LABEL_10;
  CWatermarkStack<CBspNode *,64,2,10>::Pop(v23, 0LL);
  v25 = (CBspNode *)CBspNode::operator new();
  if ( !v25 || (v32 = CBspNode::CBspNode(v25, a3), (v24 = v32) == 0LL) )
  {
    v22 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x1C7u, 0LL);
    goto LABEL_13;
  }
  v27 = CWatermarkStack<CBspNode *,64,2,10>::Push(this, &v32);
  v22 = v27;
  if ( v27 >= 0 )
  {
LABEL_10:
    v29 = CBspNode::PushPolygon(v24, v35, a3);
    v22 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x1CCu, 0LL);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x1C9u, 0LL);
  }
LABEL_13:
  ReleaseInterface<CPolygon>((__int64 *)&v35);
  return v22;
}
