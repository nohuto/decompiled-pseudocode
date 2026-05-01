/*
 * XREFs of DSA_EnumCallback @ 0x18014FB64
 * Callers:
 *     ??1CPinList@@QEAA@XZ @ 0x180152D74 (--1CPinList@@QEAA@XZ.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x18015B980 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     DSA_GetItemPtr @ 0x1804E7B50 (DSA_GetItemPtr.c)
 */

void __stdcall DSA_EnumCallback(HDSA hdsa, PFNDAENUMCALLBACK pfnCB, void *pData)
{
  int i; // ebx
  PVOID ItemPtr; // rax

  if ( hdsa )
  {
    if ( pfnCB )
    {
      for ( i = 0; i < *(_DWORD *)hdsa; ++i )
      {
        ItemPtr = DSA_GetItemPtr(hdsa, i);
        if ( !((unsigned int (__fastcall *)(PVOID, void *))pfnCB)(ItemPtr, pData) )
          break;
      }
    }
  }
}
