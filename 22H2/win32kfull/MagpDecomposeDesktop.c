/*
 * XREFs of MagpDecomposeDesktop @ 0x1C005AD84
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C005AE00 (MagpRevokeInputTransfrom.c)
 *     DwmAsyncMagnDestroy @ 0x1C026C8DC (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C026C98C (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C026CBF8 (DwmAsyncMagnSetDesktopTransform.c)
 */

__int64 __fastcall MagpDecomposeDesktop(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rcx
  _QWORD **v6; // rsi
  _QWORD *i; // rdi
  void *v8; // rax
  void *v9; // rax
  __int64 *j; // rbx
  void *v11; // rax

  result = MagpRevokeInputTransfrom();
  v6 = (_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(a2 + 240) )
  {
    v8 = (void *)ReferenceDwmApiPort(v5);
    result = DwmAsyncMagnSetDesktopColorTransform(v8);
  }
  if ( *(_QWORD *)(a2 + 232) )
  {
    v9 = (void *)ReferenceDwmApiPort(**v6);
    result = DwmAsyncMagnSetDesktopTransform(v9, 0);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      *((_DWORD *)j + 4) |= 0x20u;
      if ( j[3] != -1 )
      {
        v11 = (void *)ReferenceDwmApiPort(**v6);
        result = DwmAsyncMagnDestroy(v11);
      }
    }
  }
  return result;
}
