void __fastcall DXGDODPRESENT::NotifyDpc(DXGDODPRESENT *this, struct DXGADAPTER *a2)
{
  __int64 v2; // rbp
  unsigned __int64 i; // rsi
  __int64 v6; // rbx
  unsigned int updated; // eax
  struct DXGGLOBAL *Global; // rax
  bool v9; // [rsp+20h] [rbp-28h]
  _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  for ( i = _InterlockedExchange64((volatile __int64 *)this + 10, 0LL);
        (unsigned int)v2 < *(_DWORD *)this;
        v2 = (unsigned int)(v2 + 1) )
  {
    if ( _InterlockedExchange((volatile __int32 *)this + v2 + 4, 0) )
    {
      v6 = 2920LL * (unsigned int)v2;
      updated = BLTQUEUE::UpdateVsyncCount((BLTQUEUE *)(v6 + *((_QWORD *)this + 1)), 0LL);
      LODWORD(v6) = *(_DWORD *)(v6 + *((_QWORD *)this + 1) + 260);
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(*((ADAPTER_DISPLAY **)a2 + 365), a2, v2, updated, v9);
      Global = DXGGLOBAL::GetGlobal();
      HOSTVMMONITORMAPPING::TriggerRemoteVsync(
        (KSPIN_LOCK *)Global + 38111,
        *(struct _LUID *)((char *)a2 + 404),
        v6,
        0,
        0);
    }
    if ( (i & 3) != 0 )
    {
      v10.VidPnSourceId = v2;
      v10.ProgressId = ((unsigned __int8)i >> 1) & 1;
      DXGDODPRESENT::PresentDisplayOnlySetProgress(this, &v10);
    }
    i >>= 2;
  }
}
