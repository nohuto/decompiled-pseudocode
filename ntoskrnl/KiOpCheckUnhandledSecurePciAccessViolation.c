/*
 * XREFs of KiOpCheckUnhandledSecurePciAccessViolation @ 0x14057CD3C
 * Callers:
 *     KiPreprocessFault @ 0x140362554 (KiPreprocessFault.c)
 * Callees:
 *     KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress @ 0x14057CF34 (KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress.c)
 */

void __fastcall KiOpCheckUnhandledSecurePciAccessViolation(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  unsigned __int16 v7; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v8[3]; // [rsp+34h] [rbp-Ch] BYREF
  unsigned __int8 v9; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int8 v10; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int8 v11; // [rsp+78h] [rbp+38h] BYREF

  v3 = *(_QWORD *)(a1 + 104);
  v8[0] = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v7 = 0;
  if ( v3 != -1
    && (int)KiOpGetPciConfigSpaceAccessInfoFromPhysicalAddress(
              v3,
              (unsigned int)&v7,
              (unsigned int)&v9,
              (unsigned int)&v10,
              (__int64)&v11,
              (__int64)v8) >= 0 )
  {
    v5 = (unsigned __int64)v7 << 8;
    *(_DWORD *)a2 = 268435465;
    *(_DWORD *)(a2 + 24) = 4;
    *(_QWORD *)(a2 + 32) = *(unsigned __int8 *)(a1 + 56);
    v6 = v11 | (8 * (v10 | (32 * (v9 | v5))));
    *(_QWORD *)(a2 + 48) = v8[0];
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 40) = v6;
  }
}
