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
  if ( *(_QWORD *)(a2 + 232) )
  {
    v8 = (void *)ReferenceDwmApiPort(v5);
    result = DwmAsyncMagnSetDesktopColorTransform(v8);
  }
  if ( *(_QWORD *)(a2 + 224) )
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
