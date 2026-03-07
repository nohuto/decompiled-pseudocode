__int64 __fastcall MiGetAllRegisteredPatches(__int64 a1, int a2, int a3, UNICODE_STRING **a4)
{
  UNICODE_STRING *v5; // r15
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // rbx
  _QWORD *v9; // rbx
  unsigned __int64 i; // rsi
  int v11; // eax
  UNICODE_STRING *Pool; // rax
  UNICODE_STRING *v13; // rdi
  NTSTATUS v14; // r14d
  unsigned __int64 v15; // rcx
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  int ProcessImageHotPatchRecord; // eax
  UNICODE_STRING *v19; // rax
  bool v20; // zf
  UNICODE_STRING *j; // rcx
  UNICODE_STRING *v22; // rbx
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  __int128 v25; // [rsp+48h] [rbp-38h] BYREF
  __int128 v26; // [rsp+58h] [rbp-28h]
  __int128 v27; // [rsp+68h] [rbp-18h]

  v5 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CurrentThread = KeGetCurrentThread();
  *((_QWORD *)&v26 + 1) = __PAIR64__(a3, a2);
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((__int64)&xmmword_140C694C8, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&xmmword_140C694C8, 0, v8, (__int64)&xmmword_140C694C8);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = (_QWORD *)*((_QWORD *)&xmmword_140C694B0 + 1);
  i = 0LL;
  while ( v9 )
  {
    v11 = MiCompareHotPatchNodes((__int64)&v25, (__int64)v9);
    if ( v11 < 0 )
      goto LABEL_10;
    if ( v11 <= 0 )
    {
      i = (unsigned __int64)v9;
LABEL_10:
      v9 = (_QWORD *)*v9;
    }
    else
    {
      v9 = (_QWORD *)v9[1];
    }
  }
  if ( i )
  {
    while ( !(unsigned int)MiCompareHotPatchNodes((__int64)&v25, i) )
    {
      Pool = (UNICODE_STRING *)MiAllocatePool(256, 0x30uLL, 0x72486D4Du);
      v13 = Pool;
      if ( !Pool )
        goto LABEL_27;
      RtlInitUnicodeString(Pool + 2, 0LL);
      v14 = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)(i + 32), v13 + 2);
      if ( v14 < 0 )
        goto LABEL_31;
      *(_QWORD *)&v13->Length = v5;
      v15 = i;
      v16 = *(_QWORD ***)(i + 8);
      v5 = v13;
      if ( v16 )
      {
        v17 = *v16;
        for ( i = *(_QWORD *)(i + 8); v17; v17 = (_QWORD *)*v17 )
          i = (unsigned __int64)v17;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v15 )
            break;
          v15 = i;
        }
      }
      if ( !i )
        break;
    }
  }
  ProcessImageHotPatchRecord = MiFindProcessImageHotPatchRecord(a1, a2, a3, 1, &DestinationString);
  v14 = ProcessImageHotPatchRecord;
  if ( ProcessImageHotPatchRecord >= 0 )
  {
    v19 = (UNICODE_STRING *)MiAllocatePool(256, 0x30uLL, 0x72486D4Du);
    v13 = v19;
    if ( v19 )
    {
      v19[2] = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *(_QWORD *)&v13->Length = v5;
      v5 = v13;
      v13 = 0LL;
      goto LABEL_30;
    }
LABEL_27:
    v14 = -1073741670;
  }
  else
  {
    v13 = 0LL;
    if ( ProcessImageHotPatchRecord == -1073741275 )
    {
LABEL_30:
      v14 = 0;
      *a4 = v5;
      v5 = 0LL;
    }
  }
LABEL_31:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&xmmword_140C694C8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&xmmword_140C694C8);
  KeAbPostRelease((ULONG_PTR)&xmmword_140C694C8);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !v13 )
    goto LABEL_40;
  RtlFreeUnicodeString(v13 + 2);
  for ( j = v13; ; j = v22 )
  {
    ExFreePoolWithTag(j, 0);
LABEL_40:
    if ( !v5 )
      break;
    v22 = v5;
    v5 = *(UNICODE_STRING **)&v5->Length;
    RtlFreeUnicodeString(v22 + 2);
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v14;
}
