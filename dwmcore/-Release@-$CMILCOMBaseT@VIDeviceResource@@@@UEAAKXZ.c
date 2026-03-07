__int64 __fastcall CMILCOMBaseT<IDeviceResource>::Release(__int64 a1)
{
  return CMILRefCountBaseT<IDeviceResource>::InternalRelease(a1 - 32);
}
