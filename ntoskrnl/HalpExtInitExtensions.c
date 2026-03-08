/*
 * XREFs of HalpExtInitExtensions @ 0x140B6AA6C
 * Callers:
 *     HalpHalExtInitSystem @ 0x140A8E3D0 (HalpHalExtInitSystem.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     HalpMmAllocateMemoryInternal @ 0x14037A7A8 (HalpMmAllocateMemoryInternal.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall HalpExtInitExtensions(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // edi
  _QWORD **v4; // rcx
  _QWORD *v5; // rax
  unsigned int v7; // edi
  void *MemoryInternal; // rax
  __int64 Table; // r13
  unsigned int v10; // r14d
  _QWORD *v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // r15
  int (__fastcall *v14)(_QWORD, __int64 *, _UNKNOWN **); // rax
  unsigned __int64 v15; // rsi
  __int64 **i; // r15
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF

  v1 = 0;
  HalpExtLoaderBlock = a1;
  v17 = 0LL;
  v3 = 0;
  v4 = (_QWORD **)(*(_QWORD *)(a1 + 240) + 2584LL);
  HalpExtHandleCount = 0;
  v5 = *v4;
  if ( *v4 != v4 )
  {
    do
    {
      v5 = (_QWORD *)*v5;
      ++v3;
    }
    while ( v5 != v4 );
    HalpExtHandleCount = v3;
  }
  if ( v3 )
  {
    v7 = v3 << 6;
    MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v7, 1u);
    HalpExtHandleArray = (__int64)MemoryInternal;
    if ( MemoryInternal )
    {
      memset(MemoryInternal, 0, v7);
      Table = HalpAcpiGetTable(a1, 1414681411, 0, 0);
      if ( Table )
      {
        v10 = 0;
        v11 = (_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL);
        v12 = (_QWORD *)*v11;
        if ( (_QWORD *)*v11 != v11 )
        {
          do
          {
            if ( *((int *)v12 + 10) >= 0 )
            {
              v13 = v12[2];
              v14 = *(int (__fastcall **)(_QWORD, __int64 *, _UNKNOWN **))(v13 + 56);
              v17 = 0LL;
              if ( v14(0LL, &v17, &HalpExtensionImports) >= 0 && v17 )
              {
                v15 = HalpExtHandleArray + ((unsigned __int64)v10 << 6);
                *(_QWORD *)(v15 + 8) = *(_QWORD *)(v13 + 56);
                *(_QWORD *)(v15 + 16) = v17;
                *(_DWORD *)(v15 + 24) = 0;
                *(_QWORD *)(v15 + 48) = *(_QWORD *)(v13 + 48);
                *(_DWORD *)(v15 + 56) = *(_DWORD *)(v13 + 64);
                *(_BYTE *)v15 = 1;
                *(_QWORD *)(v15 + 40) = v15 + 32;
                *(_QWORD *)(v15 + 32) = v15 + 32;
                for ( i = (__int64 **)v12[3]; i != v12 + 3; i = (__int64 **)*i )
                  (**(void (__fastcall ***)(_QWORD, __int64))(v15 + 16))(v10, Table + *((unsigned int *)i + 4));
                *(_BYTE *)v15 = 0;
              }
            }
            else
            {
              DbgPrintEx(
                0x65u,
                0,
                "HAL Extension %s failed load, status=0x%x\n",
                (const char *)v12[6],
                *((_DWORD *)v12 + 10));
            }
            ++v10;
            v12 = (_QWORD *)*v12;
          }
          while ( v12 != (_QWORD *)(*(_QWORD *)(a1 + 240) + 2584LL) );
        }
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v1;
}
