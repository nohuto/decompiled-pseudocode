/*
 * XREFs of ?Create@CoreMsgObject@CoreMessagingK@@SAJDPEBUObjectImplVtbl@2@PEAPEAU12@PEAPEAX@Z @ 0x1C0083760
 * Callers:
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0083098 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C00C03A8 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

NTSTATUS __fastcall CoreMessagingK::CoreMsgObject::Create(char a1, __int64 (**a2)(void), PVOID *a3, void **a4)
{
  __int64 (*v5)(void); // rax
  unsigned int v9; // esi
  __int64 v10; // r9
  NTSTATUS result; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _DWORD *v16; // rax
  _DWORD v17[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  int v20; // [rsp+68h] [rbp-18h]
  int v21; // [rsp+6Ch] [rbp-14h]
  __int128 v22; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF

  *a4 = 0LL;
  v5 = *a2;
  v17[1] = 0;
  v21 = 0;
  Object = 0LL;
  *a3 = 0LL;
  v18 = 0LL;
  v17[0] = 48;
  v9 = v5() + 8;
  LOBYTE(v10) = a1;
  v19 = 0LL;
  v20 = a1 == 0 ? 0x200 : 0;
  v22 = 0LL;
  result = ObCreateObject(0LL, ExCoreMessagingObjectType, v17, v10, 0LL, v9, 0, 0, &Object);
  if ( result >= 0 )
  {
    memset(Object, 0, v9);
    v16 = (_DWORD *)SGDGetUserSessionState(v13, v12, v14, v15);
    *(_DWORD *)Object = *v16;
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
