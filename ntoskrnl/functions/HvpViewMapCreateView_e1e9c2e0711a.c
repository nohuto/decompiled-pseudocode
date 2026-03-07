__int64 __fastcall HvpViewMapCreateView(__int64 a1, LARGE_INTEGER a2, __int64 a3, _QWORD *a4)
{
  unsigned __int64 v6; // rdi
  void *Memory; // rax
  void *v10; // rbx
  ULONG_PTR v11; // rbp
  __int64 v12; // rcx
  int v13; // edi
  void *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  int v18; // [rsp+28h] [rbp-40h]
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v19 = 0;
  v6 = (unsigned __int64)(unsigned int)(a3 - a2.LowPart) >> 12;
  Memory = (void *)CmSiAllocateMemory(v6 + 72, 0x35384D43u);
  v10 = Memory;
  if ( Memory )
  {
    memset(Memory, 0, v6 + 72);
    *((_QWORD *)v10 + 4) = a3;
    *((LARGE_INTEGER *)v10 + 3) = a2;
    v11 = a3 - a2.QuadPart;
    v13 = CmSiMapViewOfSection(
            *(void **)a1,
            *(HANDLE **)(a1 + 24),
            a2,
            v11,
            ((*(_DWORD *)(a1 + 32) & 1) == 0) << 13,
            v18,
            (PVOID *)v10 + 7);
    if ( v13 < 0
      || (v13 = CmSiProtectViewOfSection(v12, *(__int64 **)(a1 + 24), *((_QWORD *)v10 + 7), v11, 1u, (__int64)&v19),
          v13 < 0) )
    {
      v15 = (void *)*((_QWORD *)v10 + 7);
      if ( v15 )
      {
        CmSiUnmapViewOfSection(v12, *(HANDLE **)(a1 + 24), v15);
        if ( *((_QWORD *)v10 + 8) )
        {
          v16 = HvcallpNoHypervisorPresent();
          CmSiReleaseProcessLockedPagesCharge(*(_QWORD **)(a1 + 24), v17 * v16);
        }
      }
      CmSiFreeMemory((PPRIVILEGE_SET)v10);
    }
    else
    {
      *a4 = v10;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v13;
}
