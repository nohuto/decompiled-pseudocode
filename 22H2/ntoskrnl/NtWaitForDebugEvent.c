/*
 * XREFs of NtWaitForDebugEvent @ 0x1408864A0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     DbgkpConvertKernelToUserStateChange @ 0x1408849A4 (DbgkpConvertKernelToUserStateChange.c)
 *     DbgkpOpenHandles @ 0x140884C84 (DbgkpOpenHandles.c)
 */

NTSTATUS __cdecl NtWaitForDebugEvent(
        HANDLE DebugObjectHandle,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PDBGUI_WAIT_STATE_CHANGE WaitStateChange)
{
  char v7; // r14
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v9; // rcx
  NTSTATUS result; // eax
  BOOLEAN v11; // r9
  char *v12; // rdi
  _QWORD *v13; // rdx
  __int64 i; // rax
  __int64 v15; // rbx
  int v16; // r8d
  _QWORD *v17; // rcx
  int v18; // ebx
  bool v19; // sf
  unsigned __int64 *v20; // rsi
  LONGLONG QuadPart; // [rsp+38h] [rbp-150h] BYREF
  PLARGE_INTEGER Timeouta; // [rsp+40h] [rbp-148h]
  PVOID Object; // [rsp+48h] [rbp-140h] BYREF
  __int64 v25; // [rsp+50h] [rbp-138h]
  PVOID v26; // [rsp+58h] [rbp-130h]
  PVOID v27; // [rsp+60h] [rbp-128h]
  _OWORD v28[12]; // [rsp+80h] [rbp-108h] BYREF

  Timeouta = Timeout;
  v7 = 0;
  QuadPart = 0LL;
  v25 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  memset(v28, 0, 0xB8uLL);
  if ( Timeouta )
  {
    QuadPart = Timeouta->QuadPart;
    Timeouta = (PLARGE_INTEGER)&QuadPart;
    v25 = MEMORY[0xFFFFF78000000014];
  }
  if ( PreviousMode )
  {
    v9 = (__int64)WaitStateChange;
    if ( (unsigned __int64)WaitStateChange >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 183) = *(_BYTE *)(v9 + 183);
  }
  Object = 0LL;
  result = ObReferenceObjectByHandle(DebugObjectHandle, 1u, DbgkDebugObjectType, PreviousMode, &Object, 0LL);
  if ( result >= 0 )
  {
    v26 = 0LL;
    v27 = 0LL;
    v11 = Alertable;
    v12 = (char *)Object;
    while ( 1 )
    {
      v18 = KeWaitForSingleObject(v12, Executive, PreviousMode, v11, Timeouta);
      if ( v18 < 0 || v18 == 192 || (unsigned int)(v18 - 257) <= 1 )
        break;
      ExAcquireFastMutex((PFAST_MUTEX)(v12 + 24));
      if ( (*((_DWORD *)v12 + 24) & 1) != 0 )
      {
        v18 = -1073740972;
      }
      else
      {
        v13 = v12 + 80;
        for ( i = *((_QWORD *)v12 + 10); ; i = *(_QWORD *)i )
        {
          if ( (_QWORD *)i == v13 )
          {
            KeResetEvent((PRKEVENT)v12);
            goto LABEL_24;
          }
          v15 = i;
          v16 = *(_DWORD *)(i + 76);
          if ( (v16 & 5) == 0 )
          {
            v7 = 1;
            v17 = (_QWORD *)*v13;
            if ( *v13 != i )
            {
              while ( *(_QWORD *)(i + 40) != v17[5] )
              {
                v17 = (_QWORD *)*v17;
                if ( v17 == (_QWORD *)i )
                  goto LABEL_19;
              }
              *(_DWORD *)(i + 76) = v16 | 4;
              *(_QWORD *)(i + 80) = 0LL;
              v7 = 0;
            }
LABEL_19:
            if ( v7 )
              break;
          }
        }
        v26 = *(PVOID *)(i + 56);
        v27 = *(PVOID *)(i + 64);
        ObfReferenceObjectWithTag(v27, 0x4F676244u);
        ObfReferenceObjectWithTag(v26, 0x4F676244u);
        DbgkpConvertKernelToUserStateChange((__int64)v28, v15);
        *(_DWORD *)(v15 + 76) |= 1u;
LABEL_24:
        v18 = 0;
      }
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v12 + 24));
      if ( v18 < 0 )
        break;
      if ( v7 )
      {
        DbgkpOpenHandles((__int64)v28, v26, v27);
        ObfDereferenceObjectWithTag(v27, 0x4F676244u);
        ObfDereferenceObjectWithTag(v26, 0x4F676244u);
        break;
      }
      v7 = 0;
      if ( QuadPart < 0 )
      {
        v19 = MEMORY[0xFFFFF78000000014] - v25 + QuadPart < 0;
        QuadPart += MEMORY[0xFFFFF78000000014] - v25;
        v25 = MEMORY[0xFFFFF78000000014];
        v12 = (char *)Object;
        if ( !v19 )
        {
          v18 = 258;
          break;
        }
      }
      v11 = Alertable;
    }
    HalPutDmaAdapter((PADAPTER_OBJECT)v12);
    *(_OWORD *)&WaitStateChange->NewState = v28[0];
    *(_OWORD *)&WaitStateChange->AppClientId.UniqueThread = v28[1];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 1) = v28[2];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 3) = v28[3];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 5) = v28[4];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 7) = v28[5];
    *(_OWORD *)(&WaitStateChange->StateInfo.UnloadDll + 9) = v28[6];
    v20 = &WaitStateChange->StateInfo.Exception.ExceptionRecord.ExceptionInformation[9];
    *((_OWORD *)v20 - 1) = v28[7];
    *(_OWORD *)v20 = v28[8];
    *((_OWORD *)v20 + 1) = v28[9];
    *((_OWORD *)v20 + 2) = v28[10];
    v20[6] = *(_QWORD *)&v28[11];
    return v18;
  }
  return result;
}
