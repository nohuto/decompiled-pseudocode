/*
 * XREFs of IopLiveDumpAllocateIptBuffers @ 0x14094AC38
 * Callers:
 *     IopLiveDumpAllocAndInitResources @ 0x1409495FC (IopLiveDumpAllocAndInitResources.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1405579B4 (IopLiveDumpIsUnderMemoryPressure.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     IopLiveDumpDiscardVirtualAddressRange @ 0x14094AFA4 (IopLiveDumpDiscardVirtualAddressRange.c)
 */

__int64 __fastcall IopLiveDumpAllocateIptBuffers(__int64 a1)
{
  unsigned int v1; // ebx
  void **v2; // r14
  unsigned int v4; // eax
  __int64 v5; // rdx
  unsigned int v6; // esi
  __int64 IndependentPages; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v1 = 0;
  *(_DWORD *)(a1 + 1060) = 0x10000000;
  v2 = (void **)(a1 + 1048);
  *(_QWORD *)(a1 + 1080) = 0LL;
  v11 = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(IptInterface + 40))(2LL, 0LL, a1 + 1048, 48LL);
  v4 = *(_DWORD *)(a1 + 1088);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 1080);
    if ( v5 )
      IopLiveDumpDiscardVirtualAddressRange(a1, v5, v4);
    v6 = *(_DWORD *)(a1 + 1088);
    *(_QWORD *)(a1 + 1080) = 0LL;
    *(_DWORD *)(a1 + 1088) = 0;
    *(_DWORD *)(a1 + 1056) = 0;
    IndependentPages = MmAllocateIndependentPagesEx(v6, -1, 0LL, 0);
    *v2 = (void *)IndependentPages;
    if ( IndependentPages )
    {
      *(_DWORD *)(a1 + 1056) = v6;
      if ( IopLiveDumpIsUnderMemoryPressure(a1) )
        return (unsigned int)-1073741248;
      IopLiveDumpDiscardVirtualAddressRange(a1, *v2, (*(unsigned int *)(a1 + 1056) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
      memset(*v2, 0, *(unsigned int *)(a1 + 1056));
      if ( (*(int (__fastcall **)(__int128 *))(IptInterface + 24))(&v11) >= 0 )
      {
        if ( (_QWORD)v11 )
        {
          if ( *((_QWORD *)&v11 + 1) )
          {
            IopLiveDumpDiscardVirtualAddressRange(a1, v11, *((_QWORD *)&v11 + 1));
            v8 = *((_QWORD *)&v11 + 1);
            *(_QWORD *)(a1 + 1032) = 0LL;
            *(_DWORD *)(a1 + 1040) = 0;
            *(_DWORD *)(a1 + 1008) = 0;
            v9 = MmAllocateIndependentPagesEx(v8, -1, 0LL, 0);
            *(_QWORD *)(a1 + 1000) = v9;
            if ( v9 )
            {
              *(_DWORD *)(a1 + 1008) = DWORD2(v11);
              if ( !IopLiveDumpIsUnderMemoryPressure(a1) )
              {
                IopLiveDumpDiscardVirtualAddressRange(
                  a1,
                  *(_QWORD *)(a1 + 1000),
                  (*(unsigned int *)(a1 + 1008) + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
                memset(*(void **)(a1 + 1000), 0, *(unsigned int *)(a1 + 1008));
                return v1;
              }
              return (unsigned int)-1073741248;
            }
          }
        }
      }
    }
  }
  return v1;
}
