/*
 * XREFs of ?Update@CBitmapSource@@AEAAJPEAUIWICBitmap@@@Z @ 0x180027C4C
 * Callers:
 *     ?Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z @ 0x180027B80 (-Create@CBitmapSource@@SAJPEAUIWICBitmap@@PEBU_MARGINS@@PEAPEAV1@@Z.c)
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18003D130 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z @ 0x1800498B0 (-Create@CBitmapSource@@SAJPEAXKPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetBitmap@CBitmapSourceProxy@@QEAAJPEAUIWICBitmap@@@Z @ 0x180027D1C (-SetBitmap@CBitmapSourceProxy@@QEAAJPEAUIWICBitmap@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::Update(CBitmapSource *this, struct IWICBitmap *a2)
{
  __int64 v4; // rcx
  struct IWICBitmapVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v11; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = *((_QWORD *)this + 12);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 12) = a2;
  if ( a2 )
  {
    ((void (__fastcall *)(struct IWICBitmap *))a2->lpVtbl->AddRef)(a2);
    lpVtbl = a2->lpVtbl;
    v12 = 0;
    v13 = 0;
    v6 = ((__int64 (__fastcall *)(struct IWICBitmap *, int *, int *))lpVtbl->GetSize)(a2, &v12, &v13);
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x13Bu);
    }
    else
    {
      *((_DWORD *)this + 6) = v12;
      *((_DWORD *)this + 7) = v13;
      v8 = ((__int64 (__fastcall *)(struct IWICBitmap *))a2->lpVtbl->SetResolution)(a2);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x142u);
      }
      else
      {
        v9 = CBitmapSourceProxy::SetBitmap(*((CBitmapSourceProxy **)this + 2), a2);
        v7 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x144u);
      }
    }
  }
  else
  {
    v11 = CBitmapSourceProxy::SetBitmap(*((CBitmapSourceProxy **)this + 2), 0LL);
    v7 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x149u);
  }
  return v7;
}
