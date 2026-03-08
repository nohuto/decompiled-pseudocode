/*
 * XREFs of ?EnsureVertexBuffer@CMesh2DEffect@@IEAAJPEBVCD3DVertexXYZDUV2@@I@Z @ 0x1802BB500
 * Callers:
 *     ?SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z @ 0x1802BBD40 (-SetVertices@CMesh2DEffect@@QEAAJPEBEI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::EnsureVertexBuffer(
        CMesh2DEffect *this,
        const struct CD3DVertexXYZDUV2 *a2,
        unsigned int a3)
{
  _QWORD *v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  int *v8; // rbx
  int v9; // r8d
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-60h]
  _DWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  const struct CD3DVertexXYZDUV2 *v18; // [rsp+48h] [rbp-38h]
  int v19; // [rsp+50h] [rbp-30h]
  void *v20; // [rsp+58h] [rbp-28h] BYREF
  int v21; // [rsp+60h] [rbp-20h]
  char **v22; // [rsp+68h] [rbp-18h]
  int v23; // [rsp+70h] [rbp-10h]
  int v24; // [rsp+74h] [rbp-Ch]
  void *v25; // [rsp+B0h] [rbp+30h] BYREF
  int v26; // [rsp+C8h] [rbp+48h]
  unsigned int v27; // [rsp+CCh] [rbp+4Ch]

  v26 = 0;
  v3 = (_QWORD *)((char *)this + 176);
  v5 = a3;
  v6 = *((_QWORD *)this + 22);
  v27 = a3;
  v8 = (int *)((char *)this + 184);
  if ( !v6 )
  {
LABEL_9:
    *v8 = 0;
    v20 = &unk_1803C0200;
    v11 = 0xFFFFFFFFLL;
    v21 = 2304;
    v22 = &off_1802D5020;
    v23 = 4;
    v24 = 32;
    if ( (unsigned __int64)(32 * v5) > 0xFFFFFFFF )
    {
      v12 = -2147024362;
      v13 = -2147024362;
      v16 = 562;
      goto LABEL_15;
    }
    v18 = a2;
    v17[0] = 1;
    v17[1] = 1;
    v14 = *((_QWORD *)this + 17);
    v19 = 32 * v5;
    v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, void **, _QWORD *))(*(_QWORD *)v14 + 136LL))(
            v14,
            v17,
            0LL,
            &v20,
            v3);
    v12 = v10;
    if ( v10 < 0 )
    {
      v16 = 578;
      goto LABEL_6;
    }
    goto LABEL_11;
  }
  v9 = *v8;
  if ( *v8 < (unsigned int)v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *v3 = 0LL;
    goto LABEL_9;
  }
  v25 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, void **, _QWORD))(*(_QWORD *)v6 + 24LL))(v6, &v25, (unsigned int)(32 * v9));
  v12 = v10;
  if ( v10 < 0 )
  {
    v16 = 587;
    goto LABEL_6;
  }
  memcpy_0(v25, a2, 32LL * (unsigned int)v5);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 32LL))(*v3);
  v12 = v10;
  if ( v10 < 0 )
  {
    v16 = 595;
LABEL_6:
    v13 = v10;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v13, v16, 0LL);
    return v12;
  }
LABEL_11:
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 16) + 88LL))(
          *((_QWORD *)this + 16),
          *v3,
          4LL);
  v12 = v10;
  if ( v10 < 0 )
  {
    v16 = 604;
    goto LABEL_6;
  }
  return v12;
}
