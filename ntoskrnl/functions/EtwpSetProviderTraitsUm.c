__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, int a3)
{
  PVOID v6; // rsi
  void *v7; // rcx
  NTSTATUS v8; // ebx
  __int16 v9; // ax
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 Pool2; // rax
  __int64 v13; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  PVOID v19; // [rsp+98h] [rbp+20h]

  v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) || !*(_WORD *)(a1 + 16) )
    goto LABEL_19;
  v7 = *(void **)a1;
  Object = 0LL;
  v8 = ObReferenceObjectByHandle(v7, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v6 = Object;
  v19 = Object;
  if ( v8 < 0 )
    goto LABEL_14;
  v9 = *((_WORD *)Object + 49);
  if ( (v9 & 8) == 0 && (v9 & 2) != 0 )
  {
    if ( *((_QWORD *)Object + 13) )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a1 + 16);
      if ( (_WORD)v10 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        if ( v11 + v10 > 0x7FFFFFFF0000LL || v11 + v10 < v11 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      Pool2 = ExAllocatePool2(256LL, *(unsigned __int16 *)(a1 + 16) + 28LL, 1417114693LL);
      v13 = Pool2;
      if ( Pool2 )
      {
        memmove((void *)(Pool2 + 28), *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
        v8 = EtwpSetProviderTraitsCommon(
               a1,
               a2,
               a3,
               (int)v6,
               v13,
               *(unsigned __int16 *)(a1 + 16),
               &EtwpProviderTraitsUmMutex,
               (__int64)&EtwpProviderTraitsUmTree);
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
LABEL_19:
    v8 = -1073741811;
  }
LABEL_14:
  if ( v6 )
  {
    if ( v8 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
      EtwpEventWriteRegistrationStatus(v16, v15, v17, v6, v8);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v8;
}
