/*
 * XREFs of McTemplateU0pqxxxxffff_EventWriteTransfer @ 0x140061838
 * Callers:
 *     ?GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z @ 0x140060610 (-GetCurrentPadding@CCrossProcessBaseEndpoint@@UEAAXPEA_JPEAUAE_CURRENT_POSITION@@@Z.c)
 *     ?GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z @ 0x140062680 (-GetPosition@CCrossProcessClientInputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x140062F40 (-GetPosition@CCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 *     ?GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z @ 0x1400631A8 (-GetPosition_NonOffload@CCrossProcessClientOutputEndpoint@@IEAAJPEA_K0@Z.c)
 *     ?GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z @ 0x14006C710 (-GetPosition@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x140051084 (McGenEventWrite_EventWriteTransfer.c)
 */

ULONG __fastcall McTemplateU0pqxxxxffff_EventWriteTransfer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+30h] [rbp-A9h] BYREF
  __int64 *v14; // [rsp+40h] [rbp-99h]
  __int64 v15; // [rsp+48h] [rbp-91h]
  int *v16; // [rsp+50h] [rbp-89h]
  __int64 v17; // [rsp+58h] [rbp-81h]
  char *v18; // [rsp+60h] [rbp-79h]
  __int64 v19; // [rsp+68h] [rbp-71h]
  char *v20; // [rsp+70h] [rbp-69h]
  __int64 v21; // [rsp+78h] [rbp-61h]
  char *v22; // [rsp+80h] [rbp-59h]
  __int64 v23; // [rsp+88h] [rbp-51h]
  char *v24; // [rsp+90h] [rbp-49h]
  __int64 v25; // [rsp+98h] [rbp-41h]
  char *v26; // [rsp+A0h] [rbp-39h]
  __int64 v27; // [rsp+A8h] [rbp-31h]
  char *v28; // [rsp+B0h] [rbp-29h]
  __int64 v29; // [rsp+B8h] [rbp-21h]
  char *v30; // [rsp+C0h] [rbp-19h]
  __int64 v31; // [rsp+C8h] [rbp-11h]
  char *v32; // [rsp+D0h] [rbp-9h]
  __int64 v33; // [rsp+D8h] [rbp-1h]
  __int64 v34; // [rsp+110h] [rbp+37h] BYREF
  int v35; // [rsp+118h] [rbp+3Fh] BYREF

  v35 = a4;
  v34 = a3;
  v15 = 8LL;
  v14 = &v34;
  v17 = 4LL;
  v16 = &v35;
  v19 = 8LL;
  v18 = &a5;
  v20 = &a6;
  v22 = &a7;
  v24 = &a8;
  v26 = &a9;
  v28 = &a10;
  v30 = &a11;
  v32 = &a12;
  v21 = 8LL;
  v23 = 8LL;
  v25 = 8LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  v33 = 4LL;
  return McGenEventWrite_EventWriteTransfer(a1, &AudioCore_AEGeneric, a3, 0xBu, &v13);
}
