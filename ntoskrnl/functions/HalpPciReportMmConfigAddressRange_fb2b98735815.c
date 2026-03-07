__int64 HalpPciReportMmConfigAddressRange()
{
  unsigned int v0; // ebx
  _DWORD *Pool2; // rax
  void *v2; // rdi
  unsigned int v3; // ecx
  _QWORD *v4; // r8
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebx

  ArbDeleteMmConfigRange();
  v0 = 32 * (HalpPciMcfgTableCount - 1) + 72;
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, v0, 0x506C6148u);
  v2 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v3 = HalpPciMcfgTableCount;
  *Pool2 = v0;
  Pool2[7] = 1;
  Pool2[9] = v3;
  if ( v3 )
  {
    v4 = Pool2 + 14;
    v5 = HalpPciMcfgTable + 44;
    v6 = v3;
    do
    {
      *((_BYTE *)v4 - 15) = 3;
      *v4 = *(_QWORD *)v5 + ((unsigned __int64)*(unsigned __int8 *)(v5 + 10) << 20);
      v4 += 4;
      v7 = *(_QWORD *)v5 + ((unsigned __int64)*(unsigned __int8 *)(v5 + 11) << 20) + 0xFFFFF;
      v5 += 16LL;
      *(v4 - 3) = v7;
      --v6;
    }
    while ( v6 );
  }
  v8 = ArbInitializeMmConfigRange(Pool2);
  ExFreePoolWithTag(v2, 0);
  return v8;
}
