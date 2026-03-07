__int64 __fastcall PipDmgRequestRestartOnBlockedDevice(_QWORD *Object)
{
  __int64 v2; // rcx
  _WORD *v3; // rcx
  __int64 v4; // rcx
  unsigned __int16 *v5; // rbp
  _WORD *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  _WORD *v12; // rcx
  __int64 v13; // rcx
  unsigned __int16 *v14; // rbp
  _WORD *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx

  if ( PipDmaGuardPolicy == 3 )
  {
    if ( Object )
    {
      IoAddTriageDumpDataBlock((ULONG)Object, (PVOID)*((unsigned __int16 *)Object + 1));
      v2 = Object[1];
      if ( v2 )
      {
        IoAddTriageDumpDataBlock(v2, (PVOID)(unsigned int)*(__int16 *)(v2 + 2));
        v3 = (_WORD *)(Object[1] + 56LL);
        if ( *v3 )
        {
          IoAddTriageDumpDataBlock((ULONG)v3, (PVOID)2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), (PVOID)*(unsigned __int16 *)(Object[1] + 56LL));
        }
      }
      v4 = *(_QWORD *)(Object[39] + 40LL);
      if ( v4 )
      {
        v5 = (unsigned __int16 *)(v4 + 40);
        IoAddTriageDumpDataBlock(v4, (PVOID)0x388);
        if ( *v5 )
        {
          IoAddTriageDumpDataBlock((ULONG)v5, (PVOID)2);
          IoAddTriageDumpDataBlock(*((_QWORD *)v5 + 1), (PVOID)*v5);
        }
        v6 = (_WORD *)(*(_QWORD *)(Object[39] + 40LL) + 56LL);
        if ( *v6 )
        {
          IoAddTriageDumpDataBlock((ULONG)v6, (PVOID)2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
        }
        v7 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
        if ( v7 )
        {
          if ( *(_WORD *)(v7 + 56) )
          {
            IoAddTriageDumpDataBlock(v7 + 56, (PVOID)2);
            v8 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
            IoAddTriageDumpDataBlock(*(_QWORD *)(v8 + 64), (PVOID)*(unsigned __int16 *)(v8 + 56));
          }
        }
      }
    }
    KeBugCheckEx(0xCAu, 0x11uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  if ( !Object )
LABEL_32:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v9 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v9 || (*(_DWORD *)(v9 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)Object, (PVOID)*((unsigned __int16 *)Object + 1));
    v11 = Object[1];
    if ( v11 )
    {
      IoAddTriageDumpDataBlock(v11, (PVOID)(unsigned int)*(__int16 *)(v11 + 2));
      v12 = (_WORD *)(Object[1] + 56LL);
      if ( *v12 )
      {
        IoAddTriageDumpDataBlock((ULONG)v12, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), (PVOID)*(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v13 = *(_QWORD *)(Object[39] + 40LL);
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      IoAddTriageDumpDataBlock(v13, (PVOID)0x388);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((ULONG)v14, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), (PVOID)*v14);
      }
      v15 = (_WORD *)(*(_QWORD *)(Object[39] + 40LL) + 56LL);
      if ( *v15 )
      {
        IoAddTriageDumpDataBlock((ULONG)v15, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
      }
      v16 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
      if ( v16 && *(_WORD *)(v16 + 56) )
      {
        IoAddTriageDumpDataBlock(v16 + 56, (PVOID)2);
        v17 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v17 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
      }
    }
    goto LABEL_32;
  }
  result = PnpRequestDeviceAction(Object, 25, 1, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
    return PnpRequestDeviceAction(Object, 16, 0, 0LL, 0LL, 0LL, 0LL);
  return result;
}
