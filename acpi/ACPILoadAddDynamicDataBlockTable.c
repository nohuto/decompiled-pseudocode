/*
 * XREFs of ACPILoadAddDynamicDataBlockTable @ 0x1C00A95C0
 * Callers:
 *     ACPILoadProcessDSDT @ 0x1C00A9700 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessRSDT @ 0x1C00A9AC4 (ACPILoadProcessRSDT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPILoadAddDynamicDataBlockTable(__int64 a1, char a2)
{
  unsigned int v2; // ebx
  _QWORD *Pool2; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rdx

  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 1953522497LL);
  if ( Pool2 )
  {
    Pool2[3] = a1;
    if ( a2 )
    {
      v6 = AcpiDynamicDataBlockTableList;
      if ( *(__int64 **)(AcpiDynamicDataBlockTableList + 8) == &AcpiDynamicDataBlockTableList )
      {
        *Pool2 = AcpiDynamicDataBlockTableList;
        Pool2[1] = &AcpiDynamicDataBlockTableList;
        *(_QWORD *)(v6 + 8) = Pool2;
        AcpiDynamicDataBlockTableList = (__int64)Pool2;
        return v2;
      }
    }
    else
    {
      v7 = (_QWORD *)qword_1C0070128;
      if ( *(__int64 **)qword_1C0070128 == &AcpiDynamicDataBlockTableList )
      {
        *Pool2 = &AcpiDynamicDataBlockTableList;
        Pool2[1] = v7;
        *v7 = Pool2;
        qword_1C0070128 = (__int64)Pool2;
        return v2;
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)-1073741670;
}
