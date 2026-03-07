struct DXGCOPYPROTECTION *__fastcall ADAPTER_DISPLAY::FindCopyProtection(
        ADAPTER_DISPLAY *this,
        int a2,
        int a3,
        struct DXGPROCESS *a4)
{
  struct DXGCOPYPROTECTION *v4; // rcx
  struct DXGCOPYPROTECTION *result; // rax

  v4 = (ADAPTER_DISPLAY *)((char *)this + 80);
  for ( result = *(struct DXGCOPYPROTECTION **)v4; result != v4 && result; result = *(struct DXGCOPYPROTECTION **)result )
  {
    if ( *((_DWORD *)result + 12) == a3 && *((_DWORD *)result + 13) == a2 && *((struct DXGPROCESS **)result + 5) == a4 )
      return result;
  }
  return 0LL;
}
