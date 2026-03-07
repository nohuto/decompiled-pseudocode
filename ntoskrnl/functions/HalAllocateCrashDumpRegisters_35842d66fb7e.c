PVOID __stdcall HalAllocateCrashDumpRegisters(PADAPTER_OBJECT AdapterObject, PULONG NumberOfMapRegisters)
{
  __int64 v3; // rax
  _DWORD *v4; // rdx
  ULONG v5; // edi
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rcx
  PVOID result; // rax
  __int64 MapRegistersAtHighLevel; // rax
  int v11; // edx
  __int64 v12; // rcx

  v3 = HalpDmaExtractFromVerifierShadowAdapter((__int64)AdapterObject);
  v5 = 0;
  v6 = v3;
  if ( *(_BYTE *)(v3 + 440) || !*(_BYTE *)(v3 + 445) )
  {
    if ( HalpDmaHibernateRegisterPhase == 1 )
    {
      v7 = HalpDmaHibernatePhase1RegisterSetIndex;
      v8 = 2LL * (unsigned int)HalpDmaHibernatePhase1RegisterSetIndex;
      *NumberOfMapRegisters = *((_DWORD *)&HalpDmaHibernateRegisterSets
                              + 4 * (unsigned int)HalpDmaHibernatePhase1RegisterSetIndex
                              + 2);
      result = (PVOID)*((_QWORD *)&HalpDmaHibernateRegisterSets + v8);
      *(_QWORD *)(v6 + 240) = result;
      *(_DWORD *)(v6 + 248) = *NumberOfMapRegisters;
      HalpDmaHibernatePhase1RegisterSetIndex = v7 + 1;
      return result;
    }
    if ( *v4 > *(_DWORD *)(v3 + 232) )
    {
      *(_DWORD *)(v3 + 248) = 0;
      result = 0LL;
      *v4 = 0;
      return result;
    }
    MapRegistersAtHighLevel = HalpDmaAllocateMapRegistersAtHighLevel(v3, v4);
    *(_QWORD *)(v6 + 240) = MapRegistersAtHighLevel;
    if ( MapRegistersAtHighLevel )
    {
      v11 = HalpDmaHibernateRegisterSetIndex;
      if ( (unsigned int)HalpDmaHibernateRegisterSetIndex < 4 )
      {
        v12 = 2LL * (unsigned int)HalpDmaHibernateRegisterSetIndex;
        *((_QWORD *)&HalpDmaHibernateRegisterSets + v12) = MapRegistersAtHighLevel;
        *((_DWORD *)&HalpDmaHibernateRegisterSets + 2 * v12 + 2) = *NumberOfMapRegisters;
        HalpDmaHibernateRegisterSetIndex = v11 + 1;
      }
    }
    else
    {
      *NumberOfMapRegisters = 0;
    }
    v5 = *NumberOfMapRegisters;
  }
  else
  {
    *(_QWORD *)(v3 + 240) = 0LL;
  }
  *(_DWORD *)(v6 + 248) = v5;
  result = *(PVOID *)(v6 + 240);
  HalpDmaHibernateAdapter = (PVOID)v6;
  return result;
}
