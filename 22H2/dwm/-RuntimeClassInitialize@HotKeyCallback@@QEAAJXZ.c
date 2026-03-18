/*
 * XREFs of ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x140008220
 * Callers:
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x140005674 (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140004B00 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVHotKeyCallback@@_N@Details@WRL@Microsoft@@YAJPEAPEAUIHotKeyClient@@$$QEAPEAVHotKeyCallback@@$$QEA_N@Z @ 0x140008124 (--$MakeAndInitialize@VHotKeyClient@@UIHotKeyClient@@PEAVHotKeyCallback@@_N@Details@WRL@Microsoft.c)
 */

__int64 __fastcall HotKeyCallback::RuntimeClassInitialize(HotKeyCallback *this)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rcx
  char v7; // [rsp+20h] [rbp-18h]
  bool v8; // [rsp+40h] [rbp+8h] BYREF
  struct IHotKeyClientOwner *v9; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_QWORD *)((char *)this + 24);
  v3 = *((_QWORD *)this + 3);
  *v1 = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = CoreUICreate(v1);
  if ( v4 >= 0 )
  {
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    v8 = 0;
    v9 = this;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    Microsoft::WRL::Details::MakeAndInitialize<HotKeyClient,IHotKeyClient,HotKeyCallback *,bool>(
      (_QWORD *)this + 2,
      &v9,
      &v8);
    v7 = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, __int64, char))(**((_QWORD **)this + 2) + 24LL))(
      *((_QWORD *)this + 2),
      0LL,
      16398LL,
      66LL,
      v7);
  }
  return (unsigned int)v4;
}
