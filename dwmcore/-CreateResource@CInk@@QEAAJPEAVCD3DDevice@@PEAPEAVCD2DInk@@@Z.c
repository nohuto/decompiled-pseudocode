__int64 __fastcall CInk::CreateResource(CInk *this, struct CD3DDevice *a2, struct CD2DInk **a3)
{
  struct ID2D1Ink *v5; // r14
  struct ID2D1InkStyle *v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct CD2DInk *v10; // rbx
  int ID2D1InkAndInkStyle; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  struct ID2D1InkStyle *v16; // [rsp+70h] [rbp+40h] BYREF
  struct ID2D1Ink *v17; // [rsp+78h] [rbp+48h] BYREF
  CD2DInk *v18; // [rsp+88h] [rbp+58h] BYREF

  v18 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v7 = CD2DContext::CreateD2DInk(
         (struct CD3DDevice *)((char *)a2 + 16),
         (const struct D2D1_INK_POINT *)((char *)this + 176),
         (const struct D2D1_INK_STYLE_PROPERTIES *)((char *)this + 188),
         &v18);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x12Eu, 0LL);
    v10 = v18;
  }
  else
  {
    v10 = v18;
    ID2D1InkAndInkStyle = CD2DInk::GetID2D1InkAndInkStyle(v18, &v17, &v16);
    v9 = ID2D1InkAndInkStyle;
    if ( ID2D1InkAndInkStyle < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, ID2D1InkAndInkStyle, 0x130u, 0LL);
      v5 = v17;
    }
    else
    {
      v5 = v17;
      v13 = (*(__int64 (__fastcall **)(struct ID2D1Ink *, _QWORD, _QWORD))(*(_QWORD *)v17 + 48LL))(
              v17,
              *((_QWORD *)this + 18),
              *((unsigned int *)this + 42));
      v9 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x131u, 0LL);
      }
      else
      {
        *a3 = v10;
        v10 = 0LL;
      }
    }
    v6 = v16;
  }
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Ink *))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1InkStyle *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v10 )
    (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v10 + 16LL))(v10);
  return v9;
}
