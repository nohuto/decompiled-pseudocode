/*
 * XREFs of ?GetInputFormat@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x140017010
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CFF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetInputFormat(
        CSystemAudioDeviceSharedBase *this,
        struct tWAVEFORMATEX **a2)
{
  void (__fastcall ***v4)(_QWORD, GUID *, __int64 *); // r9
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  __int128 v9; // [rsp+28h] [rbp-30h]
  __int128 v10; // [rsp+38h] [rbp-20h] BYREF

  v9 = *(_OWORD *)((char *)this - 56);
  v10 = v9;
  EtwEventActivityIdControl(4LL, &v10);
  v4 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 3);
  v5 = 0LL;
  v8 = 0LL;
  if ( v4 )
  {
    (**v4)(v4, &GUID_394afc11_8be4_4e54_b91c_8fcc82d1f0a6, &v8);
    v5 = v8;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, struct tWAVEFORMATEX **))(*(_QWORD *)v5 + 64LL))(v5, a2);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  EtwEventActivityIdControl(4LL, &v10);
  return v6;
}
