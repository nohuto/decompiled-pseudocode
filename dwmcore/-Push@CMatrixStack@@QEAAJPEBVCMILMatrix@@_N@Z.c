__int64 __fastcall CMatrixStack::Push(CMatrixStack *this, const struct CMILMatrix *a2, char a3)
{
  int v4; // eax
  unsigned int v5; // ecx
  const struct CMILMatrix *v6; // r11
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v11; // eax
  unsigned int v12; // ecx
  _BYTE v13[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v14; // [rsp+70h] [rbp-68h]
  _BYTE v15[64]; // [rsp+80h] [rbp-58h] BYREF
  int v16; // [rsp+C0h] [rbp-18h]

  if ( *(_DWORD *)this && a3 )
  {
    v14 = 0;
    v16 = 0;
    v4 = CWatermarkStack<CMILMatrix,8,2,8>::Top(this, v13);
    v7 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x3Du, 0LL);
    }
    else
    {
      CMILMatrix::Multiply(v6, (const struct CMILMatrix *)v13, (struct CMILMatrix *)v15);
      v8 = CWatermarkStack<CMILMatrix,8,2,8>::Push((unsigned int *)this, (__int64)v15);
      v7 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x45u, 0LL);
    }
  }
  else
  {
    v11 = CWatermarkStack<CMILMatrix,8,2,8>::Push((unsigned int *)this, (__int64)a2);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x36u, 0LL);
  }
  return v7;
}
