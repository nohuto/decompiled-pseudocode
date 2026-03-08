/*
 * XREFs of PnpNotifyDriverCallback @ 0x1406F55F4
 * Callers:
 *     PnpNotifyTargetDeviceChange @ 0x14068C820 (PnpNotifyTargetDeviceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     PnpNotifyDeviceClassChange @ 0x1406F5818 (PnpNotifyDeviceClassChange.c)
 *     PnpNotifyHwProfileChange @ 0x14095372C (PnpNotifyHwProfileChange.c)
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x140953980 (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PipKsrNotifyDrivers @ 0x14096A3D0 (PipKsrNotifyDrivers.c)
 * Callees:
 *     MmGetSessionById @ 0x14022A4F0 (MmGetSessionById.c)
 *     MmIsSessionAddress @ 0x140239ED0 (MmIsSessionAddress.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     MmDetachSession @ 0x1402EA460 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402EA500 (MmAttachSession.c)
 *     PsGetCurrentProcessSessionId @ 0x140343AA0 (PsGetCurrentProcessSessionId.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpNotifyDriverCallback(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(__int64, _QWORD); // rdi
  BOOL IsSessionAddress; // eax
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // r13
  unsigned __int8 v10; // r14
  LONG SpareLong; // r12d
  unsigned int CombinedApcDisable; // ebp
  int v13; // eax
  int v14; // edi
  struct _KPROCESS *SessionById; // rax
  struct _KPROCESS *v17; // rsi
  int v18; // eax
  __int64 v19; // rcx
  _WORD *v20; // rcx
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  v3 = *(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32);
  memset(&ApcState, 0, sizeof(ApcState));
  IsSessionAddress = MmIsSessionAddress((__int64)v3);
  if ( !IsSessionAddress || *(_QWORD *)(a1 + 24) )
  {
    CurrentIrql = 0;
    v10 = 0;
    SpareLong = 0;
    CombinedApcDisable = 0;
    if ( !IsSessionAddress
      || (KeGetCurrentThread()->ApcState.Process[1].DirectoryTableBase & 0x1000000000000LL) != 0
      && *(_DWORD *)(a1 + 20) == (unsigned int)PsGetCurrentProcessSessionId() )
    {
      CurrentIrql = KeGetCurrentIrql();
      SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
      v13 = v3(a2, *(_QWORD *)(a1 + 40));
      v10 = KeGetCurrentIrql();
      CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
      if ( a3 )
        *a3 = v13;
      v14 = 0;
    }
    else
    {
      SessionById = (struct _KPROCESS *)MmGetSessionById(*(unsigned int *)(a1 + 20), v8);
      v17 = SessionById;
      if ( !SessionById )
        return (unsigned int)-1073741823;
      v14 = MmAttachSession(SessionById, &ApcState);
      if ( v14 >= 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        SpareLong = KeGetCurrentThread()->WaitBlock[3].SpareLong;
        v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 32))(a2, *(_QWORD *)(a1 + 40));
        v10 = KeGetCurrentIrql();
        CombinedApcDisable = KeGetCurrentThread()->CombinedApcDisable;
        if ( a3 )
          *a3 = v18;
        v14 = MmDetachSession((__int64)v17, ($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
      }
      ObfDereferenceObject(v17);
    }
    if ( CurrentIrql != v10 || SpareLong != CombinedApcDisable )
    {
      v19 = *(_QWORD *)(a1 + 48);
      if ( v19 )
      {
        IoAddTriageDumpDataBlock(v19, (PVOID)(unsigned int)*(__int16 *)(v19 + 2));
        v20 = (_WORD *)(*(_QWORD *)(a1 + 48) + 56LL);
        if ( *v20 )
        {
          IoAddTriageDumpDataBlock((ULONG)v20, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(a1 + 48) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(a1 + 48) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0xAuLL, *(_QWORD *)(a1 + 48), v10, CombinedApcDisable);
    }
    return (unsigned int)v14;
  }
  return 3221225485LL;
}
