/*
 * XREFs of HalpExtRegisterResourceDescriptor @ 0x14050B5F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpExtGetRegisteredResourceIdString @ 0x14050B59C (HalpExtGetRegisteredResourceIdString.c)
 *     HalpRegisterDmaChannel @ 0x140514FFC (HalpRegisterDmaChannel.c)
 *     HalpRegisterDmaController @ 0x1405150F4 (HalpRegisterDmaController.c)
 */

__int64 __fastcall HalpExtRegisterResourceDescriptor(unsigned int a1, ULONG_PTR a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 MemoryInternal; // rbx
  _DWORD *v10; // r14
  int v11; // edx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 v17; // rdx
  int v18; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-F8h] BYREF
  WCHAR SourceString[80]; // [rsp+40h] [rbp-E8h] BYREF

  DestinationString = 0LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( a1 >= HalpExtHandleCount )
    return 3221225485LL;
  v7 = HalpExtHandleArray + ((unsigned __int64)a1 << 6);
  if ( !*(_BYTE *)v7 )
    return 3221225485LL;
  v8 = v7 + 32;
  MemoryInternal = *(_QWORD *)(v7 + 32);
  v10 = (_DWORD *)(a3 + 8);
  if ( MemoryInternal == v7 + 32 )
  {
LABEL_16:
    MemoryInternal = HalpMmAllocateMemoryInternal(40, 1u);
    if ( !MemoryInternal )
      return 3221225495LL;
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 4);
    while ( 1 )
    {
      v12 = *(_QWORD *)(MemoryInternal + 24);
      if ( *(_DWORD *)(v12 + 4) == v11
        && *(_WORD *)(v12 + 12) == *(_WORD *)(a2 + 12)
        && *(_DWORD *)(v12 + 8) == *(_DWORD *)(a2 + 8)
        && *(_WORD *)(v12 + 14) == *(_WORD *)(a2 + 14)
        && *(_WORD *)(v12 + 16) == *(_WORD *)(a2 + 16)
        && *(_WORD *)(v12 + 18) == *(_WORD *)(a2 + 18)
        && *(_DWORD *)(MemoryInternal + 36) == *v10 )
      {
        break;
      }
      MemoryInternal = *(_QWORD *)MemoryInternal;
      if ( MemoryInternal == v8 )
        goto LABEL_16;
    }
    if ( *(int *)(MemoryInternal + 16) >= 0 )
      KeBugCheckEx(0x5Cu, 0x300uLL, MemoryInternal, a2, (unsigned int)*v10);
    v14 = *(_QWORD *)MemoryInternal;
    if ( *(_QWORD *)(*(_QWORD *)MemoryInternal + 8LL) != MemoryInternal
      || (v15 = *(__int64 **)(MemoryInternal + 8), *v15 != MemoryInternal) )
    {
LABEL_24:
      __fastfail(3u);
    }
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
  }
  *(_QWORD *)(MemoryInternal + 24) = a2;
  *(_WORD *)(MemoryInternal + 32) = *(_WORD *)(a3 + 4);
  *(_WORD *)(MemoryInternal + 34) = *(_WORD *)(a3 + 6);
  *(_DWORD *)(MemoryInternal + 36) = *v10;
  v16 = *(__int64 **)(v8 + 8);
  if ( *v16 != v8 )
    goto LABEL_24;
  *(_QWORD *)MemoryInternal = v8;
  *(_QWORD *)(MemoryInternal + 8) = v16;
  *v16 = MemoryInternal;
  *(_QWORD *)(v8 + 8) = MemoryInternal;
  RtlInitUnicodeString(&DestinationString, L"Unknown Resource");
  if ( (int)HalpExtGetRegisteredResourceIdString(MemoryInternal, v17, SourceString) >= 0 )
    RtlInitUnicodeString(&DestinationString, SourceString);
  v18 = *(_DWORD *)(a3 + 4);
  if ( v18 == 3 )
  {
    result = HalpRegisterDmaChannel(a4);
  }
  else if ( v18 == 65539 )
  {
    result = HalpRegisterDmaController(a4, &DestinationString);
  }
  else
  {
    result = 3221225474LL;
  }
  *(_DWORD *)(MemoryInternal + 16) = result;
  return result;
}
