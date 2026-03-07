void __fastcall UsbhEtwLogDeviceIrpEvent(__int64 a1, __int64 a2, const EVENT_DESCRIPTOR *a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rdx
  const GUID *v7; // rdx
  __int128 v8; // [rsp+98h] [rbp-20h] BYREF

  v8 = 0LL;
  if ( dword_1C006B690 )
  {
    v5 = *(_QWORD *)(a1 + 1184);
    if ( !v5 )
      UsbhTrapFatal_Dbg(0LL, 0LL);
    v6 = *(_DWORD **)(v5 + 64);
    if ( !v6 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1184), 0LL);
    if ( *v6 != 541218120 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(a1 + 1184), v6);
    if ( a2 && g_IoGetActivityIdIrp && (int)g_IoGetActivityIdIrp(a2, &v8) >= 0 )
      v7 = (const GUID *)&v8;
    else
      v7 = 0LL;
    UsbhEtwWrite(a3, v7);
  }
}
