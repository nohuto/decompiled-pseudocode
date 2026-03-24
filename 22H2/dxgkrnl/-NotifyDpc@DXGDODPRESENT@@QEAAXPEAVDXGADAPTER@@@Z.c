/*
 * XREFs of ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C005EEF8
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C000E1C0 (DxgNotifyDpcCB.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z @ 0x1C004F768 (-TriggerRemoteVsync@REMOTEVSYNCMAPPING@@QEAAXU_LUID@@I@Z.c)
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C005F12C (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z @ 0x1C005F220 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK@Z.c)
 *     ?UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z @ 0x1C005F364 (-UpdateVsyncCount@BLTQUEUE@@QEAAIPEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall DXGDODPRESENT::NotifyDpc(DXGDODPRESENT *this, struct DXGADAPTER *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rsi
  __int64 v6; // rbx
  unsigned int updated; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGGLOBAL *Global; // rax
  _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = _InterlockedExchange64((volatile __int64 *)this + 10, 0LL);
        (unsigned int)v2 < *(_DWORD *)this;
        v2 = (unsigned int)(v2 + 1) )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + v2 + 4, 0) )
    {
      v6 = 2904LL * (unsigned int)v2;
      updated = BLTQUEUE::UpdateVsyncCount((BLTQUEUE *)(v6 + *((_QWORD *)this + 1)), 0LL);
      LODWORD(v6) = *(_DWORD *)(v6 + *((_QWORD *)this + 1) + 252);
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(*((ADAPTER_DISPLAY **)a2 + 337), a2, v2, updated);
      Global = DXGGLOBAL::GetGlobal(v9, v8);
      REMOTEVSYNCMAPPING::TriggerRemoteVsync((KSPIN_LOCK *)Global + 38084, *(struct _LUID *)((char *)a2 + 316), v6);
    }
    if ( (i & 3) != 0 )
    {
      v11.VidPnSourceId = v2;
      v11.ProgressId = ((unsigned __int8)i >> 1) & 1;
      DXGDODPRESENT::PresentDisplayOnlySetProgress(this, &v11);
    }
    i >>= 2;
  }
}
