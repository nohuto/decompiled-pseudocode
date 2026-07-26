/*
 * XREFs of ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C0105DEC
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C01057B4 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 * Callees:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00FC8CC (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall Ndis::BindEngine::ApplyRules(Ndis::BindEngine *this, struct _NDIS_MINIPORT_BLOCK *a2)
{
  bool m_isDirty; // al
  char v4; // di
  struct _NDIS_MINIPORT_BLOCK *m_miniport; // rcx

  m_isDirty = this->m_isDirty;
  v4 = 0;
  do
  {
    m_miniport = this->m_miniport;
    v4 |= m_isDirty;
    this->m_isDirty = 0;
    Ndis::BindRules::Apply(m_miniport, a2);
    m_isDirty = this->m_isDirty;
  }
  while ( m_isDirty );
  this->m_isDirty = v4;
}
