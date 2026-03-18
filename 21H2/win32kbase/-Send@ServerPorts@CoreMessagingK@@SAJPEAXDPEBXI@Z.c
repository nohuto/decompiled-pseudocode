/*
 * XREFs of ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C003B908
 * Callers:
 *     CoreMsgSend @ 0x1C003B860 (CoreMsgSend.c)
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C003BA9C (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ?ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z @ 0x1C003BB0C (-ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z.c)
 *     ?AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z @ 0x1C003BBEC (-AllocUninitialized@BufferCache@CoreMessagingK@@CAJGPEAPEAX@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C01A3FC4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::Send(void *a1, __int64 a2, const void *a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  size_t v5; // r12
  _WORD *v6; // rsi
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // ebx
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  PVOID Object; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  int v19; // [rsp+98h] [rbp+48h] BYREF
  int v20; // [rsp+A8h] [rbp+58h] BYREF

  LOBYTE(v19) = a2;
  v4 = 0LL;
  v5 = a4;
  v6 = 0LL;
  Object = 0LL;
  if ( a4 > 0xFF9F )
  {
    v11 = -1073741582;
  }
  else
  {
    v8 = CoreMessagingK::CoreMsgObject::ReferenceByHandle(a1, a2, a3, &Object);
    v4 = Object;
    v11 = v8;
    if ( v8 >= 0 )
    {
      v12 = *((_QWORD *)Object + 3);
      v13 = *(void **)v12;
      if ( !*(_QWORD *)v12 )
        goto LABEL_14;
      if ( (unsigned int)dword_1C028D8C0 > 5 )
      {
        v19 = *(_DWORD *)(v12 + 12);
        v20 = *(_DWORD *)(v12 + 8);
        v18 = *((_QWORD *)Object + 2);
        Object = v13;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C028D8C0,
          (unsigned int)&unk_1C026669D,
          v9,
          v10,
          (__int64)&v18,
          (__int64)&Object,
          (__int64)&v20,
          (__int64)&v19);
      }
      Object = 0LL;
      v11 = CoreMessagingK::BufferCache::AllocUninitialized((unsigned __int16)v5 + 96, &Object);
      if ( v11 >= 0 )
      {
        v6 = Object;
        memset(Object, 0, 0x50uLL);
        v6[1] = v5 + 96;
        *((_DWORD *)v6 + 14) = 1;
        v6[33] = 1;
        *((_DWORD *)v6 + 18) = (unsigned __int16)(v5 + 16);
        *v6 = v5 + 56;
        v14 = (unsigned __int64)(v6 + 40) & -(__int64)((unsigned __int16)(v5 + 16) != 0);
        *(_DWORD *)(v14 + 8) = (unsigned __int16)(v5 + 16);
        *(_QWORD *)v14 = v4[2];
        memmove((void *)(((unsigned __int64)(v6 + 40) & -(__int64)(*((_DWORD *)v6 + 18) != 0)) + 16), a3, v5);
        v15 = ZwAlpcSendWaitReceivePort(*(_QWORD *)v4[3], 0x10000LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
        v11 = v15;
        if ( v15 == -1073741769 || v15 == -1073740032 || v15 == -1073740029 || v15 == -1073740025 )
LABEL_14:
          v11 = -1073741769;
      }
    }
  }
  CoreMessagingK::BufferCache::Free(v6);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v11;
}
