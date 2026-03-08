/*
 * XREFs of ?FreeCurrent@CThreadContext@@SAXXZ @ 0x1800AD820
 * Callers:
 *     ?DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z @ 0x1800AD788 (-DwmCoreDllMain@@YAHPEAUHINSTANCE__@@K@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CThreadContext@@AEAA@XZ @ 0x18026E3D8 (--1CThreadContext@@AEAA@XZ.c)
 */

void CThreadContext::FreeCurrent(void)
{
  CThreadContext *Value; // rax
  CThreadContext *v1; // rbx

  Value = (CThreadContext *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  v1 = Value;
  if ( Value )
  {
    CThreadContext::~CThreadContext(Value);
    operator delete(v1, 0x190uLL);
    TlsSetValue(CThreadContext::s_dwTlsIndex, 0LL);
  }
}
