/*
 * XREFs of _CmGetMatchingFilteredDeviceListWorker @ 0x140A62368
 * Callers:
 *     _CmGetMatchingFilteredDeviceList @ 0x140778448 (_CmGetMatchingFilteredDeviceList.c)
 * Callees:
 *     _CmGetMatchingDeviceListForSubkey @ 0x140823CD0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetDeviceRelationsList @ 0x14084ECA4 (_CmGetDeviceRelationsList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmGetMatchingFilteredDeviceListWorker(
        __int64 a1,
        const WCHAR *a2,
        int a3,
        char (__fastcall *a4)(__int64 a1, __int64 a2, unsigned int a3, __int64 a4),
        _QWORD *a5,
        _WORD *a6,
        unsigned int a7,
        _DWORD *a8,
        __int16 a9)
{
  char (__fastcall *v9)(__int64, __int64, unsigned int, __int64); // rdi
  unsigned int MatchingDeviceListForSubkey; // ebx
  _QWORD *v11; // rax
  _WORD *v14; // [rsp+28h] [rbp-58h]
  unsigned int v15; // [rsp+30h] [rbp-50h]
  _DWORD *v16; // [rsp+38h] [rbp-48h]
  _QWORD v17[3]; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v18; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]
  char (__fastcall *v21)(__int64, __int64, unsigned int, __int64); // [rsp+70h] [rbp-10h]
  __int64 v22; // [rsp+78h] [rbp-8h]

  v9 = a4;
  *a8 = 0;
  if ( a7 )
    *a6 = 0;
  if ( (a3 & 0xFFFFFE00) != 0 || a9 )
    return (unsigned int)-1073741811;
  if ( (a3 & 0x7C) != 0 )
  {
    if ( !a2 )
      return (unsigned int)-1073741811;
    return (unsigned int)CmGetDeviceRelationsList(a1, a2, a3, (int)a6, a7, (__int64)a8);
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 0x80u) != 0 )
    {
      if ( !a2 )
        return (unsigned int)-1073741811;
      v16 = a8;
      v15 = a7;
      v17[2] = a5;
      v11 = v17;
      v14 = a6;
      a4 = CmClassFilterCallback;
      v17[0] = a2;
      v17[1] = v9;
      return (unsigned int)CmGetMatchingDeviceListForSubkey(
                             a1,
                             0LL,
                             BYTE1(a3) & 1,
                             (__int64)a4,
                             (__int64)v11,
                             v14,
                             v15,
                             v16);
    }
    if ( (a3 & 1) == 0 )
    {
      v11 = a5;
      v16 = a8;
      v15 = a7;
      v14 = a6;
      return (unsigned int)CmGetMatchingDeviceListForSubkey(
                             a1,
                             0LL,
                             BYTE1(a3) & 1,
                             (__int64)a4,
                             (__int64)v11,
                             v14,
                             v15,
                             v16);
    }
    if ( !a2 )
      return (unsigned int)-1073741811;
    return (unsigned int)CmGetMatchingDeviceListForSubkey(a1, a2, BYTE1(a3) & 1, (__int64)a4, (__int64)a5, a6, a7, a8);
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  v22 = (__int64)a5;
  v18 = a2;
  v20 = 0LL;
  P = 0LL;
  v21 = a4;
  MatchingDeviceListForSubkey = CmGetMatchingDeviceListForSubkey(
                                  a1,
                                  0LL,
                                  BYTE1(a3) & 1,
                                  (__int64)CmServiceFilterCallback,
                                  (__int64)&v18,
                                  a6,
                                  a7,
                                  a8);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return MatchingDeviceListForSubkey;
}
