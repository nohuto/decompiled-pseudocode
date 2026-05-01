/*
 * XREFs of ?_HasListenerID@?$ObservableProperty@V?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@@@AEAA_NPEAX@Z @ 0x180404434
 * Callers:
 *     ObservableProperty_Windows::Internal::NativeString_Windows::Internal::CoTaskMemPolicy_unsigned_short_____::AddListener__lambda_f388ba99653cfb86d5d2a92c071f58bb___ @ 0x18040265C (ObservableProperty_Windows--Internal--NativeString_Windows--Internal--CoTaskMemPolicy_unsigned_s.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ObservableProperty<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>>::_HasListenerID(
        __int64 a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi

  v2 = *(_QWORD **)(a1 + 24);
  v4 = &v2[*(_QWORD *)(a1 + 32)];
  while ( 1 )
  {
    if ( v2 == v4 )
      return 0;
    if ( (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 32LL))(*v2) == a2 )
      break;
    ++v2;
  }
  return 1;
}
