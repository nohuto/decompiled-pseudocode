void __fastcall CDrawingContext::UpdateDeviceTransform(CDrawingContext *this, const struct CMILMatrix *a2, bool *a3)
{
  bool v6; // si
  char v7; // al
  bool v8; // zf
  __int64 v9; // rbx
  int v10; // eax
  unsigned int v11; // ecx
  _BYTE v12[64]; // [rsp+30h] [rbp-58h] BYREF
  int v13; // [rsp+70h] [rbp-18h]

  v6 = 1;
  CMILMatrix::Multiply((CDrawingContext *)((char *)this + 96), a2);
  v7 = CMILMatrix::IsIdentity<0>((char *)this + 96);
  v8 = *((_BYTE *)this + 8048) == 0;
  *((_BYTE *)this + 8168) = v7;
  if ( !v8 )
  {
    v9 = *((_QWORD *)this + 1009);
    if ( v9 )
    {
      v13 = 0;
      CMILMatrix::Multiply((const struct CMILMatrix *)(v9 + 1208), a2, (struct CMILMatrix *)v12);
      v10 = COcclusionContext::SetDeviceTransform((COcclusionContext *)v9, (const struct CMILMatrix *)v12);
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x24u, 0LL);
        v6 = 0;
      }
    }
  }
  if ( a3 )
    *a3 = v6;
}
