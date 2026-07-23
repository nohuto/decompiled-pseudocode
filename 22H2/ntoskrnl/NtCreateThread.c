/*
 * XREFs of NtCreateThread @ 0x140907060
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSanitizeContextFlags @ 0x14033F584 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PspCreateThread @ 0x1406C1A0C (PspCreateThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtCreateThread(
        PHANDLE ThreadHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE ProcessHandle,
        PCLIENT_ID ClientId,
        PCONTEXT ThreadContext,
        PINITIAL_TEB InitialTeb,
        BOOLEAN CreateSuspended)
{
  PCONTEXT v12; // rbx
  NTSTATUS result; // eax
  char PreviousMode; // dl
  __int64 v15; // rcx
  __int64 v16; // rcx
  _OWORD *v17; // rax
  __int64 v18; // rcx
  _INITIAL_TEB::$51A6825BF626353FB0168B5A96FF6713 OldInitialTeb; // xmm0
  unsigned __int64 v20; // rcx
  __int16 v21; // ax
  PCONTEXT v22; // [rsp+78h] [rbp-5B0h]
  _OWORD v23[5]; // [rsp+90h] [rbp-598h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-548h]
  struct _KTHREAD *v25; // [rsp+E8h] [rbp-540h]
  _OWORD v26[2]; // [rsp+F0h] [rbp-538h] BYREF
  _BYTE v27[152]; // [rsp+110h] [rbp-518h] BYREF
  unsigned __int64 v28; // [rsp+1A8h] [rbp-480h]

  v12 = ThreadContext;
  memset(v23, 0, 0x48uLL);
  memset(v26, 0, sizeof(v26));
  if ( !ThreadContext )
    return -1073741811;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v15 = (__int64)ThreadHandle;
    if ( (unsigned __int64)ThreadHandle >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v15 = *(_QWORD *)v15;
    if ( ClientId )
    {
      if ( ((unsigned __int8)ClientId & 3) != 0 )
        goto LABEL_16;
      v16 = (__int64)ClientId;
      if ( (unsigned __int64)ClientId >= 0x7FFFFFFF0000LL )
        v16 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v16 = *(_BYTE *)v16;
      *(_BYTE *)(v16 + 15) = *(_BYTE *)(v16 + 15);
    }
    if ( ((unsigned __int8)ThreadContext & 0xF) == 0 )
    {
      v17 = v27;
      v18 = 9LL;
      do
      {
        *v17 = *(_OWORD *)&v12->P1Home;
        v17[1] = *(_OWORD *)&v12->P3Home;
        v17[2] = *(_OWORD *)&v12->P5Home;
        v17[3] = *(_OWORD *)&v12->ContextFlags;
        v17[4] = *(_OWORD *)&v12->SegGs;
        v17[5] = *(_OWORD *)&v12->Dr1;
        v17[6] = *(_OWORD *)&v12->Dr3;
        v17 += 8;
        *(v17 - 1) = *(_OWORD *)&v12->Dr7;
        v12 = (PCONTEXT)((char *)v12 + 128);
        --v18;
      }
      while ( v18 );
      *v17 = *(_OWORD *)&v12->P1Home;
      v17[1] = *(_OWORD *)&v12->P3Home;
      v17[2] = *(_OWORD *)&v12->P5Home;
      v17[3] = *(_OWORD *)&v12->ContextFlags;
      v17[4] = *(_OWORD *)&v12->SegGs;
      v22 = (PCONTEXT)v27;
      v28 = (v28 & 0xFFFFFFFFFFFFFFF0uLL) - 40;
      if ( ((unsigned __int8)InitialTeb & 3) == 0 )
      {
        v12 = (PCONTEXT)v27;
        goto LABEL_18;
      }
    }
LABEL_16:
    ExRaiseDatatypeMisalignment();
  }
  v22 = ThreadContext;
LABEL_18:
  result = RtlpSanitizeContextFlags(&v12->ContextFlags, PreviousMode);
  if ( result >= 0 )
  {
    v12->ContextFlags &= 0x10001Fu;
    *ThreadHandle = 0LL;
    OldInitialTeb = InitialTeb->OldInitialTeb;
    v23[0] = InitialTeb->OldInitialTeb;
    if ( v23[0] == 0LL )
    {
      v23[0] = OldInitialTeb;
      v23[1] = *(_OWORD *)&InitialTeb->StackBase;
      *(_QWORD *)&v23[2] = InitialTeb->StackAllocationBase;
      if ( *(_QWORD *)&v23[2] )
      {
        v25 = KeGetCurrentThread();
        v20 = v25->ApcState.Process[1].AffinityPadding[10];
        if ( v20 )
        {
          v21 = *(_WORD *)(v20 + 8);
          if ( v21 == 332 || v21 == 452 )
          {
            *((_QWORD *)&v23[2] + 1) = *(_QWORD *)&v23[1];
            v23[3] = *(_OWORD *)((char *)&v23[1] + 8);
            memset(&v23[1], 0, 24);
          }
        }
        LOBYTE(v26[0]) = 1;
        return PspCreateThread(
                 (__int64)ThreadHandle,
                 DesiredAccess,
                 (__int64)ObjectAttributes,
                 (ULONG_PTR)ProcessHandle,
                 0LL,
                 0LL,
                 (__int64)ClientId,
                 (__int64)v22,
                 (__int64)v23,
                 CreateSuspended == 1,
                 0LL,
                 0LL,
                 (__int64)v26);
      }
      else
      {
        return -1073741811;
      }
    }
    else
    {
      return -1073741637;
    }
  }
  return result;
}
