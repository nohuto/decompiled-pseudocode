void __fastcall CVirtualAddressAllocator::FreeVad(struct VIDMM_VAD *a1, unsigned int a2)
{
  unsigned int v2; // esi
  _QWORD **v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax

  v2 = 0;
  if ( (*((_DWORD *)a1 + 18) & 0x7F0) != 0 )
  {
    do
    {
      v4 = (_QWORD **)((char *)a1 + 24 * v2 + 96);
      while ( 1 )
      {
        v5 = *v4;
        if ( *v4 == v4 )
          break;
        if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
          __fastfail(3u);
        *v4 = v6;
        v6[1] = v4;
        *v5 = 0LL;
        v5[1] = 0LL;
        VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v5 - 1), a2);
      }
      ++v2;
    }
    while ( v2 < ((*((_DWORD *)a1 + 18) >> 4) & 0x7Fu) );
  }
  operator delete(a1);
}
