/*
 * XREFs of HvpViewMapMakeViewRangeValid @ 0x140730EE4
 * Callers:
 *     HvpViewMapCreateViewsForRegion @ 0x140730B54 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapExtendStorage @ 0x140732D5C (HvpViewMapExtendStorage.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x140779930 (HvpViewMapPromoteRangeToMapping.c)
 * Callees:
 *     CmSiPrefetchVirtualMemoryRange @ 0x1402B2C90 (CmSiPrefetchVirtualMemoryRange.c)
 *     CmSiProtectViewOfSection @ 0x14030D290 (CmSiProtectViewOfSection.c)
 *     HvpViewMapAcquireChargesAndLockViewPages @ 0x1407310B8 (HvpViewMapAcquireChargesAndLockViewPages.c)
 *     HvpViewMapTouchPages @ 0x140732810 (HvpViewMapTouchPages.c)
 */

__int64 __fastcall HvpViewMapMakeViewRangeValid(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rdi
  __int64 v7; // r14
  int v12; // esi
  __int64 v13; // rcx
  char v14; // r13
  __int64 i; // r8
  unsigned __int64 v16; // rdx
  char v17; // cl
  char v18; // cl
  __int64 v19; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // [rsp+60h] [rbp+8h] BYREF

  v5 = a2[7] - a2[3];
  v6 = a4 - a3;
  v23 = 0;
  v7 = a3 + v5;
  v12 = CmSiProtectViewOfSection(a1, *(__int64 **)(a1 + 24), v7, a4 - a3, 2u, (__int64)&v23);
  if ( v12 >= 0 )
  {
    CmSiPrefetchVirtualMemoryRange(*(__int64 **)(a1 + 24), v7, v6);
    v14 = 0;
    if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
    {
      if ( a5 && (int)HvpViewMapAcquireChargesAndLockViewPages(v13, *(_QWORD *)(a1 + 24), v7, v6) >= 0 )
      {
        v14 = 1;
        a2[8] += v6 >> 12;
        *(_DWORD *)(a1 + 32) |= 4u;
        goto LABEL_6;
      }
      v12 = CmSiProtectViewOfSection(v13, *(__int64 **)(a1 + 24), v7, v6, 8u, (__int64)&v23);
      if ( v12 >= 0 )
      {
        LOBYTE(v22) = 1;
        v12 = HvpViewMapTouchPages(v7, v6, v22);
        if ( v12 >= 0 )
        {
          CmSiProtectViewOfSection(v21, *(__int64 **)(a1 + 24), v7, v6, 2u, (__int64)&v23);
          goto LABEL_6;
        }
      }
    }
    else
    {
      v12 = HvpViewMapTouchPages(v7, v6, 0LL);
      if ( v12 >= 0 )
      {
LABEL_6:
        for ( i = a3; i < a4; i += 4096LL )
        {
          v16 = (unsigned __int64)(i - a2[3]) >> 12;
          v17 = *((_BYTE *)a2 + v16 + 72);
          *((_BYTE *)a2 + v16 + 72) = v17 | 1;
          if ( (*(_DWORD *)(a1 + 32) & 2) != 0 )
          {
            if ( v14 )
              v18 = v17 | 0x11;
            else
              v18 = v17 | 5;
            *((_BYTE *)a2 + v16 + 72) = v18;
          }
        }
        v19 = a2[5];
        if ( v19 || a2[6] )
        {
          if ( v19 == a4 )
          {
            a2[5] = a3;
            return 0;
          }
          if ( a2[6] != a3 )
            return 0;
        }
        else
        {
          a2[5] = a3;
        }
        a2[6] = a4;
        return 0;
      }
    }
    CmSiProtectViewOfSection(v21, *(__int64 **)(a1 + 24), v7, v6, 0x80000001, (__int64)&v23);
  }
  return (unsigned int)v12;
}
