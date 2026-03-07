__int64 __fastcall PopFxFindDeviceAndAllocateUniqueId(__int64 a1, _QWORD *a2)
{
  UNICODE_STRING v4; // xmm0
  unsigned int v5; // ebx
  int AcpiDeviceByUniqueId; // eax
  UNICODE_STRING P; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v9; // [rsp+48h] [rbp+10h] BYREF

  v9 = 0LL;
  P = 0LL;
  if ( PopFxQueryBiosDeviceName(a1, (__int64)&P) < 0 )
  {
    v4 = *(UNICODE_STRING *)(a1 + 40);
LABEL_3:
    *(UNICODE_STRING *)(a1 + 128) = v4;
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  AcpiDeviceByUniqueId = PopFxFindAcpiDeviceByUniqueId(&P, &v9);
  v5 = AcpiDeviceByUniqueId;
  if ( AcpiDeviceByUniqueId >= 0 )
  {
    *(UNICODE_STRING *)(a1 + 128) = P;
    _InterlockedOr((volatile signed __int32 *)(a1 + 296), 0x2000u);
    goto LABEL_4;
  }
  if ( AcpiDeviceByUniqueId != -1073741738 )
  {
    v4 = P;
    goto LABEL_3;
  }
  if ( P.Buffer )
    ExFreePoolWithTag(P.Buffer, 0x4D584650u);
LABEL_5:
  *a2 = v9;
  return v5;
}
