_QWORD *__fastcall CLegacyRenderTarget::NotifyRenderedRect(__int64 a1, struct MilRectF *a2, char a3)
{
  bool v4; // cf
  int *v5; // rax
  __int64 v6; // rcx
  _QWORD *result; // rax
  int v8; // r9d
  int v9; // r10d
  _DWORD *v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF
  int v13[4]; // [rsp+40h] [rbp-28h] BYREF

  if ( a2 )
  {
    v11 = 0LL;
    if ( !a3 )
    {
      v4 = *(_BYTE *)(a1 + 11225) != 0;
      v12 = 0LL;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(a1 + (v4 ? 18352LL : 18216LL)), a2, (float *)&v12);
      a2 = (struct MilRectF *)&v12;
    }
    v5 = PixelAlign(v13, (float *)a2);
    v6 = *(_QWORD *)(a1 + 184);
    v11 = *(_OWORD *)v5;
    result = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 16LL))(v6, &v11);
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 184) + 16LL))(*(_QWORD *)(a1 + 184), 0LL);
    result = *(_QWORD **)(a1 + 18656);
    if ( result )
    {
      v8 = *(_DWORD *)(a1 + 104);
      v9 = *(_DWORD *)(a1 + 108);
      if ( v8 <= 0 || v9 <= 0 )
      {
        result = (_QWORD *)*result;
        *(_DWORD *)result = 0;
      }
      else
      {
        v10 = (_DWORD *)*result;
        v10[1] = 0;
        v10[7] = 0;
        v10[3] = 0;
        v10[8] = v8;
        v10[4] = 16;
        result = v10 + 5;
        *v10 = 2;
        v10[2] = v8;
        v10[6] = 16;
        v10[5] = v9;
      }
    }
  }
  *(_BYTE *)(a1 + 18700) = 1;
  return result;
}
