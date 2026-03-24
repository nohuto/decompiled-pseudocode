/*
 * XREFs of ??1CDeviceManager@@QEAA@XZ @ 0x1800E5DB0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_DeviceManager__ @ 0x1800F91A0 (_dynamic_atexit_destructor_for__g_DeviceManager__.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@0AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x1800DFF88 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDeviceManager::~CDeviceManager(CDeviceManager *this)
{
  void *v1; // rbx
  int v2; // eax
  __int64 v3; // rcx

  v1 = (void *)qword_18034B618;
  if ( qword_18034B618 )
  {
    std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(qword_18034B618, xmmword_18034B620);
    std::_Deallocate<16,0>(v1, (*((_QWORD *)&xmmword_18034B620 + 1) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFF0uLL);
    qword_18034B618 = 0LL;
    xmmword_18034B620 = 0LL;
  }
  DeleteCriticalSection(&CriticalSection);
  if ( g_DeviceManager )
  {
    v2 = (*(__int64 (__fastcall **)(void *, GUID *))(*(_QWORD *)g_DeviceManager + 192LL))(
           g_DeviceManager,
           &CLSID_Mesh2DEffect);
    if ( v2 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x5Du, 0LL);
  }
  if ( *(&g_DeviceManager + 1) )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*(&g_DeviceManager + 1) + 16LL))(*(&g_DeviceManager + 1));
  if ( g_DeviceManager )
    (*(void (__fastcall **)(void *))(*(_QWORD *)g_DeviceManager + 16LL))(g_DeviceManager);
}
