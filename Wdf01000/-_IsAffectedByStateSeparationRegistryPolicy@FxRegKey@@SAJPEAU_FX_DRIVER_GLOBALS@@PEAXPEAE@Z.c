/*
 * XREFs of ?_IsAffectedByStateSeparationRegistryPolicy@FxRegKey@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAE@Z @ 0x1C004E150
 * Callers:
 *     ?_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C004E4D4 (-_VerifyStateSeparationRegistryPolicy@FxRegKey@@SAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 */

__int64 __fastcall FxRegKey::_IsAffectedByStateSeparationRegistryPolicy(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        void *Key,
        unsigned __int8 *IsAffectedResult)
{
  NTSTATUS v6; // eax
  NTSTATUS v7; // ebx
  ULONG Tag; // ecx
  bool v9; // zf
  void *v10; // rax
  FX_POOL **v11; // rdi
  unsigned int keyNameInfoSize; // [rsp+30h] [rbp-D0h] BYREF
  _UNICODE_STRING systemMachineHiveRoot; // [rsp+38h] [rbp-C8h] BYREF
  _UNICODE_STRING softwareMachineHiveRoot; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING fullKeyPath; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING bspdriversMachineHiveRoot; // [rsp+68h] [rbp-98h] BYREF
  __m128i v18; // [rsp+80h] [rbp-80h] BYREF
  _KEY_NAME_INFORMATION keyNameInfo; // [rsp+90h] [rbp-70h] BYREF
  wchar_t bspdriversMachineHiveRoot_buffer[32]; // [rsp+98h] [rbp-68h] BYREF
  wchar_t systemMachineHiveRoot_buffer[28]; // [rsp+D8h] [rbp-28h] BYREF
  wchar_t softwareMachineHiveRoot_buffer[28]; // [rsp+110h] [rbp+10h] BYREF
  void *retaddr; // [rsp+178h] [rbp+78h]

  keyNameInfo = 0LL;
  keyNameInfoSize = 0;
  systemMachineHiveRoot.Buffer = systemMachineHiveRoot_buffer;
  softwareMachineHiveRoot.Buffer = softwareMachineHiveRoot_buffer;
  *(_QWORD *)&systemMachineHiveRoot.Length = 3407922LL;
  *(_QWORD *)&softwareMachineHiveRoot.Length = 3670070LL;
  *(_QWORD *)&bspdriversMachineHiveRoot.Length = 3932218LL;
  bspdriversMachineHiveRoot.Buffer = bspdriversMachineHiveRoot_buffer;
  fullKeyPath = 0LL;
  wcscpy(systemMachineHiveRoot_buffer, L"\\REGISTRY\\MACHINE\\SYSTEM\\");
  wcscpy(softwareMachineHiveRoot_buffer, L"\\REGISTRY\\MACHINE\\SOFTWARE\\");
  wcscpy(bspdriversMachineHiveRoot_buffer, L"\\REGISTRY\\MACHINE\\BSPDRIVERS\\");
  if ( FxDriverGlobals && Key && IsAffectedResult )
  {
    *IsAffectedResult = 0;
    v6 = ZwQueryKey(Key, KeyNameInformation, &keyNameInfo, 8u, &keyNameInfoSize);
    v7 = v6;
    if ( v6 == -2147483643 )
    {
      Tag = FxDriverGlobals->Tag;
      v9 = FxDriverGlobals->FxPoolTrackingOn == 0;
      v18.m128i_i64[0] = 0LL;
      keyNameInfoSize += 2;
      v18.m128i_i64[1] = 256LL;
      if ( v9 )
        v10 = 0LL;
      else
        v10 = retaddr;
      v11 = FxPoolAllocator(FxDriverGlobals, &FxDriverGlobals->FxPoolFrameworks, &v18, keyNameInfoSize, Tag, v10);
      if ( v11 )
      {
        v7 = ZwQueryKey(Key, KeyNameInformation, v11, keyNameInfoSize, &keyNameInfoSize);
        if ( v7 >= 0 )
        {
          RtlInitUnicodeString(&fullKeyPath, (PCWSTR)v11 + 2);
          if ( RtlPrefixUnicodeString(&systemMachineHiveRoot, &fullKeyPath, 1u)
            || RtlPrefixUnicodeString(&softwareMachineHiveRoot, &fullKeyPath, 1u)
            || RtlPrefixUnicodeString(&bspdriversMachineHiveRoot, &fullKeyPath, 1u) )
          {
            *IsAffectedResult = 1;
          }
        }
        FxPoolFree((FX_POOL_TRACKER *)v11);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
    else if ( v6 >= 0 )
    {
      return (unsigned int)-1073741823;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
