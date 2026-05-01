/*
 * XREFs of wil_StagingConfig_RecordFeatureUsage @ 0x18009574C
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x18001EED0 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     wil_details_StagingConfig_FireNotification @ 0x180095C8C (wil_details_StagingConfig_FireNotification.c)
 *     wil_details_StagingConfig_Free @ 0x180095E38 (wil_details_StagingConfig_Free.c)
 *     wil_details_StagingConfig_Load @ 0x180095E8C (wil_details_StagingConfig_Load.c)
 */

__int64 __fastcall wil_StagingConfig_RecordFeatureUsage(unsigned int a1, unsigned __int16 a2, __int64 a3)
{
  unsigned int v5; // edi
  unsigned int v6; // ebx
  _BYTE v8[96]; // [rsp+30h] [rbp-158h] BYREF
  _BYTE v9[208]; // [rsp+90h] [rbp-F8h] BYREF

  v5 = a3;
  v6 = wil_details_StagingConfig_Load(v8, 0LL, a3, v9);
  if ( !v6 )
  {
    v6 = wil_details_StagingConfig_FireNotification(v8, a1, a2, v5);
    wil_details_StagingConfig_Free(v8);
  }
  return v6;
}
