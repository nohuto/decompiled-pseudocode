/*
 * XREFs of ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1800CE504
 * Callers:
 *     ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800CD2B0 (-CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038C50 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z @ 0x1800CE5D0 (--4-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCD3DDevice@@@Z.c)
 *     ??0CD3DDevice@@AEAA@W4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z @ 0x1800CE610 (--0CD3DDevice@@AEAA@W4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z.c)
 *     ?CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERSION@@PEAT_LARGE_INTEGER@@PEAPEAUID3D11Device1@@@Z @ 0x1800CE934 (-CreateD3D11Device@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAW4D3D_FEATURE_LEVEL@@PEAW4_QAI_DRIVERVERS.c)
 *     ?Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z @ 0x1800CF23C (-Init@CD3DDevice@@AEAAJPEAUIDXGIAdapter@@PEAUID3D11Device1@@@Z.c)
 */

__int64 __fastcall CD3DDevice::Create(struct IDXGIAdapter *a1, struct CD3DDevice **a2)
{
  CD3DDevice *v2; // rbx
  int v5; // eax
  __int64 v6; // rcx
  LPVOID v7; // rax
  __int64 v8; // rcx
  unsigned int v9; // edi
  struct CD3DDevice *v10; // rcx
  unsigned int v12; // [rsp+20h] [rbp-20h]
  CD3DDevice *v13; // [rsp+30h] [rbp-10h] BYREF
  union _LARGE_INTEGER v14; // [rsp+38h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+68h] [rbp+28h] BYREF
  enum D3D_FEATURE_LEVEL v16; // [rsp+70h] [rbp+30h] BYREF
  struct ID3D11Device1 *v17; // [rsp+78h] [rbp+38h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v17 = 0LL;
  v13 = 0LL;
  v5 = CD3DDevice::CreateD3D11Device(a1, &v16, (enum _QAI_DRIVERVERSION *)&v15, &v14, &v17);
  if ( v5 < 0 )
  {
    v12 = 339;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802EB290, 2u, v5, v12, 0LL);
    goto LABEL_14;
  }
  v7 = DefaultHeap::AllocClear(0x8E0uLL);
  if ( v7 )
    v7 = (LPVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))CD3DDevice::CD3DDevice)(
                   v7,
                   (unsigned int)v16,
                   v15,
                   (union _LARGE_INTEGER)v14.QuadPart);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::operator=(&v13, v7);
  v2 = v13;
  if ( v13 )
  {
    v5 = CD3DDevice::Init(v13, a1, v17);
    v9 = v5;
    if ( v5 >= 0 )
    {
      v10 = v2;
      v2 = 0LL;
      *a2 = v10;
      goto LABEL_7;
    }
    v12 = 346;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, &dword_1802EB290, 2u, -2147024882, 0x158u, 0LL);
LABEL_14:
  v9 = -2003304307;
LABEL_7:
  if ( v2 )
    CD3DDevice::Release(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
  return v9;
}
