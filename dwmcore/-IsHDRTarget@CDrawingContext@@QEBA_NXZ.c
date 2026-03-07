bool __fastcall CDrawingContext::IsHDRTarget(CDrawingContext *this)
{
  __int64 (__fastcall ***v1)(_QWORD, _BYTE *); // rcx
  __int64 v2; // rax
  _BYTE v4[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)this + 4)
                                                 + 8LL
                                                 + *(int *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 12LL));
  v2 = (**v1)(v1, v4);
  return IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v2 + 8));
}
