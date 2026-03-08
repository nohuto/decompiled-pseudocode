/*
 * XREFs of ?Acquire@DXGDEVICEACCESSLOCKSHARED@@QEAAXXZ @ 0x1C0015768
 * Callers:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001573C (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICEACCESSLOCKSHARED::Acquire(DXGDEVICEACCESSLOCKSHARED *this)
{
  struct _KEVENT *v2; // rdi
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8

  if ( *(_QWORD *)this )
  {
    v2 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
    if ( !KeReadStateEvent(v2 + 4) )
      KeWaitForSingleObject(&v2[4], Executive, 0, 0, 0LL);
    v3 = *(_QWORD *)this;
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 136), 0) )
    {
      DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v4, "g", v5, 40LL);
      }
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v3 + 136), 1u);
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
    }
    *((_BYTE *)this + 8) = 1;
  }
}
