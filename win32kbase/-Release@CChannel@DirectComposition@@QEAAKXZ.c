/*
 * XREFs of ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C0098628
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C005CAC0 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C009846C (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0098528 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x1C024B440 (-UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CChannel::Release(DirectComposition::CChannel *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    (*(void (__fastcall **)(DirectComposition::CChannel *))(*(_QWORD *)this + 24LL))(this);
  return v1;
}
