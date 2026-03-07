void __fastcall CDrawingContext::UpdateRenderTargetInfo(CDrawingContext *this)
{
  __int64 v2; // rax
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = (***((__int64 (__fastcall ****)(_QWORD, _BYTE *))this + 4))(*((_QWORD *)this + 4), v3);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)v2;
  *((_QWORD *)this + 9) = *(_QWORD *)(v2 + 16);
}
