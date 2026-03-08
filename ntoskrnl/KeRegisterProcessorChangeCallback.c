/*
 * XREFs of KeRegisterProcessorChangeCallback @ 0x14080FF70
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExRegisterCallback @ 0x1402FBE90 (ExRegisterCallback.c)
 *     ExUnregisterCallback @ 0x140302720 (ExUnregisterCallback.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403810B0 (HalGetProcessorIdByNtNumber.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExCreateCallback @ 0x14078D4A0 (ExCreateCallback.c)
 */

PVOID __stdcall KeRegisterProcessorChangeCallback(
        PPROCESSOR_CALLBACK_FUNCTION CallbackFunction,
        PVOID CallbackContext,
        ULONG Flags)
{
  unsigned int v5; // ebx
  char v6; // di
  PVOID v7; // rsi
  unsigned int v9; // r15d
  __int64 *v10; // r12
  unsigned int v11; // edi
  __int64 *v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  PVOID v15; // rsi
  __int64 v16; // rcx
  NTSTATUS v17; // [rsp+20h] [rbp-59h] BYREF
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-51h] BYREF
  PVOID v19; // [rsp+30h] [rbp-49h]
  PVOID v20; // [rsp+38h] [rbp-41h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-39h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  __int128 v23; // [rsp+80h] [rbp+7h] BYREF
  int v24; // [rsp+90h] [rbp+17h]

  v19 = CallbackContext;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v24 = 0;
  v5 = 0;
  CallbackObject = 0LL;
  v6 = Flags;
  DestinationString = 0LL;
  v23 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\ProcessorAdd");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = ExCreateCallback(&CallbackObject, &ObjectAttributes, 0, 0);
  if ( v17 >= 0 )
  {
    ExAcquireFastMutex(&KiDynamicProcessorLock);
    v7 = ExRegisterCallback(CallbackObject, (PCALLBACK_FUNCTION)CallbackFunction, CallbackContext);
    v20 = v7;
    ObfDereferenceObject(CallbackObject);
    if ( !v7 || (v6 & 1) == 0 )
    {
LABEL_4:
      ExReleaseFastMutex(&KiDynamicProcessorLock);
      return v7;
    }
    v9 = KeNumberProcessors_0;
    v10 = KiProcessorBlock;
    v11 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v12 = KiProcessorBlock;
      while ( 1 )
      {
        v13 = *v12;
        *(_QWORD *)((char *)&v23 + 4) = v11;
        WORD6(v23) = *(unsigned __int8 *)(v13 + 208);
        BYTE14(v23) = *(_BYTE *)(v13 + 209);
        HalGetProcessorIdByNtNumber(v11);
        LODWORD(v23) = 0;
        v17 = 0;
        ((void (__fastcall *)(PVOID, __int128 *, NTSTATUS *))CallbackFunction)(v19, &v23, &v17);
        v14 = v17;
        if ( v17 < 0 )
          break;
        ++v11;
        ++v12;
        if ( v11 >= v9 )
          goto LABEL_9;
      }
    }
    else
    {
      v14 = v17;
LABEL_9:
      if ( v14 >= 0 )
      {
        LODWORD(v23) = 1;
        goto LABEL_11;
      }
    }
    LODWORD(v23) = 2;
    ExUnregisterCallback(v7);
    v14 = v17;
    v7 = 0LL;
    v20 = 0LL;
LABEL_11:
    DWORD2(v23) = v14;
    if ( v11 )
    {
      v15 = v19;
      do
      {
        v16 = *v10;
        DWORD1(v23) = v5;
        WORD6(v23) = *(unsigned __int8 *)(v16 + 208);
        BYTE14(v23) = *(_BYTE *)(v16 + 209);
        HalGetProcessorIdByNtNumber(v5);
        ((void (__fastcall *)(PVOID, __int128 *, NTSTATUS *))CallbackFunction)(v15, &v23, &v17);
        ++v5;
        ++v10;
      }
      while ( v5 < v11 );
      v7 = v20;
    }
    goto LABEL_4;
  }
  return 0LL;
}
