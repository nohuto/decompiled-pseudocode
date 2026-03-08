/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x1402975A8
 * Callers:
 *     SepCommonAccessCheckEx @ 0x140206FC0 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x140208450 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x140208E18 (SepNormalAccessCheckEx.c)
 *     SepFilterCheck @ 0x140263850 (SepFilterCheck.c)
 *     SeAccessCheckWithHint @ 0x1402653A0 (SeAccessCheckWithHint.c)
 *     SepNormalAccessCheck @ 0x140267220 (SepNormalAccessCheck.c)
 *     SeAccessCheckByType @ 0x14033BB40 (SeAccessCheckByType.c)
 *     SepMaximumAccessCheckEx @ 0x1403C8AF0 (SepMaximumAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406973E0 (SepAccessCheckAndAuditAlarm.c)
 *     SeExamineSacl @ 0x1408A18B0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CB8C4 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1402475E0 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14029705C (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepMemAlloc @ 0x140297BFC (AuthzBasepMemAlloc.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x14066BF9C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, __int64 *a2)
{
  int v3; // ebx
  _BYTE *v4; // rdi
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // r14
  _QWORD *v10; // rax
  unsigned int v11; // r12d
  int v13; // eax
  int v14; // r15d
  int v15; // eax
  size_t v16; // [rsp+20h] [rbp-E0h]
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 *v21; // [rsp+50h] [rbp-B0h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v21 = a2;
  v19 = 2;
  v18 = 0;
  v17 = 256;
  v3 = 0;
  v20 = 0LL;
  v4 = P;
  v5 = (_DWORD *)AuthzBasepMemAlloc(48LL, a2, 1950442835LL);
  v8 = (__int64)v5;
  if ( !v5 )
    return (unsigned int)-1073741801;
  *v5 = 0;
  v9 = a1 + 8;
  v10 = v5 + 2;
  *(_DWORD *)(v8 + 24) = 0;
  v11 = 0;
  v10[1] = v10;
  *v10 = v10;
  *(_QWORD *)(v8 + 40) = v8 + 32;
  *(_QWORD *)(v8 + 32) = v8 + 32;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_12;
  do
  {
    if ( v4 && v4 != P )
      ExFreePoolWithTag(v4, 0);
    v17 = 256;
    v4 = P;
    if ( *(_BYTE *)v9 != 18 || (*(_BYTE *)(v9 + 1) & 8) != 0 )
      goto LABEL_7;
    v13 = 4 * *(unsigned __int8 *)(v9 + 9);
    v14 = *(unsigned __int16 *)(v9 + 2) - v13;
    v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
           v9 + 8 + (unsigned int)(v13 + 8),
           (unsigned int)(v14 - 16),
           P,
           &v17);
    if ( v3 == -1073741789 )
    {
      v4 = (_BYTE *)AuthzBasepMemAlloc(v17, v6, 1950442835LL);
      if ( !v4 )
      {
        v3 = -1073741801;
LABEL_29:
        AuthzBasepFreeSecurityAttributesList(v8, v6, v7);
        ExFreePoolWithTag((PVOID)v8, 0);
        return (unsigned int)v3;
      }
      v3 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
             v9 + 4 * (*(unsigned __int8 *)(v9 + 9) + 4LL),
             (unsigned int)(v14 - 16),
             v4,
             &v17);
    }
    if ( v3 < 0 )
      break;
    *((_QWORD *)&v20 + 1) = v4;
    LOWORD(v20) = 1;
    DWORD1(v20) = 1;
    LODWORD(v16) = 0;
    v15 = AuthzBasepQuerySecurityAttributesToken((_DWORD *)v8, (__int64)v4, 1LL, 0LL, v16, &v18);
    v3 = v15;
    if ( v15 == -1073741789 || v15 == -1073741275 )
    {
      v3 = 0;
    }
    else if ( v15 < 0 )
    {
      break;
    }
    if ( v18 <= 0x10 )
    {
      v3 = AuthzBasepSetSecurityAttributesToken(v8, &v19, (__int64)&v20);
      if ( v3 < 0 )
        break;
    }
LABEL_7:
    ++v11;
    v9 += *(unsigned __int16 *)(v9 + 2);
  }
  while ( v11 < *(unsigned __int16 *)(a1 + 4) );
  if ( v4 && v4 != P )
    ExFreePoolWithTag(v4, 0);
  if ( v3 < 0 )
    goto LABEL_29;
LABEL_12:
  *v21 = v8;
  return (unsigned int)v3;
}
