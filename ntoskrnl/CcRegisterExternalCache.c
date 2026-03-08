/*
 * XREFs of CcRegisterExternalCache @ 0x1403D1220
 * Callers:
 *     <none>
 * Callees:
 *     CcAddExternalCacheToVolume @ 0x1403D12A4 (CcAddExternalCacheToVolume.c)
 *     CcAddExternalCacheInternal @ 0x1403D1300 (CcAddExternalCacheInternal.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     ExAllocatePoolWithTag @ 0x140AAB230 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CcRegisterExternalCache(__int64 a1, _QWORD *a2)
{
  _QWORD *PoolWithTag; // rax
  void *v5; // rbx
  bool v6; // zf
  int v7; // edi

  if ( !CcInitializationComplete )
    KeBugCheckEx(0x34u, 0x1E6FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1536, 0x40uLL, 0x43456343u);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    v6 = CcEnablePerVolumeLazyWriter == 0;
    *PoolWithTag = a1;
    if ( v6 )
    {
      CcAddExternalCacheInternal(PoolWithTag, &CcExternalCacheList);
      v7 = 0;
    }
    else
    {
      v7 = CcAddExternalCacheToVolume(PoolWithTag);
      if ( v7 < 0 )
      {
        ExFreePoolWithTag(v5, 0x43456343u);
        return (unsigned int)v7;
      }
    }
    *a2 = v5;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
