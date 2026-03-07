void __fastcall VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned __int64 a3)
{
  VIDMM_PAGE_DIRECTORY::DestroyPageDirectoryObjects(this, a2, a3);
  if ( this )
    operator delete(this);
}
