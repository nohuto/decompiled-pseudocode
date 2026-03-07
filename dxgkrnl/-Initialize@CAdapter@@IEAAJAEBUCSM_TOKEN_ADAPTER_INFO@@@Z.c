__int64 __fastcall CAdapter::Initialize(CAdapter *this, const struct CSM_TOKEN_ADAPTER_INFO *a2)
{
  _QWORD *v4; // rcx
  int PresentHistoryReadyEvent; // ebx
  void *v6; // rdx
  unsigned int v7; // ecx
  void **Handle; // rax
  PVOID v9; // rdi
  PVOID Object; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+48h] [rbp-20h]

  *((_QWORD *)this + 4) = PsGetCurrentProcess();
  *((_QWORD *)this + 3) = *(_QWORD *)a2;
  v12 = 0;
  v4 = (_QWORD *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
  v4[1] = v4;
  *v4 = v4;
  Object = (PVOID)*((_QWORD *)this + 3);
  PresentHistoryReadyEvent = DxgkOpenAdapterFromLuidInternal(&Object);
  if ( PresentHistoryReadyEvent >= 0 )
  {
    *((_DWORD *)this + 10) = v12;
    v6 = (void *)*((_QWORD *)a2 + 1);
    if ( !v6 || (PresentHistoryReadyEvent = CAdapter::UpdateRenderFence(this, v6), PresentHistoryReadyEvent >= 0) )
    {
      v7 = *((_DWORD *)this + 10);
      Object = 0LL;
      PresentHistoryReadyEvent = DxgkGetPresentHistoryReadyEvent(v7);
      if ( PresentHistoryReadyEvent >= 0 )
      {
        Handle = (void **)((char *)this + 48);
        v9 = Object;
        PresentHistoryReadyEvent = ObOpenObjectByPointer(
                                     Object,
                                     0x80u,
                                     0LL,
                                     0x100000u,
                                     (POBJECT_TYPE)ExEventObjectType,
                                     1,
                                     Handle);
        if ( v9 )
          ObfDereferenceObject(v9);
      }
    }
  }
  return (unsigned int)PresentHistoryReadyEvent;
}
