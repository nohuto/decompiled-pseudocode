/*
 * XREFs of PiGetDmaAdapterFromBusInterface @ 0x140821C18
 * Callers:
 *     IoGetDmaAdapter @ 0x140821B20 (IoGetDmaAdapter.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 */

__int64 __fastcall PiGetDmaAdapterFromBusInterface(_QWORD *Object, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rsi
  _WORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD v16[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(v16, 0, sizeof(v16));
  v6 = 0LL;
  if ( !Object )
    goto LABEL_20;
  v7 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v7 || (*(_DWORD *)(v7 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)Object, (PVOID)*((unsigned __int16 *)Object + 1));
    v9 = Object[1];
    if ( v9 )
    {
      IoAddTriageDumpDataBlock(v9, (PVOID)(unsigned int)*(__int16 *)(v9 + 2));
      v10 = (_WORD *)(Object[1] + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), (PVOID)*(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v11 = *(_QWORD *)(Object[39] + 40LL);
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      IoAddTriageDumpDataBlock(v11, (PVOID)0x388);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), (PVOID)*v12);
      }
      v13 = (_WORD *)(*(_QWORD *)(Object[39] + 40LL) + 56LL);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
      }
      v14 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
      if ( v14 && *(_WORD *)(v14 + 56) )
      {
        IoAddTriageDumpDataBlock(v14 + 56, (PVOID)2);
        v15 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 64), (PVOID)*(unsigned __int16 *)(v15 + 56));
      }
    }
LABEL_20:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  if ( (int)PnpQueryInterface(Object, (ULONG_PTR)&GUID_BUS_INTERFACE_STANDARD, 1u, 0x40u, 0LL, (USHORT *)v16) >= 0 )
  {
    if ( v16[5] )
      v6 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v16[5])(v16[1], a2, a3);
    ((void (__fastcall *)(_QWORD))v16[3])(v16[1]);
  }
  return v6;
}
