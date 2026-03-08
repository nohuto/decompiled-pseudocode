/*
 * XREFs of ?CallDriverQueryInterface@DXGADAPTER@@QEAAJPEBU_GUID@@GGPEAX1@Z @ 0x1C01F04F4
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS __fastcall DXGADAPTER::CallDriverQueryInterface(
        PDEVICE_OBJECT *this,
        const struct _GUID *a2,
        __int64 a3,
        __int64 a4,
        void *a5)
{
  PIRP v6; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _DEVICE_OBJECT *v8; // rcx
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  if ( KeGetCurrentIrql() )
  {
    WdLogSingleEntry1(1LL, 9609LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"KeGetCurrentIrql() == PASSIVE_LEVEL",
      9609LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v6 = IoBuildSynchronousFsdRequest(0x1Bu, this[27], 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v6 )
  {
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)&GUID_AGP_BUS_INTERFACE_STANDARD;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a5;
    *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 2075;
    CurrentStackLocation[-1].Parameters.Create.Options = 327864;
    v6->IoStatus.Status = -1073741637;
    v8 = this[27];
    IoStatusBlock.Status = -1073741637;
    result = IofCallDriver(v8, v6);
    if ( result == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      return IoStatusBlock.Status;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    return -1073741801;
  }
  return result;
}
