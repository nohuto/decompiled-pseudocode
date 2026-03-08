/*
 * XREFs of ?GenerateId@SC_DISK@@AEAAJXZ @ 0x14067305C
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1406732C0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ?CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z @ 0x14093D4B0 (-CreateGuid@SC_ENV@@SAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall SC_DISK::GenerateId(SC_DISK *this)
{
  __int64 (__fastcall *v2)(SC_DISK *, __int64, _QWORD, _QWORD, _BYTE *, int); // rax
  __int64 result; // rax
  struct _GUID *v4; // rcx
  _BYTE v5[40]; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, _BYTE *, int))(*(_QWORD *)this + 16LL);
  memset(v5, 0, sizeof(v5));
  result = v2(this, 2953348LL, 0LL, 0LL, v5, 40);
  v4 = (struct _GUID *)((char *)this + 272);
  if ( (int)result < 0 )
    return SC_ENV::CreateGuid(v4);
  *v4 = *(struct _GUID *)&v5[20];
  return result;
}
