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
