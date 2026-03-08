/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x140841554
 * Callers:
 *     SeRmInitPhase1 @ 0x140B614EC (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14029705C (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1402FF8B0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x1407447E0 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *SecurityAttributesList; // rdi
  char IsMultiSessionSku; // al
  char v7; // si
  unsigned int v8; // ebx
  _DWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-38h]
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 *v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+84h] [rbp+24h]
  __int64 v17; // [rsp+88h] [rbp+28h] BYREF

  v16 = HIDWORD(a1);
  v12[0] = 3145774LL;
  v12[1] = L"WIN://ISMULTISESSIONSKU";
  v10[0] = 1;
  v14 = 0LL;
  v2 = 0LL;
  v13 = 0LL;
  v15 = 2;
  v10[1] = 1;
  v11 = v12;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(a1, a2);
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku(v4, v3);
    DWORD2(v13) = 1;
    v7 = IsMultiSessionSku;
    LOBYTE(v2) = IsMultiSessionSku != 0;
    LOWORD(v13) = 6;
    v17 = v2;
    v14 = &v17;
    v8 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v15, (__int64)v10);
    if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
    {
      v8 = -1073741823;
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
    }
    else
    {
      SepAllowAccessUponLogoff = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
