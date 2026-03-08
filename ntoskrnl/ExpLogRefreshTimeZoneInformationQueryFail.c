/*
 * XREFs of ExpLogRefreshTimeZoneInformationQueryFail @ 0x1409F506C
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140811500 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140267B30 (PsGetCurrentServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

int ExpLogRefreshTimeZoneInformationQueryFail()
{
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  char v1; // dl
  int v2; // r9d
  struct _LIST_ENTRY *Blink; // r8
  char v5; // [rsp+30h] [rbp-59h] BYREF
  char v6; // [rsp+31h] [rbp-58h] BYREF
  int v7; // [rsp+34h] [rbp-55h] BYREF
  int v8; // [rsp+38h] [rbp-51h] BYREF
  int Flink_high; // [rsp+3Ch] [rbp-4Dh] BYREF
  int Flink; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+50h] [rbp-39h] BYREF
  int *v12; // [rsp+70h] [rbp-19h]
  __int64 v13; // [rsp+78h] [rbp-11h]
  int *v14; // [rsp+80h] [rbp-9h]
  __int64 v15; // [rsp+88h] [rbp-1h]
  int *p_Flink_high; // [rsp+90h] [rbp+7h]
  __int64 v17; // [rsp+98h] [rbp+Fh]
  int *p_Flink; // [rsp+A0h] [rbp+17h]
  __int64 v19; // [rsp+A8h] [rbp+1Fh]
  char *v20; // [rsp+B0h] [rbp+27h]
  __int64 v21; // [rsp+B8h] [rbp+2Fh]
  char *v22; // [rsp+C0h] [rbp+37h]
  __int64 v23; // [rsp+C8h] [rbp+3Fh]

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  Blink = CurrentServerSiloGlobals[78].Blink;
  if ( (unsigned int)dword_140C06760 > 5 )
  {
    v7 = v2;
    v12 = &v7;
    v8 = (int)Blink[62].Blink;
    v14 = &v8;
    Flink_high = HIDWORD(Blink[27].Flink);
    p_Flink_high = &Flink_high;
    Flink = (int)Blink[27].Flink;
    p_Flink = &Flink;
    v5 = ExpRealTimeIsUniversal;
    v20 = &v5;
    v22 = &v6;
    v6 = v1;
    v13 = 4LL;
    v15 = 4LL;
    v17 = 4LL;
    v19 = 4LL;
    v21 = 1LL;
    v23 = 1LL;
    LODWORD(CurrentServerSiloGlobals) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140C06760,
                                          (unsigned __int8 *)byte_140035B91,
                                          0LL,
                                          0LL,
                                          8u,
                                          &v11);
  }
  return (int)CurrentServerSiloGlobals;
}
