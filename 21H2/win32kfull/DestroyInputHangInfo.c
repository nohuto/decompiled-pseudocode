/*
 * XREFs of DestroyInputHangInfo @ 0x1C0132230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DestroyInputHangInfo(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned int v2; // edi
  void *v3; // rcx

  v1 = *(_QWORD **)(a1 + 1160);
  v2 = 0;
  *(_QWORD *)(a1 + 1160) = 0LL;
  if ( v1 )
  {
    v2 = 1;
    do
    {
      v3 = v1;
      v1 = (_QWORD *)*v1;
      Win32FreePool(v3);
    }
    while ( v1 );
  }
  return v2;
}
