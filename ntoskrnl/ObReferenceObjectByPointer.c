/*
 * XREFs of ObReferenceObjectByPointer @ 0x140208C70
 * Callers:
 *     EtwpAddUmRegEntry @ 0x140695184 (EtwpAddUmRegEntry.c)
 *     WmipQuerySetExecuteSI @ 0x14069C72C (WmipQuerySetExecuteSI.c)
 *     ObpParseSymbolicLinkEx @ 0x14069CAB0 (ObpParseSymbolicLinkEx.c)
 *     WmipQueryAllData @ 0x14069DF2C (WmipQueryAllData.c)
 *     ObpLookupObjectName @ 0x1406E86B0 (ObpLookupObjectName.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140700A20 (IopAllocateFoExtensionsOnCreate.c)
 *     NtImpersonateAnonymousToken @ 0x1407390D0 (NtImpersonateAnonymousToken.c)
 *     EtwpStopTrace @ 0x140745044 (EtwpStopTrace.c)
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1408215A0 (HalGetAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x140821840 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140822570 (HalpDmaAllocateChildAdapterV3.c)
 *     WmipRegisterDevice @ 0x140869828 (WmipRegisterDevice.c)
 *     EtwpRegisterPrivateSession @ 0x1409E9A6C (EtwpRegisterPrivateSession.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointer(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 BugCheckParameter4; // rbx

  if ( !ObjectType )
  {
    if ( !AccessMode )
    {
      v4 = (volatile signed __int64 *)((char *)Object - 48);
      goto LABEL_3;
    }
    return -1073741788;
  }
  v4 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != ObjectType->Index )
    return -1073741788;
LABEL_3:
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v4);
  BugCheckParameter4 = _InterlockedIncrement64(v4);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v4 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
