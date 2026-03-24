/*
 * XREFs of HalpIommuJoinDmaDomain @ 0x1404C97FC
 * Callers:
 *     HalJoinDmaDomain @ 0x1403C6AE0 (HalJoinDmaDomain.c)
 *     HalpIommuUnblockDevice @ 0x1404C9DC0 (HalpIommuUnblockDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA320 (IommuDomainAttachDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x1404C904C (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C9534 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuAttachDeviceDomain @ 0x1404CBB90 (HalpIommuAttachDeviceDomain.c)
 */

__int64 __fastcall HalpIommuJoinDmaDomain(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 result; // rax
  _QWORD *v7; // rsi
  int v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+34h] [rbp-1Ch]
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  _QWORD *v12; // [rsp+60h] [rbp+10h] BYREF

  v9 = 0;
  v11 = 0LL;
  v12 = 0LL;
  if ( HalpHvIommu )
  {
    v4 = a1[3];
    v12 = 0LL;
    v9 = 0;
    v11 = 0LL;
    v10 = v4;
    LODWORD(v12) = *(_DWORD *)(a2 + 32);
    BYTE4(v12) = *(_BYTE *)(a2 + 40);
    v8 = 4;
    return (unsigned int)((__int64 (__fastcall *)(int *, _QWORD **))qword_140C4A378)(&v8, &v12);
  }
  else
  {
    result = HalpIommuGetHardwareDomain(a2, a1[1], 1, 1, (__int64 *)&v12);
    if ( (int)result < 0 )
      return result;
    v7 = v12;
    v5 = HalpIommuAttachDeviceDomain(a1[1], *a1, v12 + 4);
    if ( v5 < 0 )
      HalpIommuDereferenceHardwareDomain(a2, v7);
  }
  return (unsigned int)v5;
}
