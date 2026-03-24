/*
 * XREFs of ?GrowUMPDHeap@UMPDOBJ@@AEAAHPEAU_UMPDHEAP@@K@Z @ 0x1C013A350
 * Callers:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C001DF14 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 * Callees:
 *     Feature_2249667896__private_IsEnabledDeviceUsage @ 0x1C016B1FC (Feature_2249667896__private_IsEnabledDeviceUsage.c)
 */

__int64 __fastcall UMPDOBJ::GrowUMPDHeap(UMPDOBJ *this, struct _UMPDHEAP *a2, unsigned int a3)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v5; // rdx
  NTSTATUS v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  HANDLE v11; // rax
  HANDLE v12; // rdi
  int IsEnabledDeviceUsage; // eax
  void *v14; // rcx
  __int64 result; // rax
  SIZE_T Size; // [rsp+40h] [rbp+8h] BYREF
  PVOID Address; // [rsp+48h] [rbp+10h] BYREF

  Size = (SIZE_T)this;
  v3 = *((_QWORD *)a2 + 2);
  v5 = v3 + a3;
  if ( v5 < v3 )
    return 0LL;
  if ( v5 + 4095 < v5 )
    return 0LL;
  Size = (v5 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( Size > 0x400000 )
    return 0LL;
  Address = *(PVOID *)a2;
  v6 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x1000u, 4u);
  if ( (unsigned int)Feature_2249667896__private_IsEnabledDeviceUsage(v8, v7) )
  {
    if ( v6 >= 0 )
    {
      v11 = (HANDLE)GrepSecureVirtualMemory(Address, Size, 4LL);
LABEL_9:
      v12 = v11;
      goto LABEL_11;
    }
  }
  else if ( v6 >= 0 )
  {
    v11 = MmSecureVirtualMemory(Address, Size, 4u);
    goto LABEL_9;
  }
  v12 = 0LL;
LABEL_11:
  if ( !v12 )
    return 0LL;
  if ( *((_QWORD *)a2 + 1) )
  {
    IsEnabledDeviceUsage = Feature_2249667896__private_IsEnabledDeviceUsage(v10, v9);
    v14 = (void *)*((_QWORD *)a2 + 1);
    if ( IsEnabledDeviceUsage )
      GrepUnsecureVirtualMemory(v14);
    else
      MmUnsecureVirtualMemory(v14);
  }
  *((_QWORD *)a2 + 2) = Size;
  result = 1LL;
  *((_QWORD *)a2 + 1) = v12;
  return result;
}
