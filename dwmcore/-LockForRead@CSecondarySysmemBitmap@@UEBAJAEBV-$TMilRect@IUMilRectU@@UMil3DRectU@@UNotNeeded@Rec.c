__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, _DWORD *a2, CBitmapLock **a3)
{
  CBitmapLock *v4; // rbx
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v10; // rdx
  unsigned int v11; // r12d
  CBitmapLock *v12; // rax
  CBitmapLock *v13; // rbp
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // edi
  char *v18; // rcx
  unsigned int v19; // [rsp+20h] [rbp-68h]
  CBitmapLock *v20; // [rsp+90h] [rbp+8h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 32)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v16 = -2147024809;
    v19 = 132;
    goto LABEL_14;
  }
  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)(a1 + 132));
  v11 = *(_DWORD *)(a1 + 128) * v10[1] + *v10 * (PixelFormatSize >> 3);
  v12 = (CBitmapLock *)operator new(0xA0uLL);
  if ( v12 )
    v12 = CBitmapLock::CBitmapLock(v12);
  wil::com_ptr_t<CBitmapLock,wil::err_returncode_policy>::operator=(&v20, v12);
  v4 = v20;
  if ( !v20 )
  {
    v16 = -2147024882;
    v19 = 141;
LABEL_14:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v16, v19, 0LL);
    goto LABEL_8;
  }
  v13 = v20;
  v14 = CBitmapLock::HrInit(
          v20,
          (struct IBitmapUnlock *)((a1 + 24) & -(__int64)(a1 != 0)),
          a2[2] - *a2,
          a2[3] - a2[1],
          (const struct PixelFormatInfo *)(a1 + 132),
          *(_DWORD *)(a1 + 128),
          *(_DWORD *)(a1 + 152) - v11,
          (void *)(v11 + *(_QWORD *)(a1 + 144)),
          WICBitmapLockRead,
          0,
          0LL);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x98u, 0LL);
  }
  else
  {
    v4 = 0LL;
    *a3 = v13;
  }
LABEL_8:
  if ( v4 )
  {
    v18 = (char *)v4 + *(int *)(*((_QWORD *)v4 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v16;
}
