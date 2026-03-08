/*
 * XREFs of CmpPartialPromoteSubkeys @ 0x140A236F0
 * Callers:
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmpHashCompressedComponent @ 0x14074BDE4 (CmpHashCompressedComponent.c)
 *     CmpFindKcbInHashEntryByName @ 0x140775070 (CmpFindKcbInHashEntryByName.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x140783798 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 *     CmpHashUnicodeComponent @ 0x1407A480C (CmpHashUnicodeComponent.c)
 *     CmpPopulateKcbStack @ 0x1407AF248 (CmpPopulateKcbStack.c)
 *     CmpStartKcbStack @ 0x1407AF450 (CmpStartKcbStack.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140A146E0 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpKeyEnumStackAdvance @ 0x140A209E8 (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140A20CD0 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackInitialize @ 0x140A21424 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackNotifyPromotion @ 0x140A21474 (CmpKeyEnumStackNotifyPromotion.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140A2163C (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140A23C40 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x140A23DDC (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 */

__int64 __fastcall CmpPartialPromoteSubkeys(__int64 a1)
{
  __int16 v2; // dx
  __int64 KcbAtLayerHeight; // rdi
  __int16 v4; // dx
  int started; // ebx
  __int16 v6; // dx
  __int64 EntryAtLayerHeight; // rax
  __int16 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int8 *v12; // r14
  int v13; // ebx
  int v14; // eax
  __int64 KcbInHashEntryByName; // rax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __m128i v20; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+50h] [rbp-B0h]
  __int16 v23[176]; // [rsp+60h] [rbp-A0h] BYREF

  memset(v23, 0, sizeof(v23));
  v20 = 0LL;
  CmpKeyEnumStackInitialize((char *)v23);
  v2 = *(_WORD *)(a1 + 2);
  v21 = 0LL;
  WORD1(v21) = -1;
  *(_OWORD *)Privileges = 0LL;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1, v2);
  started = CmpStartKcbStack((__int64)&v21, v4);
  if ( started >= 0 )
  {
    started = CmpKeyEnumStackStartFromKcbStack((__int64)v23, a1, 0LL, 0LL);
    if ( started >= 0 )
    {
      while ( 1 )
      {
        v18 = CmpKeyEnumStackAdvance(v23);
        started = v18;
        if ( v18 < 0 )
          break;
        v6 = *(_WORD *)(KcbAtLayerHeight + 66);
        if ( v6 >= 0 )
        {
          while ( 1 )
          {
            EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight((__int64)&v23[4], v6);
            if ( *(_QWORD *)(EntryAtLayerHeight + 16) )
              break;
            if ( --v6 < 0 )
              goto LABEL_9;
          }
          v9 = EntryAtLayerHeight;
LABEL_9:
          if ( v6 != v8 )
          {
            v10 = *(_QWORD *)(v9 + 16);
            v11 = (*(_BYTE *)(v10 + 2) & 0x20) == 0;
            v12 = (unsigned __int8 *)(v10 + 76);
            v13 = *(unsigned __int16 *)(v10 + 72);
            v20.m128i_i64[1] = v10 + 76;
            v20.m128i_i16[0] = v13;
            v20.m128i_i16[1] = v13;
            if ( v11 )
            {
              v16 = CmpHashUnicodeComponent(&v20);
              KcbInHashEntryByName = CmpFindKcbInHashEntryByName(
                                       *(_QWORD *)(KcbAtLayerHeight + 32),
                                       v16 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                       KcbAtLayerHeight,
                                       (__int64)&v20);
            }
            else
            {
              v14 = CmpHashCompressedComponent((unsigned __int8 *)(v10 + 76), v13);
              KcbInHashEntryByName = CmpFindKcbInHashEntryByCompressedName(
                                       *(_QWORD *)(KcbAtLayerHeight + 32),
                                       v14 + 37 * *(_DWORD *)(KcbAtLayerHeight + 16),
                                       KcbAtLayerHeight,
                                       v12,
                                       v13);
            }
            if ( KcbInHashEntryByName )
            {
              CmpPopulateKcbStack((__int64)&v21, KcbInHashEntryByName);
              v17 = CmpPromoteSingleKeyFromKcbStacks(a1, &v21, 0LL);
            }
            else
            {
              v17 = CmpPromoteSingleKeyFromParentKcbAndChildKeyNode(a1, &v23[4], 0LL);
            }
            started = v17;
            if ( v17 < 0 )
              goto LABEL_21;
            CmpKeyEnumStackNotifyPromotion(v23);
          }
        }
      }
      if ( v18 == -2147483622 )
        started = 0;
    }
  }
LABEL_21:
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  CmpKeyEnumStackCleanup((__int64)v23);
  return (unsigned int)started;
}
