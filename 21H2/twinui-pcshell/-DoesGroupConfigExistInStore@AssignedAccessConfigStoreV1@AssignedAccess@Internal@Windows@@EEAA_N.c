/*
 * XREFs of ?DoesGroupConfigExistInStore@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@EEAA_NXZ @ 0x1804E93B0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_31ba29ce461459acb4fee780334ec071_::operator() @ 0x1804E8F5C (_lambda_31ba29ce461459acb4fee780334ec071_--operator().c)
 */

bool __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1::DoesGroupConfigExistInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV1 *this)
{
  char v1; // bl
  _BYTE *v3[3]; // [rsp+20h] [rbp-18h] BYREF
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v3[0] = this;
  v1 = 0;
  v3[1] = &v4;
  v4 = 0;
  if ( (int)lambda_31ba29ce461459acb4fee780334ec071_::operator()(v3) >= 0 )
    return v4 != 0;
  return v1;
}
