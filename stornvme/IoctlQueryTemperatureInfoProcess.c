__int64 __fastcall IoctlQueryTemperatureInfoProcess(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 SrbDataBuffer; // rbx
  _DWORD *v8; // [rsp+88h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(a1 + 1840);
  v8 = 0LL;
  GetSrbExtension(a2);
  SrbDataBuffer = GetSrbDataBuffer(a2, &v8);
  if ( *v8 >= 0x44u )
  {
    NVMeZeroMemory((void *)(SrbDataBuffer + 28), *v8 - 28);
    *(_DWORD *)(SrbDataBuffer + 32) = 40;
    *(_DWORD *)(SrbDataBuffer + 28) = 40;
    *(_WORD *)(SrbDataBuffer + 36) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 268));
    *(_WORD *)(SrbDataBuffer + 38) = KelvinToCelsius(*(unsigned __int16 *)(v2 + 266));
    NVMeAllocateDmaBuffer(a1, 0x200u);
    *(_BYTE *)(a2 + 3) = 4;
    return (unsigned int)-1056964605;
  }
  else
  {
    *(_BYTE *)(a2 + 3) = 21;
    return (unsigned int)-1056964602;
  }
}
