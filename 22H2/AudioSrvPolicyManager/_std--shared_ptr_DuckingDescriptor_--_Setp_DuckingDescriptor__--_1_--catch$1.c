/*
 * XREFs of _std::shared_ptr_DuckingDescriptor_::_Setp_DuckingDescriptor__::_1_::catch$1 @ 0x18003C7B1
 * Callers:
 *     <none>
 * Callees:
 *     ??_GDuckingDescriptor@@UEAAPEAXI@Z @ 0x18000EED0 (--_GDuckingDescriptor@@UEAAPEAXI@Z.c)
 *     _CxxThrowException_0 @ 0x18003AE03 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::shared_ptr_DuckingDescriptor_::_Setp_DuckingDescriptor__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  DuckingDescriptor *v2; // rcx

  v2 = *(DuckingDescriptor **)(a2 + 56);
  if ( v2 )
    DuckingDescriptor::`scalar deleting destructor'(v2, 1);
  throw;
}
