/*
 * XREFs of KiInitIptState @ 0x14057052C
 * Callers:
 *     KiRestoreThreadIptState @ 0x140570700 (KiRestoreThreadIptState.c)
 * Callees:
 *     <none>
 */

__int64 KiInitIptState()
{
  int v0; // r8d
  char v1; // r10
  unsigned int i; // r9d
  __int64 result; // rax

  __writemsr(0x570u, 0LL);
  v0 = KiIptMsrMask;
  if ( (KiIptMsrMask & 2) != 0 )
    __writemsr(0x560u, 0LL);
  if ( (KiIptMsrMask & 4) != 0 )
    __writemsr(0x561u, 0LL);
  __writemsr(0x571u, 0LL);
  if ( (KiIptMsrMask & 0x10) != 0 )
    __writemsr(0x572u, 0LL);
  v1 = 0;
  for ( i = 1409; i < 0x589; i += 2 )
  {
    result = (unsigned __int8)(v1 + 5);
    if ( !_bittest(&v0, result) )
      break;
    result = 0LL;
    __writemsr(i - 1, 0LL);
    __writemsr(i, 0LL);
    ++v1;
  }
  return result;
}
