/*
 * XREFs of IoRequestDeviceRemovalForReset @ 0x1409542C0
 * Callers:
 *     <none>
 * Callees:
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall IoRequestDeviceRemovalForReset(_QWORD *Object, int a2)
{
  __int64 v3; // rcx
  int v4; // edx
  __int64 v6; // rcx
  _WORD *v7; // rcx
  __int64 v8; // rcx
  unsigned __int16 *v9; // rsi
  _WORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  if ( !Object )
    goto LABEL_19;
  v3 = *(_QWORD *)(Object[39] + 40LL);
  if ( !v3 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((ULONG)Object, (PVOID)*((unsigned __int16 *)Object + 1));
    v6 = Object[1];
    if ( v6 )
    {
      IoAddTriageDumpDataBlock(v6, (PVOID)(unsigned int)*(__int16 *)(v6 + 2));
      v7 = (_WORD *)(Object[1] + 56LL);
      if ( *v7 )
      {
        IoAddTriageDumpDataBlock((ULONG)v7, (PVOID)2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(Object[1] + 64LL), (PVOID)*(unsigned __int16 *)(Object[1] + 56LL));
      }
    }
    v8 = *(_QWORD *)(Object[39] + 40LL);
    if ( v8 )
    {
      v9 = (unsigned __int16 *)(v8 + 40);
      IoAddTriageDumpDataBlock(v8, (PVOID)0x388);
      if ( *v9 )
      {
        IoAddTriageDumpDataBlock((ULONG)v9, (PVOID)2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v9 + 1), (PVOID)*v9);
      }
      v10 = (_WORD *)(*(_QWORD *)(Object[39] + 40LL) + 56LL);
      if ( *v10 )
      {
        IoAddTriageDumpDataBlock((ULONG)v10, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(Object[39] + 40LL) + 56LL));
      }
      v11 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
      if ( v11 && *(_WORD *)(v11 + 56) )
      {
        IoAddTriageDumpDataBlock(v11 + 56, (PVOID)2);
        v12 = *(_QWORD *)(*(_QWORD *)(Object[39] + 40LL) + 16LL);
        IoAddTriageDumpDataBlock(*(_QWORD *)(v12 + 64), (PVOID)*(unsigned __int16 *)(v12 + 56));
      }
    }
LABEL_19:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Object, 0LL, 0LL);
  }
  v13 = 0LL;
  if ( (a2 & 4) != 0 )
  {
    LODWORD(v13) = 2;
    v4 = 6;
  }
  else
  {
    LODWORD(v13) = a2;
    v4 = 26;
  }
  return PnpRequestDeviceAction(Object, v4, 1, &v13, 0LL, 0LL, 0LL);
}
