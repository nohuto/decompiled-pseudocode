/*
 * XREFs of CmpFindDrivers @ 0x140B34758
 * Callers:
 *     CmGetSystemDriverList @ 0x140B59568 (CmGetSystemDriverList.c)
 * Callees:
 *     HvpReleaseCellFlat @ 0x14078B2A0 (HvpReleaseCellFlat.c)
 *     CmpFindSubKeyByNumber @ 0x1407AD320 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellPaged @ 0x1407B46D0 (HvpReleaseCellPaged.c)
 *     CmpLoadServicesNode @ 0x140B32FF0 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140B332CC (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x140B340F4 (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B3493C (CmpIsLoadType.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140B34BB0 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140B96004 (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        const UNICODE_STRING *a5,
        unsigned int a6,
        __int64 a7,
        unsigned int GroupOrderList,
        char **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // r13
  unsigned int v14; // edi
  ULONG_PTR v15; // r14
  __int64 v16; // r15
  __int64 v17; // rsi
  unsigned int v18; // edi
  unsigned int v19; // r12d
  const UNICODE_STRING *v20; // r12
  const UNICODE_STRING *i; // rdi
  unsigned int v23; // r12d
  ULONG_PTR v24; // rcx
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-28h]
  __int64 v27; // [rsp+60h] [rbp-20h] BYREF
  __int64 v28; // [rsp+68h] [rbp-18h] BYREF
  _DWORD *v29; // [rsp+70h] [rbp-10h] BYREF
  _DWORD *v30; // [rsp+78h] [rbp-8h] BYREF

  v12 = 0LL;
  a6 = 0;
  v30 = 0LL;
  a7 = 0xFFFFFFFFLL;
  a10 = 0xFFFFFFFFLL;
  a12 = 0xFFFFFFFFLL;
  v25 = 0xFFFFFFFFLL;
  v14 = a2;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( !CmpLoadServicesNode(BugCheckParameter3, a2, (__int64 *)&v29, (unsigned int *)&v25) )
    return 0;
  v15 = 0LL;
  v26 = 0LL;
  v16 = 0LL;
  if ( a11 && (unsigned __int8)CmpLoadManufacturingProfileServicesNode(BugCheckParameter3, (__int64)&a10) )
  {
    v16 = v26;
    v15 = BugCheckParameter3;
  }
  if ( (unsigned __int8)CmpFindRedirectedDriverServiceStateNode(
                          BugCheckParameter3,
                          v14,
                          (__int64)&v27,
                          (__int64)&v28,
                          (__int64)&a12) )
  {
    v17 = v27;
    v12 = v28;
  }
  else
  {
    v17 = 0LL;
  }
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v14);
  if ( GroupOrderList == -1 )
    return 0;
  v18 = 0;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v29, v18, &a6);
    v19 = a6;
    ++v18;
    if ( a6 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, 0LL, v15, v16, v17, v12, 0LL) )
      CmpAddDriverToList(BugCheckParameter3, v19, BugCheckParameter3, GroupOrderList, &CmpSystemHiveName, a9, 0);
  }
  v20 = a5;
  if ( a5 )
  {
    for ( i = *(const UNICODE_STRING **)&a5->Length; i != v20; i = *(const UNICODE_STRING **)&i->Length )
    {
      if ( CmpLoadServicesNode(*(_QWORD *)&i[2].Length, LODWORD(i[2].Buffer), (__int64 *)&v30, (unsigned int *)&a7) )
      {
        v23 = 0;
        while ( 1 )
        {
          CmpFindSubKeyByNumber(*(_QWORD *)&i[2].Length, v30, v23, &a6);
          v24 = *(_QWORD *)&i[2].Length;
          ++v23;
          if ( a6 == -1 )
            break;
          if ( (unsigned __int8)CmpIsLoadType(v24, 0LL, v15, v16, v17, v12, 0LL) )
            CmpAddDriverToList(*(_QWORD *)&i[2].Length, a6, BugCheckParameter3, GroupOrderList, i + 1, a9, 0);
        }
        v20 = a5;
        if ( (*(_BYTE *)(v24 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v24, &a7);
        else
          HvpReleaseCellPaged(v24, (unsigned int *)&a7);
      }
    }
  }
  if ( v15 && v16 )
  {
    if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v15, &a10);
    else
      HvpReleaseCellPaged(v15, (unsigned int *)&a10);
  }
  if ( v17 && v12 )
  {
    if ( (*(_BYTE *)(v17 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v17, &a12);
    else
      HvpReleaseCellPaged(v17, (unsigned int *)&a12);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v25);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v25);
  return 1;
}
