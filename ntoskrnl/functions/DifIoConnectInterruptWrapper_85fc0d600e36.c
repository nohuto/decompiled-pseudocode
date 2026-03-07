NTSTATUS __fastcall DifIoConnectInterruptWrapper(
        PKINTERRUPT *InterruptObject,
        PKSERVICE_ROUTINE ServiceRoutine,
        PVOID ServiceContext,
        PKSPIN_LOCK SpinLock,
        ULONG Vector,
        KIRQL Irql,
        KIRQL SynchronizeIrql,
        KINTERRUPT_MODE InterruptMode,
        BOOLEAN ShareVector,
        KAFFINITY ProcessorEnableMask,
        BOOLEAN FloatingSave)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v24; // rdi
  _QWORD *v25; // rbx
  _QWORD v26[10]; // [rsp+68h] [rbp-49h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+2Fh]

  memset(v26, 0, sizeof(v26));
  APIThunkContextById = DifGetAPIThunkContextById(149);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v20 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v20 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v26[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v20 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v16, v15, v18, v19);
      goto LABEL_9;
    }
  }
  v26[0] = 0LL;
LABEL_10:
  HIDWORD(v26[4]) = Vector;
  BYTE1(v26[4]) = Irql;
  LOBYTE(v26[4]) = SynchronizeIrql;
  HIDWORD(v26[3]) = InterruptMode;
  LOBYTE(v26[3]) = ShareVector;
  v26[2] = ProcessorEnableMask;
  LOBYTE(v26[1]) = FloatingSave;
  v26[8] = InterruptObject;
  v26[7] = ServiceRoutine;
  v26[6] = ServiceContext;
  v26[5] = SpinLock;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v26);
  }
LABEL_17:
  result = IoConnectInterrupt(
             InterruptObject,
             ServiceRoutine,
             ServiceContext,
             SpinLock,
             Vector,
             Irql,
             SynchronizeIrql,
             InterruptMode,
             ShareVector,
             ProcessorEnableMask,
             FloatingSave);
  LODWORD(v26[9]) = result;
  if ( APIThunkContextById )
  {
    v24 = (_QWORD **)(APIThunkContextById + 6);
    v25 = *v24;
    if ( *v24 != v24 )
    {
      do
      {
        if ( v25 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v25 - 1))(v26);
        v25 = (_QWORD *)*v25;
      }
      while ( v25 != v24 );
      return v26[9];
    }
  }
  return result;
}
