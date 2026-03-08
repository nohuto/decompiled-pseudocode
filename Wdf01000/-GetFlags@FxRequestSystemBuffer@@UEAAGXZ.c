/*
 * XREFs of ?GetFlags@FxRequestSystemBuffer@@UEAAGXZ @ 0x1C00427F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall FxRequestSystemBuffer::GetFlags(FxRequestSystemBuffer *this)
{
  unsigned __int8 *v1; // rdx

  v1 = (unsigned __int8 *)*((_QWORD *)this[-7].m_Buffer + 23);
  return *v1 != 3
      && (*v1 == 4
       || (unsigned int)*v1 - 14 <= 1 && (*((_DWORD *)v1 + 6) & 3) != 0 && (*((_DWORD *)v1 + 6) & 3u) - 1 <= 1);
}
