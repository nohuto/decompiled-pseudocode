/*
 * XREFs of ?GetBuffer@FxRequestSystemBuffer@@UEAAPEAXXZ @ 0x1C000E3E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall FxRequestSystemBuffer::GetBuffer(FxRequestSystemBuffer *this)
{
  unsigned __int8 *v2; // rcx
  int v4; // ecx
  int v5; // ecx
  _MDL *m_Mdl; // rcx

  v2 = (unsigned __int8 *)*((_QWORD *)this[-7].m_Buffer + 23);
  if ( *v2 != 3 && *v2 != 4 )
  {
    if ( (unsigned int)*v2 - 14 <= 1 )
      return this->m_Buffer;
    return 0LL;
  }
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v2 + 5) + 64LL) - 48LL) + 212LL) - 1;
  if ( !v4 )
    return this->m_Buffer;
  v5 = v4 - 1;
  if ( !v5 )
    return this->m_Buffer;
  if ( v5 != 1 )
    return 0LL;
  m_Mdl = this->m_Mdl;
  if ( (m_Mdl->MdlFlags & 5) != 0 )
    return m_Mdl->MappedSystemVa;
  else
    return MmMapLockedPagesSpecifyCache(m_Mdl, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x40000010);
}
