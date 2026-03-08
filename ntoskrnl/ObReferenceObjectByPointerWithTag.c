/*
 * XREFs of ObReferenceObjectByPointerWithTag @ 0x14033E060
 * Callers:
 *     PoPushPowerStateTransitionRecordWithCallback @ 0x14058CC64 (PoPushPowerStateTransitionRecordWithCallback.c)
 *     DifObReferenceObjectByPointerWithTagWrapper @ 0x1405E63A0 (DifObReferenceObjectByPointerWithTagWrapper.c)
 *     DifObReferenceObjectByPointerWrapper @ 0x1405E64F0 (DifObReferenceObjectByPointerWrapper.c)
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x1407C95D0 (NtOpenProcessTokenEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x140580738 (ObpPushStackInfo.c)
 */

NTSTATUS __stdcall ObReferenceObjectByPointerWithTag(
        PVOID Object,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE ObjectType,
        KPROCESSOR_MODE AccessMode,
        ULONG Tag)
{
  volatile signed __int64 *v5; // rdi
  signed __int64 BugCheckParameter4; // rbx

  if ( !ObjectType )
  {
    if ( !AccessMode )
    {
      v5 = (volatile signed __int64 *)((char *)Object - 48);
      goto LABEL_3;
    }
    return -1073741788;
  }
  v5 = (volatile signed __int64 *)((char *)Object - 48);
  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*((char *)Object - 24) ^ ((unsigned __int16)((_WORD)Object - 48) >> 8))) != ObjectType->Index )
    return -1073741788;
LABEL_3:
  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)v5);
  BugCheckParameter4 = _InterlockedIncrement64(v5);
  if ( BugCheckParameter4 <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(v5 + 6), 0x10uLL, BugCheckParameter4);
  return 0;
}
