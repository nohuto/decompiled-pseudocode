void __fastcall CNaturalAnimation::ClearState(CNaturalAnimation *this)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v2; // xmm1
  __int128 v3; // xmm2
  __int128 v4; // xmm3
  __int64 v5; // r9
  struct _D3DMATRIX *v6; // rcx
  struct _D3DMATRIX *v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int64 v12; // r9
  char v13; // r8
  struct _D3DMATRIX v14; // [rsp+20h] [rbp-48h] BYREF

  *((_BYTE *)this + 588) = *((_BYTE *)this + 588) & 0xBA | 0x44;
  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v14);
  v2 = *(_OWORD *)&D3DMatrix->_21;
  v3 = *(_OWORD *)&D3DMatrix->_31;
  v4 = *(_OWORD *)&D3DMatrix->_41;
  *(_OWORD *)(v5 + 524) = *(_OWORD *)&D3DMatrix->_11;
  *(_OWORD *)(v5 + 540) = v2;
  *(_OWORD *)(v5 + 556) = v3;
  *(_OWORD *)(v5 + 572) = v4;
  v7 = CMILMatrix::GetD3DMatrix(v6, &v14);
  v8 = *(_OWORD *)&v7->_11;
  v9 = *(_OWORD *)&v7->_21;
  v10 = *(_OWORD *)&v7->_31;
  v11 = *(_OWORD *)&v7->_41;
  *(_QWORD *)(v12 + 424) = 0LL;
  *(_OWORD *)(v12 + 460) = v8;
  *(_OWORD *)(v12 + 476) = v9;
  *(_BYTE *)(v12 + 588) = v13 & 0xF5;
  *(_OWORD *)(v12 + 492) = v10;
  *(_OWORD *)(v12 + 508) = v11;
}
