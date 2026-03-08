/*
 * XREFs of HvFreeDirtyData @ 0x14074C830
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpDeleteHive @ 0x14074C680 (CmpDeleteHive.c)
 *     HvFoldBackDirtyData @ 0x140A1DD50 (HvFoldBackDirtyData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall HvFreeDirtyData(__int64 a1)
{
  void *v2; // rcx
  __int64 v3; // rdi
  void *v4; // rcx

  v2 = *(void **)(a1 + 1696);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_DWORD *)(a1 + 1688) = 0;
    v3 = 0LL;
    for ( *(_QWORD *)(a1 + 1696) = 0LL; (unsigned int)v3 < *(_DWORD *)(a1 + 1720); v3 = (unsigned int)(v3 + 1) )
    {
      v4 = *(void **)(*(_QWORD *)(a1 + 1712) + 24 * v3 + 8);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(*(_QWORD *)(a1 + 1712) + 24 * v3 + 8) = 0LL;
      }
    }
    ExFreePoolWithTag(*(PVOID *)(a1 + 1712), 0);
    *(_QWORD *)(a1 + 1712) = 0LL;
    *(_DWORD *)(a1 + 1720) = 0;
    *(_DWORD *)(a1 + 1724) = 0;
  }
}
