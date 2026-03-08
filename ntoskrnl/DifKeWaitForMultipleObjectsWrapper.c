/*
 * XREFs of DifKeWaitForMultipleObjectsWrapper @ 0x1405E3EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1403516C0 (KeWaitForMultipleObjects.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifKeWaitForMultipleObjectsWrapper(
        ULONG Count,
        PVOID Object[],
        WAIT_TYPE WaitType,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray)
{
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v21; // rdi
  _QWORD *v22; // rbx
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int64 v26; // [rsp+70h] [rbp-10h]
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(319);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v17 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v17 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v23 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v17 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v13, v12, v15, v16);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v23 = 0LL;
LABEL_10:
  BYTE9(v24) = WaitMode;
  BYTE8(v24) = Alertable;
  *(_QWORD *)&v24 = Timeout;
  *((_QWORD *)&v23 + 1) = WaitBlockArray;
  LODWORD(v26) = Count;
  *((_QWORD *)&v25 + 1) = Object;
  LODWORD(v25) = WaitType;
  HIDWORD(v24) = WaitReason;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v23);
  }
LABEL_17:
  result = KeWaitForMultipleObjects(Count, Object, WaitType, WaitReason, WaitMode, Alertable, Timeout, WaitBlockArray);
  HIDWORD(v26) = result;
  if ( APIThunkContextById )
  {
    v21 = (_QWORD **)(APIThunkContextById + 6);
    v22 = *v21;
    if ( *v21 != v21 )
    {
      do
      {
        if ( v22 != (_QWORD *)16 )
          ((void (__fastcall *)(__int128 *))*(v22 - 1))(&v23);
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v21 );
      return HIDWORD(v26);
    }
  }
  return result;
}
