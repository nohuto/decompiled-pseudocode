/*
 * XREFs of DifZwCreateEnlistmentWrapper @ 0x1405EBF20
 * Callers:
 *     <none>
 * Callees:
 *     ZwCreateEnlistment @ 0x1404138B0 (ZwCreateEnlistment.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwCreateEnlistmentWrapper(
        PHANDLE EnlistmentHandle,
        ACCESS_MASK DesiredAccess,
        HANDLE ResourceManagerHandle,
        HANDLE TransactionHandle,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG CreateOptions,
        NOTIFICATION_MASK NotificationMask,
        PVOID EnlistmentKey)
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
  _QWORD v23[10]; // [rsp+48h] [rbp-39h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+3Fh]

  memset(v23, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(515);
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
      v23[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v17 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v13, v12, v15, v16);
      goto LABEL_9;
    }
  }
  v23[0] = 0LL;
LABEL_10:
  v23[3] = ObjectAttributes;
  v23[2] = __PAIR64__(CreateOptions, NotificationMask);
  v23[1] = EnlistmentKey;
  v23[7] = EnlistmentHandle;
  LODWORD(v23[6]) = DesiredAccess;
  v23[5] = ResourceManagerHandle;
  v23[4] = TransactionHandle;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v23);
  }
LABEL_17:
  result = ZwCreateEnlistment(
             EnlistmentHandle,
             DesiredAccess,
             ResourceManagerHandle,
             TransactionHandle,
             ObjectAttributes,
             CreateOptions,
             NotificationMask,
             EnlistmentKey);
  LODWORD(v23[8]) = result;
  if ( APIThunkContextById )
  {
    v21 = (_QWORD **)(APIThunkContextById + 6);
    v22 = *v21;
    if ( *v21 != v21 )
    {
      do
      {
        if ( v22 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v22 - 1))(v23);
        v22 = (_QWORD *)*v22;
      }
      while ( v22 != v21 );
      return v23[8];
    }
  }
  return result;
}
