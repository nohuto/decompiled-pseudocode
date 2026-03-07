__int64 __fastcall MmCallDllInitialize(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  wchar_t *Pool; // rax
  wchar_t *v6; // rdi
  unsigned int Length; // ebx
  const void *v8; // rdx
  unsigned __int16 v9; // dx
  wchar_t *v10; // rax
  __int64 v11; // rcx
  unsigned int inited; // edi
  int v13; // ebx
  UNICODE_STRING Destination; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING Source; // [rsp+30h] [rbp-10h] BYREF

  v2 = *(_WORD *)(a1 + 88);
  Destination = 0LL;
  Source = 0LL;
  if ( (unsigned __int16)(v2 + 2) < v2 )
    return 3221225734LL;
  Source.MaximumLength = v2 + 2;
  Pool = (wchar_t *)MiAllocatePool(256, (unsigned __int16)(v2 + 2), 0x54446D4Du);
  Source.Buffer = Pool;
  v6 = Pool;
  if ( Pool )
  {
    v8 = *(const void **)(a1 + 96);
    Source.Length = *(_WORD *)(a1 + 88);
    Length = Source.Length;
    memmove(Pool, v8, Source.Length);
    v9 = CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length;
    if ( (unsigned __int16)(CmRegistryMachineSystemCurrentControlSetServices.Length + Source.Length) <= CmRegistryMachineSystemCurrentControlSetServices.Length
      || (unsigned __int16)(v9 + 4) < v9 )
    {
      v13 = -1073741562;
    }
    else
    {
      Destination.MaximumLength = v9 + 4;
      Destination.Buffer = (wchar_t *)MiAllocatePool(64, (unsigned __int16)(v9 + 4), 0x54446D4Du);
      if ( Destination.Buffer )
      {
        Destination.Length = CmRegistryMachineSystemCurrentControlSetServices.Length;
        memmove(
          Destination.Buffer,
          CmRegistryMachineSystemCurrentControlSetServices.Buffer,
          CmRegistryMachineSystemCurrentControlSetServices.Length);
        RtlAppendUnicodeToString(&Destination, L"\\");
        v6[(unsigned __int64)Length >> 1] = 0;
        v10 = wcschr(v6, 0x2Eu);
        if ( v10 )
        {
          LOWORD(Length) = 2 * (v10 - v6);
          Source.Length = Length;
        }
        v6[(unsigned __int64)(unsigned __int16)Length >> 1] = 0;
        RtlAppendUnicodeStringToString(&Destination, &Source);
        ExFreePoolWithTag(v6, 0);
        inited = VfDriverInitStarting(v11);
        v13 = MiCallDllInitialize(a1, &Destination);
        ExFreePoolWithTag(Destination.Buffer, 0);
        if ( v13 >= 0 && !byte_140C65574 )
          VfDriverInitSuccess(inited, a2);
        return (unsigned int)v13;
      }
      v13 = -1073741670;
    }
    ExFreePoolWithTag(v6, 0);
    return (unsigned int)v13;
  }
  return 3221225626LL;
}
