struct CVirtualAddressAllocator *__fastcall VIDMM_PROCESS::GetVirtualAddressAllocator(
        VIDMM_PROCESS *this,
        unsigned int a2,
        unsigned int a3)
{
  _QWORD *v3; // r9

  v3 = *(_QWORD **)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( !v3 || !*(_DWORD *)(*v3 + 40928LL) )
    return 0LL;
  if ( (*((_DWORD *)this + 24) & 2) != 0 )
    return *(struct CVirtualAddressAllocator **)(*v3 + 8LL * a3 + 40416);
  return (struct CVirtualAddressAllocator *)v3[63];
}
