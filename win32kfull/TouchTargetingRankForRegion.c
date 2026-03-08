/*
 * XREFs of TouchTargetingRankForRegion @ 0x1C0251870
 * Callers:
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01E4C7C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 * Callees:
 *     TouchTargetingRankForRect @ 0x1C0251150 (TouchTargetingRankForRect.c)
 */

__int64 __fastcall TouchTargetingRankForRegion(__int64 a1, struct tagRECT *a2, int *a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v9; // bp
  unsigned int RegionData; // eax
  unsigned int v11; // edi
  __int64 v12; // rax
  struct tagRECT *v13; // rbx
  int right; // eax
  struct tagRECT *v15; // rdi
  __int64 v16; // rsi
  struct tagRECT v17; // xmm1
  unsigned __int16 v18; // cx
  __int64 v20; // [rsp+30h] [rbp-58h] BYREF
  struct tagRECT v21; // [rsp+40h] [rbp-48h] BYREF
  struct tagRECT v22; // [rsp+50h] [rbp-38h] BYREF

  v20 = 0LL;
  v9 = 4094;
  RegionData = GreGetRegionData(a1, 0LL, 0LL);
  v11 = RegionData;
  if ( RegionData )
  {
    v12 = Win32AllocPoolZInit((int)RegionData, 1920103253LL);
    v13 = (struct tagRECT *)v12;
    if ( v12 )
    {
      if ( (unsigned int)GreGetRegionData(a1, v11, v12) )
      {
        right = v13->right;
        v15 = v13 + 2;
        if ( right > 0 )
        {
          v16 = (unsigned int)right;
          do
          {
            v17 = *v15;
            v21 = *a2;
            v22 = v17;
            v18 = TouchTargetingRankForRect(&v22, &v21, a3, 0LL, (int *)&v20, a5);
            if ( v18 < v9 )
            {
              v9 = v18;
              *a4 = v20;
            }
            ++v15;
            --v16;
          }
          while ( v16 );
        }
      }
      Win32FreePool(v13);
    }
  }
  return v9;
}
