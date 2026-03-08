/*
 * XREFs of WmipInitializeDataStructs @ 0x140B540A4
 * Callers:
 *     WmipDriverEntry @ 0x140B53F10 (WmipDriverEntry.c)
 * Callees:
 *     WmipAllocRegEntry @ 0x1403BC6F4 (WmipAllocRegEntry.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WmipAddMofResource @ 0x1408199DC (WmipAddMofResource.c)
 *     WmipAddDataSource @ 0x140867978 (WmipAddDataSource.c)
 */

__int64 WmipInitializeDataStructs()
{
  _QWORD *v0; // rbx
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 *i; // rax
  char v4[8]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v5; // [rsp+38h] [rbp-31h]
  _QWORD v6[12]; // [rsp+50h] [rbp-19h] BYREF

  *(_QWORD *)&v5 = 0x11D23915E3DFF7BDLL;
  WmipDSHeadPtr = (__int64)&WmipDSHead;
  qword_140C32158 = (__int64)&WmipDSHead;
  WmipDSHead = (__int64)&WmipDSHead;
  WmipGEHeadPtr = (__int64)&WmipGEHead;
  qword_140C32168 = (__int64)&WmipGEHead;
  WmipGEHead = (__int64)&WmipGEHead;
  WmipMRHeadPtr = (__int64)&WmipMRHead;
  qword_140C32188 = (__int64)&WmipMRHead;
  WmipMRHead = (__int64)&WmipMRHead;
  *((_QWORD *)&v5 + 1) = 0xA298B94FC0000391uLL;
  v4[0] = 0;
  v0 = WmipAllocRegEntry(-1LL, 1342177280);
  if ( !v0 )
    return 3221225626LL;
  memset(v6, 0, 0x58uLL);
  LODWORD(v6[0]) = 88;
  LODWORD(v6[2]) = 2;
  v6[3] = 0x11D1AADBC7BF35D0LL;
  *(_OWORD *)&v6[7] = v5;
  v6[4] = 0x102906C9A0004ABFLL;
  result = WmipAddDataSource((__int64)v0, (__int64)v6, 88, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v2 = WmipGEHeadPtr;
    for ( i = *(__int64 **)WmipGEHeadPtr; i != (__int64 *)v2; i = (__int64 *)*i )
      *((_DWORD *)i + 4) |= 1u;
    result = WmipAddMofResource(v0[4], L"kernelbase.dll", 1, L"MofResourceName", v4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
