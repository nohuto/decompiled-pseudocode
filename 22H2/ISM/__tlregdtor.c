/*
 * XREFs of __tlregdtor @ 0x18003D1FC
 * Callers:
 *     _dynamic_initializer_for__MPCManagerClientFactory::m_spThreadReference__ @ 0x1800016C0 (_dynamic_initializer_for__MPCManagerClientFactory--m_spThreadReference__.c)
 * Callees:
 *     _free_base @ 0x18003C12A (_free_base.c)
 *     _malloc_base @ 0x18003C15A (_malloc_base.c)
 */

__int64 __fastcall _tlregdtor(__int64 a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx

  v2 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  v3 = *(_QWORD **)(v2 + 32);
  if ( !v3 )
  {
    v3 = (_QWORD *)(v2 + 48);
LABEL_7:
    *(_DWORD *)v3 = 0;
    *(_QWORD *)(v2 + 32) = v3;
    goto LABEL_8;
  }
  if ( *(_DWORD *)v3 == 30 )
  {
    v3 = malloc_base(0x100uLL);
    free_base(0LL);
    if ( !v3 )
      return 0xFFFFFFFFLL;
    v3[1] = *(_QWORD *)(v2 + 32);
    goto LABEL_7;
  }
LABEL_8:
  v3[(*(_DWORD *)v3)++ + 2] = a1;
  return 0LL;
}
