/*
 * XREFs of LdrpTraceLoadMUIDll @ 0x1800E1624
 * Callers:
 *     LdrpAccessResourceData @ 0x180021500 (LdrpAccessResourceData.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180034EA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrResSearchResource @ 0x1800554B0 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 *     LdrpResGetResourceDirectory @ 0x180056300 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x180056708 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetMappingSize @ 0x1800578D0 (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x180057BE8 (LdrResFallbackLangList.c)
 *     RtlpResUltimateFallbackInfo @ 0x180057FB8 (RtlpResUltimateFallbackInfo.c)
 *     LdrResGetRCConfig @ 0x1800580E0 (LdrResGetRCConfig.c)
 *     LdrMapAndVerifyResourceFile @ 0x180058928 (LdrMapAndVerifyResourceFile.c)
 *     LdrFindResource_U @ 0x180071690 (LdrFindResource_U.c)
 *     LdrFindResourceEx_U @ 0x1800818D0 (LdrFindResourceEx_U.c)
 *     LdrResRelease @ 0x18008A4D0 (LdrResRelease.c)
 *     LdrpMUIEtwOutput @ 0x1800E133C (LdrpMUIEtwOutput.c)
 *     LdrpResFileSize @ 0x1800E4060 (LdrpResFileSize.c)
 *     LdrpResMapFile @ 0x1800E41D4 (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800E45FC (LdrpResSearchResourceHandle.c)
 *     LdrpResValidateFilePath @ 0x1800E4D88 (LdrpResValidateFilePath.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009E090 (NtTraceEvent.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 */

NTSTATUS __fastcall LdrpTraceLoadMUIDll(unsigned __int16 *a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int16 v3; // ax
  unsigned int v4; // edi
  _OWORD Fields[3]; // [rsp+20h] [rbp-268h] BYREF
  _WORD v7[272]; // [rsp+50h] [rbp-238h] BYREF

  v2 = a2;
  v3 = *a1 & 0xFFFE;
  memset(Fields, 0, sizeof(Fields));
  if ( v3 >= 0x212u )
    v4 = 265;
  else
    v4 = *a1 >> 1;
  memmove(v7, *((const void **)a1 + 1), 2LL * v4);
  v7[v4] = 0;
  BYTE4(Fields[0]) = 0;
  LOWORD(Fields[0]) = 2 * (v4 + 25);
  *(GUID *)((char *)&Fields[1] + 8) = LoadMUIDllGuid;
  return NtTraceEvent((HANDLE)v2, 0x100u, 0x30u, Fields);
}
