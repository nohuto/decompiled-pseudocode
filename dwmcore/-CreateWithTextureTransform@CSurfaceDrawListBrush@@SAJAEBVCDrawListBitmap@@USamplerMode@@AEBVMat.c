__int64 __fastcall CSurfaceDrawListBrush::CreateWithTextureTransform(
        struct CSurfaceDrawListBrush *a1,
        __int16 *a2,
        _DWORD *a3,
        _QWORD *a4)
{
  unsigned int v8; // edi
  struct CObjectCache *ObjectCache; // rax
  char *v10; // rbx
  int v11; // r8d
  __int16 v12; // r12
  char v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v17; // ecx

  v8 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v10 = (char *)DefaultHeap::Alloc(0x98uLL)) != 0LL )
  {
    v12 = *a2;
    v13 = *((_BYTE *)a2 + 2);
    *(_OWORD *)(v10 + 8) = *(_OWORD *)&_xmm;
    v10[52] = 0;
    *(_QWORD *)v10 = &CSurfaceDrawListBrush::`vftable';
    *((_QWORD *)v10 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v14 = *(_QWORD *)a1;
    *((_QWORD *)v10 + 7) = *(_QWORD *)a1;
    if ( v14 )
    {
      v15 = v14 + 8 + *(int *)(*(_QWORD *)(v14 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    }
    wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>(
      v10 + 64,
      *((_QWORD *)a1 + 1));
    v10[72] = *((_BYTE *)a1 + 16);
    *((_WORD *)v10 + 40) = v12;
    v10[82] = v13;
    *((_DWORD *)v10 + 21) = *a3;
    *((_DWORD *)v10 + 22) = a3[1];
    *((_DWORD *)v10 + 23) = a3[2];
    *((_DWORD *)v10 + 24) = a3[3];
    *((_DWORD *)v10 + 25) = a3[4];
    *((_DWORD *)v10 + 26) = a3[5];
    *((_DWORD *)v10 + 27) = a3[6];
    *((_DWORD *)v10 + 28) = a3[7];
    *((_DWORD *)v10 + 29) = a3[8];
    *(_OWORD *)(v10 + 120) = _xmm;
    *((_DWORD *)v10 + 36) = 256;
    v10[148] = 0;
    *a4 = v10;
  }
  else
  {
    *a4 = 0LL;
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x3Au, 0LL);
  }
  return v8;
}
