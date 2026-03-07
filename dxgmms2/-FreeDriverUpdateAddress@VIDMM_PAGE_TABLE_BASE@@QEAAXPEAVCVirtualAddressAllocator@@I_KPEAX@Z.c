void __fastcall VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        __int64 a3,
        void *a4,
        void *a5)
{
  __int64 v5; // r10
  unsigned __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 **v12; // rax

  v5 = *((_QWORD *)a2 + 11);
  if ( (*(_BYTE *)(v5 + 40936) & 0x40) == 0 && (v6 = *(unsigned int *)this, (v7 = (__int16)v6 >> 13) != 0) )
  {
    if ( v7 == 1 && *(struct CVirtualAddressAllocator **)(v5 + 8 * ((v6 >> 7) & 0x1F) + 40416) != a2 )
    {
      v8 = *((_QWORD *)this + 3) + 128LL;
      v9 = *(__int64 **)v8;
      if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8
        || (v10 = *v9, *(__int64 **)(*v9 + 8) != v9)
        || (*(_QWORD *)v8 = v10,
            *(_QWORD *)(v10 + 8) = v8,
            v9[2] = *(_QWORD *)(v5 + 8LL * ((*(_DWORD *)this >> 7) & 0x1F) + 4968),
            v11 = 1616LL * ((*(_DWORD *)this >> 7) & 0x1F) + *(_QWORD *)(v5 + 40224) + 472LL,
            v12 = *(__int64 ***)(v11 + 8),
            *v12 != (__int64 *)v11) )
      {
        __fastfail(3u);
      }
      *v9 = v11;
      v9[1] = (__int64)v12;
      *v12 = v9;
      *(_QWORD *)(v11 + 8) = v9;
    }
  }
  else
  {
    VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(this, *((struct VIDMM_GLOBAL **)a2 + 11), a4, a5);
  }
}
