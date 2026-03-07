__int64 __fastcall CVirtualAddressAllocator::GetNumPde(CVirtualAddressAllocator *this, struct VIDMM_PAGE_DIRECTORY *a2)
{
  int v2; // eax
  __int64 v3; // rdx

  v2 = *(_DWORD *)a2;
  v3 = (*(_DWORD *)a2 >> 7) & 0x1F;
  if ( (v2 & 0x10) != 0 )
    return *(unsigned int *)(32 * v3 + *((_QWORD *)this + 15) + 16);
  else
    return *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 11) + 40224LL) + 48 * ((v2 & 7) + 2LL) + 1616 * v3);
}
