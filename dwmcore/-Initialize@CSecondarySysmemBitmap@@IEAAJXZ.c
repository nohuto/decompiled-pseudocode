/*
 * XREFs of ?Initialize@CSecondarySysmemBitmap@@IEAAJXZ @ 0x1800ED404
 * Callers:
 *     ?EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x1800EC864 (-EnsureSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180044B4C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Initialize(CSecondarySysmemBitmap *this)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v3; // rcx
  int v4; // edi
  unsigned int v5; // r8d
  unsigned int v6; // eax
  LPVOID v7; // rax
  void *v8; // rcx
  int v9; // r10d
  int v10; // r9d
  int v11; // eax
  int v12; // r11d
  _DWORD *v13; // rdx

  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 33));
  if ( PixelFormatSize && *((_DWORD *)this + 30) <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v4 = 0;
    v5 = (((*((_DWORD *)this + 30) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v4 = -2147024362;
    v5 = 0;
  }
  *((_DWORD *)this + 32) = v5;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v4, 0x29u, 0LL);
  }
  else
  {
    v6 = -1;
    if ( v5 * (unsigned __int64)*((unsigned int *)this + 31) <= 0xFFFFFFFF )
      v6 = v5 * *((_DWORD *)this + 31);
    *((_DWORD *)this + 38) = v6;
    v7 = DefaultHeap::Alloc(v6);
    v8 = (void *)*((_QWORD *)this + 18);
    *((_QWORD *)this + 18) = v7;
    if ( v8 )
      operator delete(v8);
    if ( *((_QWORD *)this + 18) )
    {
      v9 = *((_DWORD *)this + 8);
      v10 = *((_DWORD *)this + 10);
      v11 = *((_DWORD *)this + 9);
      v12 = *((_DWORD *)this + 11);
      if ( v9 >= v10 || v11 >= v12 )
      {
        **((_DWORD **)this + 6) = 0;
      }
      else
      {
        v13 = (_DWORD *)*((_QWORD *)this + 6);
        *v13 = 2;
        v13[7] = v9;
        v13[3] = v11;
        v13[8] = v10;
        v13[4] = 16;
        v13[1] = v9;
        v13[2] = v10;
        v13[6] = 16;
        v13[5] = v12;
      }
    }
    else
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, -2147024882, 0x2Fu, 0LL);
    }
  }
  return (unsigned int)v4;
}
