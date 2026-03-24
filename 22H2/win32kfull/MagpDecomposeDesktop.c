/*
 * XREFs of MagpDecomposeDesktop @ 0x1C00EB284
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C00EAA3C (zzzDecomposeDesktop.c)
 * Callees:
 *     MagpRevokeInputTransfrom @ 0x1C00EB300 (MagpRevokeInputTransfrom.c)
 *     DwmAsyncMagnDestroy @ 0x1C0273E4C (DwmAsyncMagnDestroy.c)
 *     DwmAsyncMagnSetDesktopColorTransform @ 0x1C0273EFC (DwmAsyncMagnSetDesktopColorTransform.c)
 *     DwmAsyncMagnSetDesktopTransform @ 0x1C0274168 (DwmAsyncMagnSetDesktopTransform.c)
 */

__int64 __fastcall MagpDecomposeDesktop(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *i; // rsi
  void *v8; // rax
  void *v9; // rax
  __int64 *j; // rdi
  void *v11; // rax

  result = MagpRevokeInputTransfrom();
  if ( *(_QWORD *)(a2 + 232) )
  {
    v8 = (void *)ReferenceDwmApiPort(v6, v5);
    result = DwmAsyncMagnSetDesktopColorTransform(v8);
  }
  if ( *(_QWORD *)(a2 + 224) )
  {
    v9 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v5);
    result = DwmAsyncMagnSetDesktopTransform(v9, 0);
  }
  for ( i = (_QWORD *)*a1; i != a1; i = (_QWORD *)*i )
  {
    for ( j = (__int64 *)i[5]; j != i + 5; j = (__int64 *)*j )
    {
      *((_DWORD *)j + 4) |= 0x20u;
      result = j[3];
      if ( result != -1 )
      {
        v11 = (void *)ReferenceDwmApiPort(**(_QWORD **)(a2 + 8), v5);
        result = DwmAsyncMagnDestroy(v11);
      }
    }
  }
  return result;
}
