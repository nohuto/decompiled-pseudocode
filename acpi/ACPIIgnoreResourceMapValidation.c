/*
 * XREFs of ACPIIgnoreResourceMapValidation @ 0x1C003AF14
 * Callers:
 *     ACPIRangeValidatePciResources @ 0x1C003B3A4 (ACPIRangeValidatePciResources.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000ABD8 (WPP_RECORDER_SF_.c)
 */

char __fastcall ACPIIgnoreResourceMapValidation(struct _IO_RESOURCE_DESCRIPTOR *a1)
{
  char v1; // bl
  __int64 *v2; // rax
  int v3; // edx
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  if ( (__int64 *)AcpiIgnoreResourceMapValidationList != &AcpiIgnoreResourceMapValidationList )
  {
    RtlIoDecodeMemIoResource(a1, &v7, &v6, &v5);
    v2 = (__int64 *)AcpiIgnoreResourceMapValidationList;
    if ( (__int64 *)AcpiIgnoreResourceMapValidationList != &AcpiIgnoreResourceMapValidationList )
    {
      v3 = v6;
      while ( v2[2] != v6 || v2[3] != v5 )
      {
        v2 = (__int64 *)*v2;
        if ( v2 == &AcpiIgnoreResourceMapValidationList )
          return v1;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v3) = 4;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v3,
          22,
          14,
          (__int64)&WPP_1fd0c010928a3334a25fba642ba00601_Traceguids);
      }
      return 1;
    }
  }
  return v1;
}
