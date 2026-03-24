/*
 * XREFs of ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C004E238
 * Callers:
 *     CoreMsgSend @ 0x1C004E190 (CoreMsgSend.c)
 * Callees:
 *     ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C004E3D4 (-Free@BufferCache@CoreMessagingK@@SAXPEAX@Z.c)
 *     ??$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z @ 0x1C004E444 (--$AllocUninitialized@UAlpcBufferK@@@BufferCache@CoreMessagingK@@SAJGPEAPEAUAlpcBufferK@@@Z.c)
 *     ?ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z @ 0x1C004E564 (-ReferenceByHandle@CoreMsgObject@CoreMessagingK@@SAJPEAXW4ObjectType@2@DPEAPEAU12@@Z.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     memmove @ 0x1C00CF9C0 (memmove.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1C016F804 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

__int64 __fastcall CoreMessagingK::ServerPorts::Send(void *a1, __int64 a2, void *a3, unsigned int a4)
{
  _QWORD *v4; // rsi
  size_t v5; // r13
  _DWORD *v6; // rdi
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  int v10; // ebx
  __int64 v11; // rcx
  void *v12; // rdx
  __int64 v13; // r12
  unsigned __int16 v14; // r15
  char *v15; // rcx
  int v16; // eax
  void *v18; // [rsp+40h] [rbp-20h] BYREF
  PVOID Object; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF
  int v21; // [rsp+A8h] [rbp+48h] BYREF
  void *Src; // [rsp+B0h] [rbp+50h]
  int v23; // [rsp+B8h] [rbp+58h] BYREF

  Src = a3;
  LOBYTE(v21) = a2;
  v4 = 0LL;
  v5 = a4;
  v6 = 0LL;
  Object = 0LL;
  v18 = 0LL;
  if ( a4 > 0xFF9F )
  {
    v10 = -1073741582;
  }
  else
  {
    v7 = CoreMessagingK::CoreMsgObject::ReferenceByHandle(a1, a2, a3, &Object);
    v4 = Object;
    v10 = v7;
    if ( v7 < 0 )
      goto LABEL_15;
    v11 = *((_QWORD *)Object + 3);
    v12 = *(void **)v11;
    if ( !*(_QWORD *)v11 )
      goto LABEL_19;
    if ( (unsigned int)dword_1C0249450 > 5 )
    {
      v21 = *(_DWORD *)(v11 + 12);
      v23 = *(_DWORD *)(v11 + 8);
      v20 = *((_QWORD *)Object + 2);
      Object = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C0249450,
        (unsigned int)&unk_1C022257E,
        v8,
        v9,
        (__int64)&v20,
        (__int64)&Object,
        (__int64)&v23,
        (__int64)&v21);
    }
    v13 = 16LL;
    v14 = v5 + 16;
    v10 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>((unsigned __int16)(v5 + 96), &v18);
    if ( v10 < 0 )
    {
      v6 = v18;
      goto LABEL_15;
    }
    v6 = v18;
    memset(v18, 0, 0x50uLL);
    v6[14] = 1;
    *((_WORD *)v6 + 33) = 1;
    *((_WORD *)v6 + 1) = v5 + 96;
    *(_WORD *)v6 = v5 + 56;
    v6[18] = v14;
    if ( (_WORD)v5 == 0xFFF0 )
      v15 = 0LL;
    else
      v15 = (char *)(v6 + 20);
    *((_DWORD *)v15 + 2) = v14;
    *(_QWORD *)v15 = v4[2];
    if ( v6[18] )
      v13 = (__int64)(v6 + 24);
    memmove((void *)v13, Src, v5);
    v16 = ZwAlpcSendWaitReceivePort(*(_QWORD *)v4[3], 0x10000LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
    v10 = v16;
    if ( v16 == -1073741769 || v16 == -1073740032 || v16 == -1073740029 || v16 == -1073740025 )
LABEL_19:
      v10 = -1073741769;
  }
LABEL_15:
  CoreMessagingK::BufferCache::Free(v6);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v10;
}
