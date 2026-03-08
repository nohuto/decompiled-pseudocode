/*
 * XREFs of PiProcessDeviceResetAction @ 0x14055DCD8
 * Callers:
 *     PnpDeviceActionWorker @ 0x140203020 (PnpDeviceActionWorker.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14038486C (IoAddTriageDumpDataBlock.c)
 *     McTemplateK0zq_EtwWriteTransfer @ 0x1403D07E8 (McTemplateK0zq_EtwWriteTransfer.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     IopLogDeviceResetComplete @ 0x140954464 (IopLogDeviceResetComplete.c)
 *     IopQueueDeviceResetEvent @ 0x14095467C (IopQueueDeviceResetEvent.c)
 *     PnpTraceRequestDeviceRemovalForReset @ 0x140969384 (PnpTraceRequestDeviceRemovalForReset.c)
 */

__int64 __fastcall PiProcessDeviceResetAction(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // r9
  unsigned int v4; // ebp
  __int64 v5; // rbx
  __int64 v7; // rcx
  _WORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    goto LABEL_42;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  if ( !v3 || (*(_DWORD *)(v3 + 396) & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock(*(_QWORD *)(a1 + 16), (PVOID)*(unsigned __int16 *)(v1 + 2));
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    if ( v7 )
    {
      IoAddTriageDumpDataBlock(v7, (PVOID)(unsigned int)*(__int16 *)(v7 + 2));
      v8 = (_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL);
      if ( *v8 )
      {
        IoAddTriageDumpDataBlock((ULONG)v8, (PVOID)2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 56LL));
      }
    }
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 312);
      if ( *(_QWORD *)(v10 + 40) )
      {
        v11 = *(_QWORD *)(v10 + 40);
        IoAddTriageDumpDataBlock(v11, (PVOID)0x388);
        if ( *(_WORD *)(v11 + 40) )
        {
          IoAddTriageDumpDataBlock(v11 + 40, (PVOID)2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v11 + 48), (PVOID)*(unsigned __int16 *)(v11 + 40));
        }
        v12 = *(_QWORD *)(a1 + 16);
        v13 = v12 + 312;
        if ( v12 )
          v14 = *(_QWORD *)(*(_QWORD *)v13 + 40LL);
        else
          v14 = 0LL;
        if ( *(_WORD *)(v14 + 56) )
        {
          if ( v12 )
            v15 = *(_QWORD *)(*(_QWORD *)v13 + 40LL);
          else
            LODWORD(v15) = 0;
          IoAddTriageDumpDataBlock(v15 + 56, (PVOID)2);
          v16 = *(_QWORD *)(a1 + 16);
          if ( v16 )
          {
            v17 = *(_QWORD *)(*(_QWORD *)(v16 + 312) + 40LL);
            v18 = v17;
          }
          else
          {
            v17 = 0LL;
            v18 = 0LL;
          }
          IoAddTriageDumpDataBlock(*(_QWORD *)(v18 + 64), (PVOID)*(unsigned __int16 *)(v17 + 56));
        }
        v19 = *(_QWORD *)(a1 + 16);
        v20 = v19 + 312;
        if ( v19 )
          v21 = *(_QWORD *)(*(_QWORD *)v20 + 40LL);
        else
          v21 = 0LL;
        if ( *(_QWORD *)(v21 + 16) )
        {
          v22 = v19 ? *(_QWORD *)(*(_QWORD *)v20 + 40LL) : 0LL;
          if ( *(_WORD *)(*(_QWORD *)(v22 + 16) + 56LL) )
          {
            if ( v19 )
              v23 = *(_QWORD *)(*(_QWORD *)v20 + 40LL);
            else
              v23 = 0LL;
            IoAddTriageDumpDataBlock(*(_QWORD *)(v23 + 16) + 56, (PVOID)2);
            v24 = *(_QWORD *)(a1 + 16);
            if ( v24 )
            {
              v25 = *(_QWORD *)(*(_QWORD *)(v24 + 312) + 40LL);
              v26 = v25;
            }
            else
            {
              v25 = 0LL;
              v26 = 0LL;
            }
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(v26 + 16) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v25 + 16) + 56LL));
          }
        }
      }
    }
LABEL_42:
    KeBugCheckEx(0xCAu, 2uLL, *(_QWORD *)(a1 + 16), 0LL, 0LL);
  }
  v4 = *(_DWORD *)(a1 + 32);
  if ( (byte_140C0E10C & 2) != 0 )
    McTemplateK0zq_EtwWriteTransfer(
      a1,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceReset_DevMgnt_Start,
      0LL,
      *(const wchar_t **)(v3 + 48),
      v4);
  v5 = (unsigned int)IopQueueDeviceResetEvent(v1);
  PnpTraceRequestDeviceRemovalForReset(v1, v4, v5);
  IopLogDeviceResetComplete(*(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL), (unsigned int)v5);
  return (unsigned int)v5;
}
