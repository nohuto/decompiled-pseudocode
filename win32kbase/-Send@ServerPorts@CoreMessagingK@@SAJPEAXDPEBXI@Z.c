__int64 __fastcall CoreMessagingK::ServerPorts::Send(void *a1, __int64 a2, void *a3, unsigned int a4)
{
  _QWORD *v4; // rdi
  size_t v5; // r13
  _DWORD *v6; // rsi
  int v7; // eax
  int v8; // r8d
  int v9; // r9d
  int v10; // ebx
  __int64 v11; // rcx
  void *v12; // rdx
  unsigned __int16 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
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
      goto LABEL_13;
    v11 = *((_QWORD *)Object + 3);
    v12 = *(void **)v11;
    if ( !*(_QWORD *)v11 )
      goto LABEL_17;
    if ( (unsigned int)dword_1C02C9500 > 5 )
    {
      v21 = *(_DWORD *)(v11 + 12);
      v23 = *(_DWORD *)(v11 + 8);
      v20 = *((_QWORD *)Object + 2);
      Object = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (unsigned int)&dword_1C02C9500,
        (unsigned int)&unk_1C029FBA5,
        v8,
        v9,
        (__int64)&v20,
        (__int64)&Object,
        (__int64)&v23,
        (__int64)&v21);
    }
    v13 = v5 + 16;
    v10 = CoreMessagingK::BufferCache::AllocUninitialized<AlpcBufferK>((unsigned __int16)(v5 + 96), &v18);
    if ( v10 < 0 )
    {
      v6 = v18;
      goto LABEL_13;
    }
    v6 = v18;
    memset(v18, 0, 0x50uLL);
    v6[14] = 1;
    *((_WORD *)v6 + 33) = 1;
    *((_WORD *)v6 + 1) = v5 + 96;
    *(_WORD *)v6 = v5 + 56;
    v6[18] = v13;
    v14 = (unsigned __int64)(v6 + 20) & -(__int64)(v13 != 0);
    v15 = (__int64)(v6 + 24);
    *(_DWORD *)(v14 + 8) = v13;
    *(_QWORD *)v14 = v4[2];
    if ( !v6[18] )
      v15 = 16LL;
    memmove((void *)v15, Src, v5);
    v16 = ZwAlpcSendWaitReceivePort(*(_QWORD *)v4[3], 0x10000LL, v6, 0LL, 0LL, 0LL, 0LL, 0LL);
    v10 = v16;
    if ( v16 == -1073741769 || v16 == -1073740032 || v16 == -1073740029 || v16 == -1073740025 )
LABEL_17:
      v10 = -1073741769;
  }
LABEL_13:
  CoreMessagingK::BufferCache::Free(v6);
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v10;
}
