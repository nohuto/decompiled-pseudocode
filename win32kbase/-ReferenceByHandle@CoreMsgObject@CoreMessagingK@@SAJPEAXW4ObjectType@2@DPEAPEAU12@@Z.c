/*
 * XREFs of ?ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z @ 0x1C008178C
 * Callers:
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C00814C4 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoreMessagingK::CoreMsgObject::ReferenceByHandle(void *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  NTSTATUS v5; // eax
  PVOID v6; // rbx
  unsigned int v7; // edi
  PVOID Object; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, 0xF0000u, ExCoreMessagingObjectType, 0, &Object, 0LL);
  v6 = Object;
  v7 = v5;
  if ( v5 >= 0 )
  {
    if ( (*(unsigned int (**)(void))(*((_QWORD *)Object + 1) + 8LL))() == 1 )
    {
      *a4 = v6;
      return 0;
    }
    v7 = -1073741811;
  }
  if ( v6 )
    ObfDereferenceObject(v6);
  return v7;
}
