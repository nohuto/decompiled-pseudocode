/*
 * XREFs of ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C00CDDE8
 * Callers:
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C00CDD24 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0084110 (LockProcessByClientId.c)
 */

void *__fastcall CBaseInput::GetSensorHostingProcessHandle(CBaseInput *this)
{
  __int64 v1; // rcx
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  void *Handle; // [rsp+50h] [rbp+8h] BYREF
  PVOID Object; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((int *)this + 350);
  Object = 0LL;
  Handle = (void *)-1LL;
  if ( (int)LockProcessByClientId(v1, &Object) >= 0 )
  {
    v2 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x20000u, 0LL, 0, &Handle);
    v3 = (__int64)Handle;
    if ( v2 < 0 )
      v3 = -1LL;
    Handle = (void *)v3;
    ObfDereferenceObject(Object);
  }
  return Handle;
}
