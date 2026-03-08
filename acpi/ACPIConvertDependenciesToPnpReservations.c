/*
 * XREFs of ACPIConvertDependenciesToPnpReservations @ 0x1C00143C8
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C000BA98 (ACPIAddInitializationDependencies.c)
 * Callees:
 *     ACPIReserveDependencies @ 0x1C00145EC (ACPIReserveDependencies.c)
 *     WPP_RECORDER_SF_sL @ 0x1C0015638 (WPP_RECORDER_SF_sL.c)
 *     AMLIGetNameSpaceObject @ 0x1C00483B8 (AMLIGetNameSpaceObject.c)
 */

__int64 __fastcall ACPIConvertDependenciesToPnpReservations(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  int v4; // esi
  unsigned int v7; // r14d
  __int64 i; // rdi
  __int64 v9; // rbp
  int v10; // edx
  int v11; // r9d

  v3 = 0;
  v4 = 0;
  v7 = **(_DWORD **)(a3 + 32);
  if ( v7 )
  {
    for ( i = 0LL; ; i += 40LL )
    {
      v9 = *(_QWORD *)(a3 + 32);
      v3 = AMLIGetNameSpaceObject(*(void **)(i + v9 + 40));
      if ( v3 < 0 )
        break;
      v3 = ACPIReserveDependencies(a1);
      if ( v3 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)v3;
        v11 = 22;
        goto LABEL_11;
      }
      if ( ++v4 >= v7 )
        return (unsigned int)v3;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (unsigned int)v3;
    v11 = 21;
LABEL_11:
    WPP_RECORDER_SF_sL(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      21,
      v11,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      *(_QWORD *)(i + v9 + 40),
      v3);
  }
  return (unsigned int)v3;
}
