/*
 * XREFs of ACPIMapNamedTable @ 0x1C00018A0
 * Callers:
 *     ACPIEnumMapTableHandler @ 0x1C0001850 (ACPIEnumMapTableHandler.c)
 *     ACPIEcInitOpRegionHandler @ 0x1C00251B0 (ACPIEcInitOpRegionHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0001E80 (memmove.c)
 *     WPP_RECORDER_SF_i @ 0x1C002293C (WPP_RECORDER_SF_i.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C008D15C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3DC (ACPIRegReadAMLRegistryEntry.c)
 */

__int64 __fastcall ACPIMapNamedTable(int a1, _DWORD *a2, _QWORD *a3, void *a4, unsigned int *a5)
{
  unsigned int v9; // esi
  char AMLRegistryEntry; // bp
  unsigned int *v11; // rbx
  unsigned int *v12; // rdi
  _OWORD *Pool2; // rax
  int v15; // edx
  unsigned int v16; // eax
  _DWORD *v17; // rax
  char TableFromSimulatorRegistryEntry; // al
  PVOID P[2]; // [rsp+30h] [rbp-38h] BYREF

  v9 = 0;
  AMLRegistryEntry = 0;
  v11 = 0LL;
  v12 = (unsigned int *)(*(__int64 (**)(void))(PmHalDispatchTable + 88))();
  if ( v12 )
  {
    Pool2 = (_OWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
    P[0] = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *Pool2 = *(_OWORD *)v12;
    Pool2[1] = *((_OWORD *)v12 + 1);
    *((_DWORD *)Pool2 + 8) = v12[8];
    *((_DWORD *)Pool2 + 1) = 36;
    AMLRegistryEntry = ACPIRegReadAMLRegistryEntry(P);
    if ( !AMLRegistryEntry )
    {
      v11 = (unsigned int *)P[0];
      ExFreePoolWithTag(P[0], 0);
      goto LABEL_14;
    }
    v11 = (unsigned int *)P[0];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_i(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        6,
        29,
        (__int64)&WPP_e79443b43ad4376df2974b199a0dd63c_Traceguids,
        (char)P[0]);
    }
    v12 = v11;
    if ( v11 )
      goto LABEL_14;
  }
  if ( !g_SimulatorCallbackObject )
    goto LABEL_3;
  v17 = (_DWORD *)ExAllocatePool2(64LL, 36LL, 1953522497LL);
  P[0] = v17;
  v11 = v17;
  if ( !v17 )
  {
    v9 = -1073741670;
    goto LABEL_4;
  }
  *v17 = a1;
  v17[1] = 36;
  if ( a2 )
    *(_DWORD *)((char *)v17 + 10) = *a2;
  if ( a3 )
    *((_QWORD *)v17 + 2) = *a3;
  TableFromSimulatorRegistryEntry = ACPIRegGetTableFromSimulatorRegistryEntry(P);
  v11 = (unsigned int *)P[0];
  AMLRegistryEntry = TableFromSimulatorRegistryEntry;
  if ( TableFromSimulatorRegistryEntry )
    v12 = (unsigned int *)P[0];
  else
    ExFreePoolWithTag(P[0], 0);
  if ( !v12 )
  {
LABEL_3:
    v9 = -1073741275;
    goto LABEL_4;
  }
LABEL_14:
  v16 = v12[1];
  if ( *a5 >= v16 )
  {
    memmove(a4, v12, v12[1]);
    *a5 = v12[1];
  }
  else
  {
    *a5 = v16;
    v9 = -1073741789;
  }
LABEL_4:
  if ( AMLRegistryEntry && v11 )
    ExFreePoolWithTag(v11, 0);
  return v9;
}
