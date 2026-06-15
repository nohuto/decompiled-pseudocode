/*
 * XREFs of ?RemovePipe@CSystemAudioDeviceSharedBase@@UEAAJPEAVCPipeInstance@@@Z @ 0x1400171D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::RemovePipe(
        CSystemAudioDeviceSharedBase *this,
        struct CPipeInstance *a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r9
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+28h] [rbp-30h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF

  v10 = *(_OWORD *)((char *)this - 56);
  v11 = v10;
  EtwEventActivityIdControl(4LL, &v11);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v5 = 0LL;
  v9 = 0LL;
  if ( v4 && ((**v4)(v4, &GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6, &v9), (v5 = v9) != 0) )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, struct CPipeInstance *))(*(_QWORD *)v9 + 48LL))(v9, a2);
    v5 = v9;
    v7 = v6;
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  EtwEventActivityIdControl(4LL, &v11);
  return v7;
}
