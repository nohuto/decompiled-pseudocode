/*
 * XREFs of DpiAcpiEvalAcpiMethodEx @ 0x1C016545C
 * Callers:
 *     DpEvalAcpiMethod @ 0x1C01651D0 (DpEvalAcpiMethod.c)
 *     DpiAcpiPrepareAcpiChildNameList @ 0x1C0197AD8 (DpiAcpiPrepareAcpiChildNameList.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall DpiAcpiEvalAcpiMethodEx(
        __int64 a1,
        const void **a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int v11; // eax
  unsigned int v12; // r14d
  ULONG v13; // r12d
  unsigned int v14; // r15d
  _DWORD *PoolWithTag; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _DWORD *v20; // rdi
  __int64 v21; // rsi
  struct _DEVICE_OBJECT *v22; // rsi
  IRP *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  NTSTATUS v36; // eax
  __int64 v37; // rax
  __int64 v38; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  IoStatusBlock = 0LL;
  if ( a2 && *(_WORD *)a2 > 0xFAu )
  {
    LODWORD(v30) = -1073741811;
    v33 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v33 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v33);
    return (unsigned int)v30;
  }
  v11 = a3[2];
  v12 = 4;
  if ( v11 < 4 )
    v11 = 4;
  v13 = v11 + 268;
  v14 = v11 + 268;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v11 + 268, 0x74727044u);
  v20 = PoolWithTag;
  if ( !PoolWithTag )
  {
    LODWORD(v30) = -1073741801;
    v34 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v34 + 24) = -1073741801LL;
    WdLogEvent5_WdLowResource(v34);
    return (unsigned int)v30;
  }
  memset(PoolWithTag, 0, v14);
  *v20 = 1181312321;
  if ( a2 )
  {
    memmove(v20 + 1, a2[1], *(unsigned __int16 *)a2);
    v21 = *(unsigned __int16 *)a2;
    *((_BYTE *)v20 + v21 + 4) = 46;
    v8 = (unsigned int)(v21 + 1);
  }
  *(_DWORD *)((char *)v20 + v8 + 4) = a3[1];
  *((_BYTE *)v20 + (unsigned int)(v8 + 4) + 4) = 0;
  v20[65] = a3[2];
  v20[66] = a3[3];
  if ( a7 )
    v12 = a3[2];
  memmove(v20 + 67, a3 + 4, v12);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v22 = *(struct _DEVICE_OBJECT **)(v7 + 160);
  ObfReferenceObject(v22);
  v23 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          v22,
          v20,
          v13,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( v23 )
  {
    LODWORD(v30) = IofCallDriver(v22, v23);
    if ( (_DWORD)v30 == 259 )
    {
      v36 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v30 = v36;
      if ( v36 )
      {
        v37 = WdLogNewEntry5_WdError(v29, v28);
        *(_QWORD *)(v37 + 24) = v30;
LABEL_28:
        WdLogEvent5_WdError(v37);
        goto LABEL_16;
      }
      LODWORD(v30) = IoStatusBlock.Status;
    }
    if ( (int)v30 >= 0 )
    {
      if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
        goto LABEL_16;
      LODWORD(v30) = -1072431089;
      v37 = WdLogNewEntry5_WdError(v29, v28);
      *(_QWORD *)(v37 + 24) = -1072431089LL;
      goto LABEL_28;
    }
    v38 = WdLogNewEntry5_WdWarning(v29, v28, v31);
    *(_QWORD *)(v38 + 24) = (int)v30;
    WdLogEvent5_WdWarning(v38);
  }
  else
  {
    LODWORD(v30) = -1073741670;
    v35 = WdLogNewEntry5_WdLowResource(v25, v24, v26, v27);
    *(_QWORD *)(v35 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v35);
  }
LABEL_16:
  if ( v22 )
    ObfDereferenceObject(v22);
  ExFreePoolWithTag(v20, 0);
  return (unsigned int)v30;
}
