/*
 * XREFs of ?CollectRunningTime@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@PEA_K@Z @ 0x1C0224608
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C033E9E0 (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION@@@Z @ 0x1C00463A8 (-VidSchQueryProcessAdapterStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@PEAVDXGPROCESS@@PEA.c)
 *     ?VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@GIPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION@@@Z @ 0x1C0046480 (-VidSchQueryProcessNodeStatistics@VIDSCH_EXPORT@@QEAAJPEAU_VIDSCH_GLOBAL@@GIPEAVDXGPROCESS@@PEAU.c)
 */

__int64 __fastcall DXGPROCESS::CollectRunningTime(DXGPROCESS *this, struct ADAPTER_RENDER *a2, unsigned __int64 *a3)
{
  VIDSCH_EXPORT *v3; // rsi
  struct _VIDSCH_GLOBAL *v5; // r14
  __int64 result; // rax
  unsigned int v8; // ebx
  _DWORD v9[68]; // [rsp+30h] [rbp-258h] BYREF
  _QWORD v10[34]; // [rsp+140h] [rbp-148h] BYREF

  v3 = (VIDSCH_EXPORT *)*((_QWORD *)a2 + 92);
  v5 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a2 + 93);
  *a3 = 0LL;
  if ( !v3 )
    return 3221225858LL;
  memset(v9, 0, sizeof(v9));
  memset(v10, 0, sizeof(v10));
  result = VIDSCH_EXPORT::VidSchQueryProcessAdapterStatistics(
             v3,
             v5,
             this,
             (struct _D3DKMT_QUERYSTATISTICS_PROCESS_ADAPTER_INFORMATION *)v9);
  if ( (int)result >= 0 )
  {
    v8 = 0;
    if ( v9[1] )
    {
      while ( 1 )
      {
        result = VIDSCH_EXPORT::VidSchQueryProcessNodeStatistics(
                   v3,
                   v5,
                   0xFFFFu,
                   v8,
                   this,
                   (struct _D3DKMT_QUERYSTATISTICS_PROCESS_NODE_INFORMATION *)v10);
        if ( (int)result < 0 )
          break;
        ++v8;
        *a3 += v10[0];
        if ( v8 >= v9[1] )
          return 0LL;
      }
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
