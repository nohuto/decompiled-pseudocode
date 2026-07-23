/*
 * XREFs of NtAlpcQueryInformation @ 0x1406612C0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     AlpcpPortQueryBasicInfo @ 0x1406614F0 (AlpcpPortQueryBasicInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14066154C (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpWaitForPortReferences @ 0x14066164C (AlpcpWaitForPortReferences.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1406616E8 (AlpcpPortQueryConnectedSidInfo.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     AlpcpPortQueryServerInfo @ 0x1408C3150 (AlpcpPortQueryServerInfo.c)
 *     ExRaiseAccessViolation @ 0x140956140 (ExRaiseAccessViolation.c)
 */

NTSTATUS __cdecl NtAlpcQueryInformation(
        HANDLE PortHandle,
        ALPC_PORT_INFORMATION_CLASS PortInformationClass,
        PVOID PortInformation,
        ULONG Length,
        PULONG ReturnLength)
{
  PVOID v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  PULONG v14; // r14
  __int64 v15; // rcx
  struct _DMA_ADAPTER *v16; // rdi
  int v17; // esi
  int ServerSessionInfo; // eax
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  __int32 v22; // r15d
  __int32 v23; // r15d
  __int32 v24; // r15d
  int Object; // [rsp+20h] [rbp-38h]
  PVOID v26; // [rsp+70h] [rbp+18h] BYREF

  v6 = PortInformation;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !PortInformation )
  {
    v17 = -1073741811;
    goto LABEL_24;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( ((PortInformationClass - 3) & 0xFFFFFFF7) != 0 && Length )
    {
      v11 = (unsigned __int64)PortInformation;
      if ( ((unsigned __int8)PortInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)PortInformation + Length - 1;
      if ( (unsigned __int64)PortInformation > v12
        || (PortInformation = (PVOID)0x7FFFFFFF0000LL, v12 >= 0x7FFFFFFF0000LL) )
      {
        ExRaiseAccessViolation();
      }
      v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v11 = *(_BYTE *)v11;
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
    }
    else
    {
      PortInformation = (PVOID)0x7FFFFFFF0000LL;
    }
    v14 = ReturnLength;
    if ( ReturnLength )
    {
      v15 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v15 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v15 = *(_DWORD *)v15;
    }
  }
  else
  {
    v14 = ReturnLength;
  }
  v16 = 0LL;
  if ( !PortHandle
    || (v26 = 0LL,
        v17 = ObReferenceObjectByHandle(PortHandle, 0x20000u, AlpcPortObjectType, PreviousMode, &v26, 0LL),
        v16 = (struct _DMA_ADAPTER *)v26,
        v17 >= 0) )
  {
    if ( PortInformationClass )
    {
      v22 = PortInformationClass - 3;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 7;
          if ( v24 )
          {
            if ( v24 != 1 )
            {
              v17 = -1073741811;
LABEL_22:
              if ( v16 )
                HalPutDmaAdapter(v16);
              goto LABEL_24;
            }
            ServerSessionInfo = AlpcpPortQueryServerSessionInfo(v16, v6, Length, v14);
          }
          else
          {
            ServerSessionInfo = AlpcpWaitForPortReferences((_DWORD)v16, (_DWORD)v6, Length, (_DWORD)v14, PreviousMode);
          }
        }
        else
        {
          ServerSessionInfo = AlpcpPortQueryServerInfo((int)v16, (int)v6, Length, (int)v14, PreviousMode);
        }
      }
      else
      {
        LOBYTE(Object) = PreviousMode;
        ServerSessionInfo = AlpcpPortQueryConnectedSidInfo(v16, v6, PortInformation, v14, Object);
      }
    }
    else
    {
      ServerSessionInfo = AlpcpPortQueryBasicInfo(v16, v6, Length, v14);
    }
    v17 = ServerSessionInfo;
    goto LABEL_22;
  }
LABEL_24:
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable++ == -1;
  if ( v20
    && ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery((__int64)v19);
  }
  return v17;
}
