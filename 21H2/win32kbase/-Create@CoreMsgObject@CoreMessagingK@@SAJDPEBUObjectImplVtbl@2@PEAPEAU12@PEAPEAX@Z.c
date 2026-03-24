/*
 * XREFs of ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0072480
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C007234C (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C007434C (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

NTSTATUS __fastcall CoreMessagingK::CoreMsgObject::Create(char a1, __int64 (**a2)(void), PVOID *a3, void **a4)
{
  __int64 (*v5)(void); // rax
  unsigned int v9; // esi
  __int64 v10; // r9
  NTSTATUS result; // eax
  _DWORD v12[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+58h] [rbp-28h]
  __int64 v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]
  __int128 v17; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF

  *a4 = 0LL;
  v5 = *a2;
  v12[1] = 0;
  v16 = 0;
  Object = 0LL;
  *a3 = 0LL;
  v13 = 0LL;
  v12[0] = 48;
  v9 = v5() + 8;
  LOBYTE(v10) = a1;
  v14 = 0LL;
  v15 = a1 == 0 ? 0x200 : 0;
  v17 = 0LL;
  result = ObCreateObject(0LL, ExCoreMessagingObjectType, v12, v10, 0LL, v9, 0, 0, &Object);
  if ( result >= 0 )
  {
    memset(Object, 0, v9);
    *(_DWORD *)Object = gSessionId;
    *((_QWORD *)Object + 1) = a2;
    result = ObInsertObject(Object, 0LL, 0x10000000u, 0, 0LL, a4);
    if ( result >= 0 )
    {
      *a3 = Object;
      return 0;
    }
  }
  return result;
}
