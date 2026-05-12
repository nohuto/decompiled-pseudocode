/*
 * XREFs of DeviceIdShimHookDeviceControl @ 0x1C00585F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C00334DC (WPP_SF_.c)
 */

__int64 __fastcall DeviceIdShimHookDeviceControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int8 *v4; // r8
  __int64 v6; // rbp
  _BYTE *v7; // rdx
  _DWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax

  v2 = *(_QWORD *)(a1 + 64);
  v4 = *(unsigned __int8 **)(a2 + 184);
  v6 = *v4;
  if ( *(_DWORD *)v2 == 1 )
  {
    v7 = *(_BYTE **)(v2 + 104);
    if ( v7 )
    {
      if ( (*v7 & 0x1F) == 0xD && *((_DWORD *)v4 + 6) == 2954240 )
      {
        v8 = *(_DWORD **)(a2 + 24);
        if ( v8 )
        {
          if ( !v8[1] && *v8 == 2 )
          {
            v9 = *((unsigned int *)v4 + 2);
            if ( (unsigned int)v9 >= 8 )
            {
              if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
              {
                WPP_SF_(
                  (__int64)WPP_GLOBAL_Control->AttachedDevice,
                  0x12u,
                  (__int64)&WPP_4131ae18f80433647a9f36ec3f2e372c_Traceguids);
              }
              (*(void (__fastcall **)(__int64, __int64, __int64 (__fastcall *)(), __int64))(qword_1C0069258 + 8))(
                a1,
                a2,
                DeviceIdShimStorageDeviceIdCompletionHook,
                v9);
            }
          }
        }
      }
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))qword_1C0069258)(*(_QWORD *)(a1 + 8));
  return (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 8 * v6 + 32))(a1, a2);
}
