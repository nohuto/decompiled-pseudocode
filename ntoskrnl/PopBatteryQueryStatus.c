/*
 * XREFs of PopBatteryQueryStatus @ 0x140992530
 * Callers:
 *     PopBatteryWorker @ 0x14086DD10 (PopBatteryWorker.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     IoSynchronousCallDriver @ 0x1402E9470 (IoSynchronousCallDriver.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     PopPrepareIoctl @ 0x140846A50 (PopPrepareIoctl.c)
 */

NTSTATUS __fastcall PopBatteryQueryStatus(__int64 a1, char a2)
{
  struct _IRP *v2; // rdi
  unsigned int v5; // r9d
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  unsigned int v8; // eax
  int v9; // eax
  int v10; // r10d
  unsigned int v11; // r11d
  int v12; // ebp
  unsigned int v13; // edx
  unsigned int v14; // eax
  IRP *v15; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax

  *(_QWORD *)(a1 + 172) = 0LL;
  v2 = (struct _IRP *)(a1 + 168);
  *(_QWORD *)(a1 + 180) = 0LL;
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a1 + 108);
  if ( !a2 )
  {
    *(_DWORD *)(a1 + 172) = -1;
    v5 = *(_DWORD *)(a1 + 152);
    v6 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 148);
    if ( v5 <= v6 )
    {
      v8 = *(_DWORD *)(a1 + 132);
      if ( v5 <= v8 )
      {
        v7 = 0;
        v6 = v8;
      }
      else
      {
        v7 = v8 + 1;
      }
    }
    else
    {
      v7 = v6 + 1;
      v6 = -1;
    }
    v9 = *(_DWORD *)(a1 + 128);
    v10 = 100;
    v11 = 199 * v9;
    v12 = 2 * v9;
    while ( 1 )
    {
      v13 = v11 / 0xC8;
      v14 = v11 / 0xC8 - 1;
      if ( v14 >= v5 && v14 < v6 )
        v6 = v11 / 0xC8 - 1;
      if ( v13 <= v5 )
        break;
      v11 -= v12;
      if ( !--v10 )
        goto LABEL_16;
    }
    if ( v13 > v7 )
      v7 = v11 / 0xC8;
LABEL_16:
    *(_DWORD *)(a1 + 184) = v6;
    *(_DWORD *)(a1 + 180) = v7;
    DbgPrintEx(0x92u, 2u, "\nBattery Triggers [%p]\n|- High = %u\n|- Low  = %u\n", (const void *)a1, v6, v7);
  }
  PopPrepareIoctl(*(IRP **)(a1 + 56), 0x294064u, 0, v2, 0x14u, 0x10u);
  v15 = *(IRP **)(a1 + 56);
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(struct _DEVICE_OBJECT **)(a1 + 48), v15);
    if ( result < 0 )
      return result;
    *(_OWORD *)(a1 + 148) = *(_OWORD *)&v2->Type;
  }
  else
  {
    CurrentStackLocation = v15->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopBatteryIrpComplete;
    CurrentStackLocation[-1].Context = (PVOID)a1;
    CurrentStackLocation[-1].Control = -32;
    IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 48), *(PIRP *)(a1 + 56));
  }
  return 0;
}
