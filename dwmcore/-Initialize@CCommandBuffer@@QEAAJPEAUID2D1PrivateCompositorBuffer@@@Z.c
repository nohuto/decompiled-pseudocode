__int64 __fastcall CCommandBuffer::Initialize(CCommandBuffer *this, struct ID2D1PrivateCompositorBuffer *a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  unsigned int v7; // edi
  unsigned int v8; // ecx
  void *v9; // rsi
  unsigned int v10; // ebx
  const void *v11; // rax
  _DWORD *v12; // rax
  unsigned int v14; // [rsp+20h] [rbp-28h]
  void *v15; // [rsp+58h] [rbp+10h] BYREF

  v15 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
  if ( v4 == 144 * (v4 / 0x90uLL) )
  {
    v7 = (*(unsigned int (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2) / 0x90;
    v15 = operator new(saturated_mul(v7, 0x90uLL));
    v9 = v15;
    if ( !v15 )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x26u, 0LL);
      goto LABEL_12;
    }
    v10 = (*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 32LL))(a2);
    v11 = (const void *)(*(__int64 (__fastcall **)(struct ID2D1PrivateCompositorBuffer *))(*(_QWORD *)a2 + 24LL))(a2);
    memcpy_0(v9, v11, v10);
    v5 = 0;
    if ( !v7 )
    {
LABEL_11:
      v15 = 0LL;
      v6 = 0;
      *((_DWORD *)this + 2) = v7;
      *(_QWORD *)this = v9;
      goto LABEL_12;
    }
    v12 = v9;
    while ( *v12 <= 3u && v12[3] <= 7u )
    {
      ++v5;
      v12 += 36;
      if ( v5 >= v7 )
        goto LABEL_11;
    }
    v14 = 51;
  }
  else
  {
    v14 = 33;
  }
  v6 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, v14, 0LL);
LABEL_12:
  SAFE_DELETE_ARRAY<D2D1_COMPOSITOR_DRAWING_STATE>(&v15);
  return v6;
}
