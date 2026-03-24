/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x14079E4F8
 * Callers:
 *     SeRmInitPhase1 @ 0x140A4BA3C (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402506CC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140275910 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14030A32C (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x1406816A0 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  _QWORD *SecurityAttributesList; // rbx
  char IsMultiSessionSku; // al
  char v5; // si
  unsigned int v6; // edi
  _DWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-38h]
  _QWORD v10[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h]
  _BOOL8 *v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+84h] [rbp+24h]
  _BOOL8 v15; // [rsp+88h] [rbp+28h] BYREF

  v14 = HIDWORD(a1);
  v10[0] = 3145774LL;
  v10[1] = L"WIN://ISMULTISESSIONSKU";
  v8[0] = 1;
  v12 = 0LL;
  v11 = 0LL;
  v13 = 2;
  v8[1] = 1;
  v9 = v10;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList();
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku(v2, v1);
    DWORD2(v11) = 1;
    v5 = IsMultiSessionSku;
    LOWORD(v11) = 6;
    v15 = IsMultiSessionSku != 0;
    v12 = &v15;
    v6 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v13, (__int64)v8);
    if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
    {
      v6 = -1073741823;
    }
    else
    {
      SecurityAttributesList = 0LL;
      SepAllowAccessUponLogoff = v5;
    }
    if ( SecurityAttributesList )
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
