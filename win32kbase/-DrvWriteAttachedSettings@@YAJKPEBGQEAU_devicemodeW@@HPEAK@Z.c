/*
 * XREFs of ?DrvWriteAttachedSettings@@YAJKPEBGQEAU_devicemodeW@@HPEAK@Z @ 0x1C002462C
 * Callers:
 *     ?DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z @ 0x1C0024194 (-DrvWriteDisplayDriverParameters@@YAJPEAUtagGRAPHICS_DEVICE@@KPEBGQEAU_devicemodeW@@HH@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall DrvWriteAttachedSettings(
        int a1,
        const unsigned __int16 *a2,
        struct _devicemodeW *const a3,
        int a4,
        unsigned int *a5)
{
  NTSTATUS v5; // ecx
  unsigned int v6; // ebx
  int ValueData; // [rsp+40h] [rbp+8h] BYREF

  ValueData = a1;
  v5 = 0;
  v6 = 11;
  if ( (unsigned __int16)(gProtocolType - 1) <= 0xFFFDu )
    return 0;
  if ( a4 )
  {
    ValueData = 0;
    return RtlWriteRegistryValue(0x40000000u, a2, L"Attach.ToDesktop", 4u, &ValueData, 4u);
  }
  else if ( a3 )
  {
    if ( (a3->dmFields & 0x20) != 0 )
    {
      ValueData = 1;
      v5 = RtlWriteRegistryValue(0x40000000u, a2, L"Attach.ToDesktop", 4u, &ValueData, 4u);
    }
    else
    {
      v6 = 9;
    }
    *a5 = v6;
    return v5;
  }
  else
  {
    return -1073741823;
  }
}
