/*
 * XREFs of ??1CUmdfSvcConfig@@QEAA@XZ @ 0x1C0086738
 * Callers:
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CUmdfSvcConfig::~CUmdfSvcConfig(CUmdfSvcConfig *this)
{
  void *m_Key; // rcx

  if ( this->m_AutoClose )
  {
    m_Key = this->m_Key;
    if ( m_Key )
      ZwClose(m_Key);
  }
}
