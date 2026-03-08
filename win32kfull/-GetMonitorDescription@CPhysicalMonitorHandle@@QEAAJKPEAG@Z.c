/*
 * XREFs of ?GetMonitorDescription@CPhysicalMonitorHandle@@QEAAJKPEAG@Z @ 0x1C026C86C
 * Callers:
 *     ?GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z @ 0x1C026C7DC (-GetMonitorDescription@CMonitorAPI@@QEAAJPEAXKPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPhysicalMonitorHandle::GetMonitorDescription(
        struct OPM::CMutex **this,
        unsigned int a2,
        unsigned __int16 *a3)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ebx
  struct _DEVICE_OBJECT *v8; // rcx
  NTSTATUS DeviceProperty; // eax
  char v11; // [rsp+40h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp+10h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v11, this[1]);
  v6 = 2LL * a2;
  if ( v6 > 0xFFFFFFFF )
  {
    v7 = -1073741675;
  }
  else
  {
    v7 = 0;
    v8 = (struct _DEVICE_OBJECT *)this[2];
    ResultLength = 0;
    DeviceProperty = IoGetDeviceProperty(v8, DevicePropertyDeviceDescription, v6, a3, &ResultLength);
    if ( DeviceProperty < 0 )
      v7 = DeviceProperty;
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v11);
  return v7;
}
