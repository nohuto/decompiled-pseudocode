/*
 * XREFs of ??1DeviceObjectPointer@Io@@QEAA@XZ @ 0x1C022A7B0
 * Callers:
 *     ?GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z @ 0x1C022A858 (-GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z.c)
 *     ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C022AB60 (-SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Io::DeviceObjectPointer::~DeviceObjectPointer(Io::DeviceObjectPointer *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = (void *)*((_QWORD *)this + 1);
  if ( v3 )
    ObfDereferenceObject(v3);
  if ( *(_QWORD *)this )
    ZwClose(*(HANDLE *)this);
}
