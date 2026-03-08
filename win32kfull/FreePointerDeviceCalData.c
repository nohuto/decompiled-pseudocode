/*
 * XREFs of FreePointerDeviceCalData @ 0x1C01C41D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreePointerDeviceCalData(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = *(void **)(a1 + 16);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v4 = *(void **)(a1 + 32);
  if ( v4 )
  {
    Win32FreePool(v4);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  v5 = *(void **)(a1 + 48);
  if ( v5 )
  {
    Win32FreePool(v5);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  v6 = *(void **)(a1 + 64);
  if ( v6 )
  {
    Win32FreePool(v6);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
}
