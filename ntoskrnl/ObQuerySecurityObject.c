/*
 * XREFs of ObQuerySecurityObject @ 0x14074F0EC
 * Callers:
 *     RtlIsUntrustedObject @ 0x140200E40 (RtlIsUntrustedObject.c)
 *     SepMandatorySubProcessToken @ 0x140297F20 (SepMandatorySubProcessToken.c)
 *     SepVerifyDesktopAppxImage @ 0x1405B5B50 (SepVerifyDesktopAppxImage.c)
 *     CmpCheckExeOwnerForPca @ 0x14074CBB4 (CmpCheckExeOwnerForPca.c)
 *     AstLogDeviceSDDLUpdated @ 0x14074EF88 (AstLogDeviceSDDLUpdated.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ObQuerySecurityObject(__int64 a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  __int64 v5; // r9
  __int64 result; // rax
  char v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v9 = a4;
  v8 = a2;
  v7 = 0;
  v5 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 48 + 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  result = (*(__int64 (__fastcall **)(__int64, __int64, int *, __int64, int *, __int64, _DWORD, __int64, char))(v5 + 152))(
             a1,
             1LL,
             &v8,
             a3,
             &v9,
             a1 - 48 + 40,
             *(_DWORD *)(v5 + 100),
             v5 + 76,
             v7);
  *a5 = v9;
  return result;
}
