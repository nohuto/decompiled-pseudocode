/*
 * XREFs of sub_1800D88DC @ 0x1800D88DC
 * Callers:
 *     sub_180004620 @ 0x180004620 (sub_180004620.c)
 * Callees:
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_1800D54D8 @ 0x1800D54D8 (sub_1800D54D8.c)
 */

__int64 __fastcall sub_1800D88DC(HKEY Handle, void *a2)
{
  signed int v3; // ebx
  int v4; // eax
  signed int LastError; // eax
  _BYTE pSecurityDescriptor[56]; // [rsp+20h] [rbp-38h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  PACL pSacl; // [rsp+70h] [rbp+18h] BYREF

  v3 = -2147024809;
  if ( !a2 || Handle == HKEY_CURRENT_USER_LOCAL_SETTINGS|0x7FFFFFF8LL )
    goto LABEL_14;
  pSacl = 0LL;
  v8 = 0;
  v4 = sub_1800D54D8(Handle, a2, &pSacl, &v8);
  v3 = v4;
  if ( v4 > 0 )
    v3 = (unsigned __int16)v4 | 0x80070000;
  if ( v3 < 0 )
    goto LABEL_14;
  if ( !InitializeSecurityDescriptor(pSecurityDescriptor, 1u)
    || !SetSecurityDescriptorSacl(pSecurityDescriptor, 1, pSacl, 0)
    || !SetKernelObjectSecurity(Handle, 0x10u, pSecurityDescriptor) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
  }
  if ( pSacl )
    sub_180033A70(pSacl);
  if ( v3 < 0 )
LABEL_14:
    sub_18005E8F8((__int64)"SetRegistryHandleIntegrityLevel", 472, v3);
  return (unsigned int)v3;
}
