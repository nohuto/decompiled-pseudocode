/*
 * XREFs of ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18025254C
 * Callers:
 *     ?Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x180252B20 (-Render@CVisualCapture@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z @ 0x1800CA614 (--0-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCD3DDevice@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z @ 0x180289FD8 (-EnqueueSetEvent@CD3DDevice@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CVisualCapture::EnqueueSetEvent(CVisualCapture *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  HANDLE EventW; // rax
  CD3DDevice *v5; // rbx
  signed int LastError; // eax
  __int64 v7; // rcx
  signed int v8; // edi
  int v9; // eax
  __int64 v10; // rcx
  CD3DDevice *v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(int *)(*(_QWORD *)(**((_QWORD **)this + 220) + 8LL) + 8LL) + **((_QWORD **)this + 220) + 8LL;
  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::com_ptr_t<CD3DDevice,wil::err_returncode_policy>(&v12, v3);
  SetLastError(0);
  EventW = CreateEventW(0LL, 1, 0, 0LL);
  *((_QWORD *)this + 238) = EventW;
  v5 = v12;
  if ( EventW )
  {
    v9 = CD3DDevice::EnqueueSetEvent(v12, EventW);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x7Fu, 0LL);
  }
  else
  {
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v8, 0x7Bu, 0LL);
  }
  if ( v5 )
    CD3DDevice::Release(v5);
  return (unsigned int)v8;
}
