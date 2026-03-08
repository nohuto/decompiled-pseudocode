/*
 * XREFs of ?ReleaseHDR10MetaData@CFlipExBuffer@@IEAAXXZ @ 0x1C007DAAC
 * Callers:
 *     ?ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ @ 0x1C007D180 (-ClearHDR10MetaData@CFlipExBuffer@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::ReleaseHDR10MetaData(CFlipExBuffer *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 46);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 46) = 0LL;
  }
}
