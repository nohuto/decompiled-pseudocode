CVector3Force *__fastcall CVector3Force::CVector3Force(
        CVector3Force *this,
        struct IAccelerator *a2,
        struct IAccelerator *a3,
        struct IAccelerator *a4)
{
  struct _D3DMATRIX *D3DMatrix; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int128 v10; // xmm3
  __int64 v11; // r10
  struct _D3DMATRIX v13; // [rsp+20h] [rbp-48h] BYREF

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CVector3Force::`vftable';
  D3DMatrix = CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v13);
  v8 = *(_OWORD *)&D3DMatrix->_21;
  v9 = *(_OWORD *)&D3DMatrix->_31;
  v10 = *(_OWORD *)&D3DMatrix->_41;
  *(_OWORD *)((char *)this + 220) = *(_OWORD *)&D3DMatrix->_11;
  *(_OWORD *)((char *)this + 236) = v8;
  *(_OWORD *)((char *)this + 252) = v9;
  *(_OWORD *)((char *)this + 268) = v10;
  *((_QWORD *)this + 36) = v11;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 36);
  *((_QWORD *)this + 37) = a3;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 37);
  *((_QWORD *)this + 38) = a4;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))this + 38);
  *((_BYTE *)this + 352) &= 0xFCu;
  return this;
}
