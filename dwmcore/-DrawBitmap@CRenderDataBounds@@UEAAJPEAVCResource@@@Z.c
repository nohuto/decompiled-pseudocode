__int64 __fastcall CRenderDataBounds::DrawBitmap(CRenderDataBounds *this, struct CResource *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  char v6; // al
  __int128 *v7; // rdx
  _QWORD v9[2]; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v10[64]; // [rsp+30h] [rbp-29h] BYREF
  int v11; // [rsp+70h] [rbp+17h]
  __int128 v12; // [rsp+80h] [rbp+27h] BYREF
  __int128 v13; // [rsp+90h] [rbp+37h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 85LL) )
  {
    v4 = (__int64 *)((char *)a2 + *(int *)(*((_QWORD *)a2 + 8) + 8LL) + 64);
    v5 = *v4;
    v9[0] = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, _QWORD *))(v5 + 64))(v4, v9) >= 0 )
    {
      v11 = 0;
      v12 = 0LL;
      v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int128 *))(*(_QWORD *)v9[0] + 8LL))(v9[0], v10, &v12);
      v7 = &v12;
      if ( v6 )
      {
        v13 = 0LL;
        CMILMatrix::Transform2DBoundsHelper<1>((CMILMatrix *)v10, (struct MilRectF *)&v12, (float *)&v13);
        v7 = &v13;
      }
      CRenderDataBounds::AddBounds(this, v7);
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v9);
  }
  return 0LL;
}
