void __fastcall ResetWindowTransform(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 216);
  if ( v2 )
  {
    Win32FreePool(v2);
    *(_QWORD *)(a1 + 216) = 0LL;
  }
}
