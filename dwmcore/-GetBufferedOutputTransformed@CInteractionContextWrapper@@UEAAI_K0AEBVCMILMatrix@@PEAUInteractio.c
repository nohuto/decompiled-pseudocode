__int64 __fastcall CInteractionContextWrapper::GetBufferedOutputTransformed(
        CInteractionContextWrapper *this,
        __int64 a2,
        __int64 a3,
        const struct CMILMatrix *a4,
        struct InteractionOutput *a5)
{
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int64 v9; // rax
  __int128 v10; // xmm0
  unsigned int v11; // edi
  _OWORD v13[3]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+60h] [rbp-48h]
  int v15; // [rsp+68h] [rbp-40h]

  v7 = *(_OWORD *)a5;
  v8 = *((_OWORD *)a5 + 1);
  v15 = *((_DWORD *)a5 + 14);
  v9 = *(_QWORD *)this;
  v13[0] = v7;
  v10 = *((_OWORD *)a5 + 2);
  v13[1] = v8;
  *(_QWORD *)&v8 = *((_QWORD *)a5 + 6);
  v13[2] = v10;
  v14 = v8;
  v11 = (*(__int64 (__fastcall **)(CInteractionContextWrapper *, __int64, __int64, _OWORD *))(v9 + 136))(
          this,
          a2,
          a3,
          v13);
  if ( v11 )
    CInteractionContextWrapper::TransformOutput(this, a4, (const struct InteractionOutput *)v13, a5);
  return v11;
}
