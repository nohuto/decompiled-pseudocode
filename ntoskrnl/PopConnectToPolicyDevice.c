/*
 * XREFs of PopConnectToPolicyDevice @ 0x14084A820
 * Callers:
 *     PopNotifyPolicyDevice @ 0x14084A7A0 (PopNotifyPolicyDevice.c)
 *     PopPolicyDeviceTargetChange @ 0x1409919D0 (PopPolicyDeviceTargetChange.c)
 * Callees:
 *     IoAllocateIrp @ 0x140208CF0 (IoAllocateIrp.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     RtlCompareUnicodeString @ 0x1406EA3B0 (RtlCompareUnicodeString.c)
 *     IoRegisterPlugPlayNotification @ 0x1406F4F30 (IoRegisterPlugPlayNotification.c)
 *     PopGetPolicyDeviceObject @ 0x14084A990 (PopGetPolicyDeviceObject.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PopConnectToPolicyDevice(int a1, const UNICODE_STRING *a2)
{
  unsigned int *v4; // rsi
  const UNICODE_STRING **v5; // rax
  const UNICODE_STRING *v6; // rbx
  UNICODE_STRING *Pool2; // rax
  PVOID *Context; // rdi
  __int64 PolicyDeviceObject; // rax
  PDRIVER_OBJECT *v10; // rbx
  PIRP Irp; // rax
  PVOID v12; // rbp
  IRP *v13; // r14
  PVOID *v14; // rax
  PVOID **v15; // rdx
  PVOID EventCategoryData; // [rsp+70h] [rbp+18h] BYREF

  EventCategoryData = 0LL;
  v4 = (unsigned int *)((char *)&PopPolicyDeviceParameters + 32 * a1);
  v5 = (const UNICODE_STRING **)*((_QWORD *)v4 + 1);
  v6 = *v5;
  if ( *v5 == (const UNICODE_STRING *)v5 )
  {
LABEL_4:
    Pool2 = (UNICODE_STRING *)ExAllocatePool2(64LL, *v4 + a2->Length, v4[1]);
    Context = (PVOID *)Pool2;
    if ( !Pool2 )
      return;
    Pool2[2].Buffer = (unsigned __int16 *)((char *)&Pool2->Length + *v4);
    Pool2[2].MaximumLength = a2->Length;
    RtlCopyUnicodeString(Pool2 + 2, a2);
    *((_DWORD *)Context + 4) = a1;
    PolicyDeviceObject = PopGetPolicyDeviceObject(Context + 4, &EventCategoryData);
    v10 = (PDRIVER_OBJECT *)PolicyDeviceObject;
    if ( !PolicyDeviceObject )
      goto LABEL_17;
    Irp = IoAllocateIrp(*(_BYTE *)(PolicyDeviceObject + 76), 0);
    v12 = EventCategoryData;
    v13 = Irp;
    if ( Irp )
    {
      if ( IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             EventCategoryData,
             v10[1],
             PopPolicyDeviceTargetChange,
             Context,
             Context + 3) >= 0 )
      {
        Context[6] = v10;
        Context[7] = v13;
        (*((void (__fastcall **)(PVOID *))v4 + 2))(Context);
        v14 = (PVOID *)*((_QWORD *)v4 + 1);
        v15 = (PVOID **)v14[1];
        if ( *v15 != v14 )
          __fastfail(3u);
        *Context = v14;
        Context[1] = v15;
        *v15 = Context;
        v14[1] = Context;
        Context = 0LL;
LABEL_10:
        if ( v12 )
          ObfDereferenceObjectWithTag(v12, 0x64506F50u);
        if ( !Context )
          return;
LABEL_17:
        ExFreePoolWithTag(Context, v4[1]);
        return;
      }
      IoFreeIrp(v13);
    }
    ObfDereferenceObjectWithTag(v10, 0x64506F50u);
    goto LABEL_10;
  }
  while ( RtlCompareUnicodeString(v6 + 2, a2, 1u) )
  {
    v6 = *(const UNICODE_STRING **)&v6->Length;
    if ( v6 == *((const UNICODE_STRING **)v4 + 1) )
      goto LABEL_4;
  }
}
