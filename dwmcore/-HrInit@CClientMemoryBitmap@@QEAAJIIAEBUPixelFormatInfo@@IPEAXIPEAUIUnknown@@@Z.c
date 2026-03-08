/*
 * XREFs of ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800A7AF4
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x1800A7684 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18003E720 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ??$SetInterface@UIUnknown@@U1@@@YAXAEAPEAUIUnknown@@PEAU0@@Z @ 0x1800A813C (--$SetInterface@UIUnknown@@U1@@@YAXAEAPEAUIUnknown@@PEAU0@@Z.c)
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x1800A86F8 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CClientMemoryBitmap::HrInit(
        CClientMemoryBitmap *this,
        unsigned int a2,
        int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct IUnknown *a8)
{
  unsigned int v12; // ecx
  unsigned int v13; // r8d
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // ebx
  unsigned int v18; // [rsp+20h] [rbp-28h]

  if ( !IsValidPixelFormatInfo(a4) || !a2 || !v13 || !a6 || !a7 )
  {
    v18 = 31;
    goto LABEL_13;
  }
  if ( v13 >= 0x7FFFFFFF / a7 )
  {
    v18 = 36;
LABEL_13:
    v16 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024809, v18, 0LL);
    return v16;
  }
  v14 = HrCheckBufferSize(*(_DWORD *)a4, a7, a2, v13, a5);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x2Du, 0LL);
  }
  else
  {
    SetInterface<IUnknown,IUnknown>((char *)this + 176, a8);
    *((_DWORD *)this + 26) = a2;
    *((_DWORD *)this + 27) = a3;
    *((_QWORD *)this + 15) = *(_QWORD *)a4;
    *((_DWORD *)this + 32) = *((_DWORD *)a4 + 2);
    *((_QWORD *)this + 20) = a6;
    *((_DWORD *)this + 42) = a7;
  }
  return v16;
}
