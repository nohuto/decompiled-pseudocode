/*
 * XREFs of ?ProcessGetAppSessionGuid@@YA?AU_GUID@@PEAUtagPROCESSINFO@@@Z @ 0x1C0258AEC
 * Callers:
 *     ?HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL_INFO@@IW4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C02587D4 (-HandleIntObjUsageTelemetry@@YAXPEAURawInputManagerDeviceObject@@PEAUtagWND@@UtagINTERACTIVECTRL.c)
 * Callees:
 *     <none>
 */

struct _GUID *__fastcall ProcessGetAppSessionGuid(struct _GUID *__return_ptr retstr, struct tagPROCESSINFO *a2)
{
  unsigned int v3; // eax
  struct _KPROCESS *v4; // rcx

  *(_QWORD *)retstr->Data4 = 0LL;
  retstr->Data1 = *((_DWORD *)a2 + 14);
  v3 = MEMORY[0xFFFFF780000002C4];
  retstr->Data2 = gSessionId;
  if ( v3 > 0xFFFF )
    LOWORD(v3) = -1;
  v4 = *(struct _KPROCESS **)a2;
  retstr->Data3 = v3;
  *(_QWORD *)retstr->Data4 = PsGetProcessCreateTimeQuadPart(v4);
  return retstr;
}
