/*
 * XREFs of ?ndisCreateSecurityDescriptorEx@@YAJPEAXK@Z @ 0x1C010A7E8
 * Callers:
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x1C014731C (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z @ 0x1C00365BC (-ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z.c)
 */

__int64 __fastcall ndisCreateSecurityDescriptorEx(ACL *a1)
{
  __int64 result; // rax
  NTSTATUS v2; // ebx
  PACL Dacl; // [rsp+30h] [rbp+8h] BYREF

  Dacl = a1;
  RtlCreateSecurityDescriptor(&unk_1C00E6E40, 1u);
  Dacl = 0LL;
  result = ndisBuildDeviceAcl(&Dacl, 128);
  if ( (int)result >= 0 )
  {
    v2 = RtlSetDaclSecurityDescriptor(&unk_1C00E6E40, 1u, Dacl, 0);
    if ( v2 < 0 )
    {
      ExFreePoolWithTag(Dacl, 0);
      return (unsigned int)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
