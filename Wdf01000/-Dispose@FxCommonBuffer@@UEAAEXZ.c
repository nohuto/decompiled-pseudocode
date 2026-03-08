/*
 * XREFs of ?Dispose@FxCommonBuffer@@UEAAEXZ @ 0x1C0020520
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

unsigned __int8 __fastcall FxCommonBuffer::Dispose(FxCommonBuffer *this)
{
  if ( this->m_BufferRawVA )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))this->m_DmaEnabler->m_SimplexAdapterInfo.AdapterObject->DmaOperations->FreeCommonBuffer)(
      this->m_DmaEnabler->m_SimplexAdapterInfo.AdapterObject,
      LODWORD(this->m_RawLength),
      (_LARGE_INTEGER)this->m_BufferRawLA.QuadPart);
  return 1;
}
