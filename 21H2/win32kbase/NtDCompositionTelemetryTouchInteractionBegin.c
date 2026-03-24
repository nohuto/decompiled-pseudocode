/*
 * XREFs of NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004A10
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00295D0 (Win32AllocPoolWithQuota.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005DB28 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00CF880 (memmove.c)
 */

__int64 __fastcall NtDCompositionTelemetryTouchInteractionBegin(unsigned int a1, size_t Size, char *Src)
{
  int v4; // ebx
  struct DirectComposition::CApplicationChannel *v5; // rdi
  __int64 v6; // rax
  __int64 *v7; // rdx
  struct DirectComposition::CApplicationChannel *v9; // [rsp+28h] [rbp-60h] BYREF
  __int128 v10; // [rsp+30h] [rbp-58h] BYREF
  __int128 v11; // [rsp+40h] [rbp-48h]
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+60h] [rbp-28h]

  v4 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( !Src || Size != 56 )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    if ( &Src[Size] < Src || (unsigned __int64)&Src[Size] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(&v10, Src, Size);
    v4 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v9);
    v5 = v9;
    if ( v4 >= 0 )
    {
      v4 = 0;
      v6 = Win32AllocPoolWithQuota(72LL, 1869890372LL);
      if ( !v6 )
        v4 = -1073741801;
      if ( v4 >= 0 )
      {
        *(_OWORD *)(v6 + 16) = v10;
        *(_OWORD *)(v6 + 32) = v11;
        *(_OWORD *)(v6 + 48) = v12;
        *(_QWORD *)(v6 + 64) = v13;
        v7 = (__int64 *)*((_QWORD *)v5 + 67);
        if ( (struct DirectComposition::CApplicationChannel *)*v7 != (struct DirectComposition::CApplicationChannel *)((char *)v5 + 528) )
          __fastfail(3u);
        *(_QWORD *)v6 = (char *)v5 + 528;
        *(_QWORD *)(v6 + 8) = v7;
        *v7 = v6;
        *((_QWORD *)v5 + 67) = v6;
      }
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v5)(v5);
    }
  }
  return (unsigned int)v4;
}
