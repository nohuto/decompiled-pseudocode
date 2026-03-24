/*
 * XREFs of ?SaveBitmap@CBitmapSaver@@QEAAJAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1802668DC
 * Callers:
 *     ?DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180210184 (-DebugSaveTexture@@YAJPEAUID3D11Texture2D@@IAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocat.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180034EF0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?SaveWICBitmapToStreamInternal@CBitmapSaver@@AEAAJPEAUIWICImagingFactory2@@AEBU_GUID@@PEAEPEAUIStream@@PEBG@Z @ 0x180266AC4 (-SaveWICBitmapToStreamInternal@CBitmapSaver@@AEAAJPEAUIWICImagingFactory2@@AEBU_GUID@@PEAEPEAUIS.c)
 */

__int64 __fastcall CBitmapSaver::SaveBitmap(CBitmapSaver *this, wchar_t *a2)
{
  unsigned __int8 *v2; // r15
  GUID *v3; // rax
  const wchar_t *v6; // rcx
  bool v7; // cf
  __int64 v8; // rcx
  wchar_t *v9; // r14
  unsigned int v10; // ebx
  HRESULT Instance; // eax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r10
  __int64 (__fastcall *v15)(__int64, _QWORD *, __int64); // r11
  struct IStream *v16; // rcx
  struct IWICImagingFactory2 *v17; // rcx
  unsigned int ppv; // [rsp+20h] [rbp-40h]
  struct IStream *v20; // [rsp+30h] [rbp-30h] BYREF
  struct IWICImagingFactory2 *v21; // [rsp+38h] [rbp-28h] BYREF
  struct _GUID v22; // [rsp+40h] [rbp-20h] BYREF

  v2 = (unsigned __int8 *)*((_QWORD *)this + 2);
  v3 = &GUID_WICPixelFormat64bppRGBAHalf;
  if ( *((_DWORD *)this + 2) != 64 )
    v3 = &GUID_WICPixelFormat32bppBGRA;
  v21 = 0LL;
  v20 = 0LL;
  v6 = a2;
  v7 = *((_QWORD *)a2 + 3) < 8uLL;
  v22 = *v3;
  if ( !v7 )
    v6 = *(const wchar_t **)a2;
  v9 = wcsrchr(v6, 0x2Eu);
  if ( !v9 )
  {
    v10 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x73u, 0LL);
    goto LABEL_16;
  }
  Instance = CoCreateInstance(
               &CLSID_WICImagingFactory2,
               0LL,
               1u,
               &GUID_7b816b45_1996_4476_b132_de9e247c8af0,
               (LPVOID *)&v21);
  v10 = Instance;
  if ( Instance < 0 )
  {
    ppv = 123;
  }
  else
  {
    Instance = (*(__int64 (__fastcall **)(struct IWICImagingFactory2 *, struct IStream **))(*(_QWORD *)v21 + 112LL))(
                 v21,
                 &v20);
    v10 = Instance;
    if ( Instance < 0 )
    {
      ppv = 126;
    }
    else
    {
      v13 = std::wstring::c_str(a2);
      Instance = v15(v14, v13, 0x40000000LL);
      v10 = Instance;
      if ( Instance < 0 )
      {
        ppv = 128;
      }
      else
      {
        Instance = CBitmapSaver::SaveWICBitmapToStreamInternal(this, v21, &v22, v2, v20, v9 + 1);
        v10 = Instance;
        if ( Instance >= 0 )
          goto LABEL_16;
        ppv = 135;
      }
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Instance, ppv, 0LL);
LABEL_16:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(struct IStream *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct IWICImagingFactory2 *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v10;
}
