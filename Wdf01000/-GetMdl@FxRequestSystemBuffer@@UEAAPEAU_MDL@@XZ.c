/*
 * XREFs of ?GetMdl@FxRequestSystemBuffer@@UEAAPEAU_MDL@@XZ @ 0x1C0042840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_MDL *__fastcall FxRequestSystemBuffer::GetMdl(FxRequestSystemBuffer *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this[-7].m_Buffer + 23);
  if ( (*(_BYTE *)v2 == 3 || *(_BYTE *)v2 == 4)
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 40) + 64LL) - 48LL) + 212LL) == 3 )
  {
    return this->m_Mdl;
  }
  else
  {
    return 0LL;
  }
}
