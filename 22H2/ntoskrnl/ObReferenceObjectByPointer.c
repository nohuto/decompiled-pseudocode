/*
 * XREFs of ObReferenceObjectByPointer @ 0x14035F490
 * Callers:
 *     EtwpAddUmRegEntry @ 0x1405EAD90 (EtwpAddUmRegEntry.c)
 *     ObpLookupObjectName @ 0x140641640 (ObpLookupObjectName.c)
 *     WmipQueryAllData @ 0x1406B1EB4 (WmipQueryAllData.c)
 *     NtImpersonateAnonymousToken @ 0x14070DED0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x14070EB50 (ObpParseSymbolicLinkEx.c)
 *     EtwpStopTrace @ 0x14071185C (EtwpStopTrace.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071F81C (IopAllocateFoExtensionsOnCreate.c)
 *     WmipRegisterDevice @ 0x1407547F8 (WmipRegisterDevice.c)
 *     WmipQuerySetExecuteSI @ 0x140756A60 (WmipQuerySetExecuteSI.c)
 *     HalGetAdapterV2 @ 0x140763E30 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1407640AC (HalpDmaAllocateChildAdapterV2.c)
 *     HalGetAdapterV3 @ 0x1407C3B70 (HalGetAdapterV3.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x1407C3E68 (HalpDmaAllocateChildAdapterV3.c)
 *     EtwpRegisterPrivateSession @ 0x14093F3F8 (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140564C68 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  bool v5; // zf
  signed __int64 BugCheckParameter4; // rbx

  if ( ObjectType )
    v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)] == (_QWORD)ObjectType;
  else
    v5 = AccessMode == 0;
  if ( !v5 )
    return -1073741788;
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)Object - 6);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 0x10uLL, BugCheckParameter4);
  return 0;
}
