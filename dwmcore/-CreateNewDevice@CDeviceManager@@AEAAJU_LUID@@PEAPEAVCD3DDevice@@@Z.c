/*
 * XREFs of ?CreateNewDevice@CDeviceManager@@AEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800CD2B0
 * Callers:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z @ 0x1800CD110 (-InternalGetAdapter@CDisplayManager@@AEAAJU_LUID@@PEAPEAUIDXGIAdapter1@@@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAVCD3DDevice@@@?$vector@VDeviceInfo@CDeviceManager@@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@QEAAPEAVDeviceInfo@CDeviceManager@@QEAV23@AEAPEAVCD3DDevice@@@Z @ 0x1800CD348 (--$_Emplace_reallocate@AEAPEAVCD3DDevice@@@-$vector@VDeviceInfo@CDeviceManager@@V-$allocator@VDe.c)
 *     ?ResetTokenThread@CComposition@@QEAAJXZ @ 0x1800CD840 (-ResetTokenThread@CComposition@@QEAAJXZ.c)
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1800CE504 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CDeviceManager::CreateNewDevice(CDeviceManager *this, struct _LUID a2, struct CD3DDevice **a3)
{
  int Adapter; // eax
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct CD3DDevice *v11; // rcx
  int v13; // [rsp+50h] [rbp+18h] BYREF
  struct IDXGIAdapter *v14; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0LL;
  v14 = 0LL;
  Adapter = CDisplayManager::InternalGetAdapter(this, a2, (struct IDXGIAdapter1 **)&v14);
  v13 = Adapter;
  v7 = Adapter;
  if ( Adapter < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_180355808, 2u, Adapter, 0x51u, 0LL);
    TranslateDXGIorD3DErrorInContext(v7, 4, &v13);
    v7 = v13;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1802EB290, 2u, v7, 0x15Du, 0LL);
  }
  else
  {
    v8 = CD3DDevice::Create(v14, a3);
    v7 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802EB290, 2u, v8, 0x15Fu, 0LL);
    }
    else
    {
      v10 = *((_QWORD *)this + 8);
      if ( v10 == *((_QWORD *)this + 9) )
      {
        std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>((char *)this + 56, v10, a3);
      }
      else
      {
        v11 = *a3;
        *(_BYTE *)(v10 + 8) = 0;
        *(_QWORD *)v10 = v11;
        if ( v11 )
          CMILRefCountImpl::AddReference((struct CD3DDevice *)((char *)v11 + 8));
        *((_QWORD *)this + 8) += 16LL;
      }
      CComposition::ResetTokenThread(v11);
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v14);
  return (unsigned int)v7;
}
