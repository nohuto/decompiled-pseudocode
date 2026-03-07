__int64 __fastcall ACPIFanControl(__int64 a1, char a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = a2 != 0 ? 1 : 4;
  if ( *(_DWORD *)(a1 + 384) != (_DWORD)v2 )
    return ACPIDeviceInternalDeviceRequest(
             (_QWORD *)a1,
             v2,
             (void (__fastcall *)(__int64, __int64, __int64))ACPIFanPowerCallback,
             0LL,
             0);
  return result;
}
