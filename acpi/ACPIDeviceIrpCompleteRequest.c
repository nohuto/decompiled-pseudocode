/*
 * XREFs of ACPIDeviceIrpCompleteRequest @ 0x1C001D680
 * Callers:
 *     ACPIBusIrpSetSystemPowerComplete @ 0x1C0009A00 (ACPIBusIrpSetSystemPowerComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0009C8C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C002E528 (ACPIInternalDecrementIrpReferenceCount.c)
 */

__int64 __fastcall ACPIDeviceIrpCompleteRequest(_QWORD *a1, IRP *a2, int a3)
{
  const char *v4; // rbp
  char v5; // si
  char v8; // dl
  const char *v9; // r8
  const char *v10; // rcx
  __int64 v11; // rax
  const char *v12; // rax
  __int64 v13; // rcx

  v4 = (const char *)&unk_1C00622D0;
  v5 = 0;
  v8 = 0;
  v9 = (const char *)&unk_1C00622D0;
  v10 = (const char *)&unk_1C00622D0;
  if ( a1 )
  {
    v11 = a1[1];
    v8 = (char)a1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v9 = (const char *)a1[76];
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = (const char *)a1[77];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xAu,
      0x1Au,
      (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      (char)a2,
      a3,
      v8,
      v9,
      v10);
  if ( a3 >= 0 )
  {
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  }
  else
  {
    v12 = (const char *)&unk_1C00622D0;
    if ( a1 )
    {
      v13 = a1[1];
      v5 = (char)a1;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v4 = (const char *)a1[76];
        if ( (v13 & 0x400000000000LL) != 0 )
          v12 = (const char *)a1[77];
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        0xAu,
        0x1Bu,
        (__int64)&WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
        (char)a2,
        a3,
        v5,
        v4,
        v12);
  }
  a2->IoStatus.Status = a3;
  IofCompleteRequest(a2, 0);
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
