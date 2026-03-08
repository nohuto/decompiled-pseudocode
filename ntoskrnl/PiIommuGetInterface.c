/*
 * XREFs of PiIommuGetInterface @ 0x1407F8574
 * Callers:
 *     PiDmaGuardProcessNewDeviceNode @ 0x1407F84D0 (PiDmaGuardProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     PnpQueryInterface @ 0x1407F8C60 (PnpQueryInterface.c)
 */

__int64 __fastcall PiIommuGetInterface(ULONG_PTR MaxDataSize, _QWORD *a2)
{
  __int64 v4; // rcx
  int Interface; // ebx
  void (__fastcall **v7)(_QWORD); // rax
  void (__fastcall *v8)(_QWORD); // rax
  __int64 v9; // rcx
  _WORD *v10; // rcx
  __int64 v11; // rcx
  unsigned __int16 *v12; // rdi
  _WORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx

  if ( !MaxDataSize )
    goto LABEL_24;
  v4 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
  if ( !v4 || (*(_DWORD *)(v4 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(MaxDataSize, (PVOID)*(unsigned __int16 *)(MaxDataSize + 2));
    v9 = *(_QWORD *)(MaxDataSize + 8);
    if ( v9 )
    {
      IoAddTriageDumpDataBlock(v9, (PVOID)(unsigned int)*(__int16 *)(v9 + 2));
      v10 = (_WORD *)(*(_QWORD *)(MaxDataSize + 8) + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 8) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 8) + 56LL));
      }
    }
    v11 = *(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL);
    if ( v11 )
    {
      v12 = (unsigned __int16 *)(v11 + 40);
      IoAddTriageDumpDataBlock(v11, (PVOID)0x388);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v12 + 1), (PVOID)*v12);
      }
      v13 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL);
      if ( *v13 )
      {
        IoAddTriageDumpDataBlock((ULONG)v13, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 56LL));
      }
      v14 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
      if ( v14 && *(_WORD *)(v14 + 56) )
      {
        IoAddTriageDumpDataBlock(v14 + 56, (PVOID)2);
        v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(MaxDataSize + 312) + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v15 + 64), (PVOID)*(unsigned __int16 *)(v15 + 56));
      }
    }
LABEL_24:
    KeBugCheckEx(0xCAu, 2uLL, MaxDataSize, 0LL, 0LL);
  }
  Interface = PnpQueryInterface((PVOID)MaxDataSize, MaxDataSize, a2);
  if ( Interface >= 0 )
  {
    v7 = (void (__fastcall **)(_QWORD))(a2 + 3);
    if ( a2[2] && *v7 && a2[8] && a2[7] )
    {
      return 0;
    }
    else
    {
      v8 = *v7;
      Interface = -1073741637;
      if ( v8 )
        v8(a2[1]);
    }
  }
  return (unsigned int)Interface;
}
