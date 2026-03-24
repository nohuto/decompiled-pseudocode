/*
 * XREFs of ?GetWarpDevice@CDeviceManager@@QEAAJPEAPEAVCD3DDevice@@@Z @ 0x18023897C
 * Callers:
 *     ?CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x1800306FC (-CreateRenderTargetBitmap@CaptureBitsResponse@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18005DBFC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005F710 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C07A0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?GetWarpAdapterLuid@CDisplayManager@@QEAA?AU_LUID@@XZ @ 0x180238750 (-GetWarpAdapterLuid@CDisplayManager@@QEAA-AU_LUID@@XZ.c)
 */

__int64 __fastcall CDeviceManager::GetWarpDevice(CDeviceManager *this, struct CD3DDevice **a2)
{
  unsigned int v2; // ebx
  struct CD3DDevice *v4; // rcx
  __int64 i; // rax
  struct _LUID *WarpAdapterLuid; // rax
  CDeviceManager *v7; // rcx
  int Device; // eax
  __int64 v9; // rcx
  int v10; // edi
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+40h] [rbp+8h] BYREF
  struct _LUID v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v12 = &CriticalSection;
  EnterCriticalSection(&CriticalSection);
  for ( i = qword_18034B618; i != (_QWORD)xmmword_18034B620; i += 16LL )
  {
    v4 = *(struct CD3DDevice **)i;
    if ( *(int *)(*(_QWORD *)i + 1128LL) >= 0 && *((_QWORD *)v4 + 76) )
    {
      *a2 = v4;
      CMILCOMBase::InternalAddRef(v4);
      goto LABEL_9;
    }
  }
  WarpAdapterLuid = (struct _LUID *)CDisplayManager::GetWarpAdapterLuid((struct _RTL_CRITICAL_SECTION *)v4, &v13);
  Device = CDeviceManager::GetDevice(v7, *WarpAdapterLuid, a2);
  v10 = Device;
  if ( Device < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, &dword_1802F0CF8, 2u, Device, 0xF5u, 0LL);
  v2 = v10;
LABEL_9:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v12);
  return v2;
}
