/*
 * XREFs of HalpIommuAllocateRemappingTableEntry @ 0x14050B7E8
 * Callers:
 *     HalpIrtAllocateIndex @ 0x14080BD48 (HalpIrtAllocateIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpIommuConvertPciBusMasterDescriptorToDeviceId @ 0x14050B954 (HalpIommuConvertPciBusMasterDescriptorToDeviceId.c)
 */

__int64 __fastcall HalpIommuAllocateRemappingTableEntry(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        char a7)
{
  __int128 *v8; // rdi
  unsigned int v11; // r15d
  __int128 *v12; // r8
  ULONG_PTR *v13; // rbx
  unsigned int v14; // edx
  ULONG_PTR *v15; // rcx
  __int64 (__fastcall *v16)(ULONG_PTR, _QWORD, _QWORD, _QWORD, int, int, int, int, __int128 *); // r10
  int v18; // [rsp+20h] [rbp-78h]
  int v19; // [rsp+28h] [rbp-70h]
  int v20; // [rsp+30h] [rbp-68h]
  __int128 v21; // [rsp+50h] [rbp-48h] BYREF
  __int64 v22; // [rsp+60h] [rbp-38h]

  v8 = 0LL;
  v11 = a2;
  v21 = 0LL;
  v22 = 0LL;
  if ( a6 )
  {
    LOBYTE(a2) = a7;
    HalpIommuConvertPciBusMasterDescriptorToDeviceId(a6, a2, &v21);
    v12 = &v21;
    if ( !(_DWORD)v21 )
      v12 = 0LL;
    v8 = v12;
  }
  v13 = (ULONG_PTR *)HalpIommuList;
  v14 = 0;
  while ( v13 != &HalpIommuList )
  {
    v15 = v13;
    v13 = (ULONG_PTR *)*v13;
    if ( (v15[61] & 0x40) != 0 )
    {
      v16 = (__int64 (__fastcall *)(ULONG_PTR, _QWORD, _QWORD, _QWORD, int, int, int, int, __int128 *))v15[20];
      if ( v16 )
      {
        LOBYTE(v20) = (a4 >> 5) & 7;
        LOBYTE(v19) = a4 & 0x1F;
        LOWORD(v18) = (unsigned __int8)a3;
        v14 = v16(v15[2], a1, v11, a3 >> 8, v18, v19, v20, a5, v8);
        if ( v14 != -1073741594 )
          break;
      }
    }
  }
  return v14;
}
