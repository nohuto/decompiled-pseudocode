/*
 * XREFs of sub_180068E40 @ 0x180068E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180068E40(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64))(**(_QWORD **)(a1 + 248) + 112LL))(
         *(_QWORD *)(a1 + 248),
         &unk_18015C698,
         a1);
  v3 = v2;
  if ( v2 < 0 )
    sub_18005E8F8((__int64)"CVolumeHardware::RegisterForNotifications", 1407, v2);
  else
    *(_DWORD *)(a1 + 280) = 1;
  return v3;
}
