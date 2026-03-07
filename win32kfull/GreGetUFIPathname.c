__int64 __fastcall GreGetUFIPathname(
        struct _UNIVERSAL_FONT_ID *a1,
        _DWORD *a2,
        char *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6,
        int *a7,
        _DWORD *a8,
        volatile void *Address,
        _DWORD *a10,
        unsigned int *a11)
{
  struct PFE *PFEFromUFI; // rax
  struct PFE *v15; // rsi
  __int64 v16; // r15
  __int64 v17; // r12
  int *v18; // rcx
  SIZE_T v19; // rdi
  PVOID v20; // r15
  __int64 v21; // r13
  unsigned int v22; // ecx
  PVOID MappedBase; // [rsp+28h] [rbp-30h] BYREF
  ULONG_PTR ViewSize[5]; // [rsp+30h] [rbp-28h] BYREF

  PFEFromUFI = ppfeGetPFEFromUFI(a1, a6 & 5, 1);
  v15 = PFEFromUFI;
  ViewSize[1] = (ULONG_PTR)PFEFromUFI;
  if ( !PFEFromUFI )
    return 0LL;
  v16 = *(_QWORD *)PFEFromUFI;
  if ( a5 )
    *a5 = *(_DWORD *)(v16 + 36);
  if ( a2 )
    *a2 = *(_DWORD *)(v16 + 32);
  if ( a3 )
  {
    v17 = *(unsigned int *)(v16 + 32);
    if ( (unsigned int)v17 > a4 )
      return 0LL;
    memmove(a3, *(const void **)(v16 + 24), 2 * v17);
    memset(&a3[2 * v17], 0, 2LL * (a4 - (unsigned int)v17));
  }
  v18 = a7;
  if ( a7 )
    *a7 = *((_DWORD *)v15 + 3) & 0x40;
  if ( (*((_DWORD *)v15 + 3) & 0x40) == 0 )
    goto LABEL_17;
  ViewSize[0] = 0LL;
  v18 = **(int ***)(v16 + 200);
  v19 = (unsigned int)v18[6];
  if ( a8 )
    *a8 = v19;
  if ( !Address )
    goto LABEL_17;
  MappedBase = 0LL;
  if ( MmMapViewInSessionSpace(*(PVOID *)(**(_QWORD **)(v16 + 200) + 32LL), &MappedBase, ViewSize) < 0 )
    return 0LL;
  ProbeForWrite(Address, v19, 1u);
  v20 = MappedBase;
  memmove((void *)Address, (char *)MappedBase + 16, v19);
  MmUnmapViewInSessionSpace(v20);
LABEL_17:
  if ( a10 )
  {
    if ( a11 )
    {
      *a10 = 0;
      *a11 = 0;
      v21 = *(_QWORD *)v15;
      if ( *(_QWORD *)(v21 + 88) == *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v18) + 32) + 23448LL)
        && !*(_DWORD *)(*(_QWORD *)(v21 + 80) + 8LL) )
      {
        v22 = *(_DWORD *)(v21 + 208);
        if ( v22 >= 4 && (v22 & 1) == 0 )
        {
          *a11 = (unsigned int)(*((_DWORD *)v15 + 22) - 1) >> 1;
          *a10 = 1;
        }
      }
    }
  }
  return 1LL;
}
