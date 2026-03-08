/*
 * XREFs of _CcdWriteRegistryValues @ 0x1C03BEBD4
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C03BE870 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C03BED34 (-_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 * Callees:
 *     _CcdOpenRegistrySubkey @ 0x1C01C0040 (_CcdOpenRegistrySubkey.c)
 */

__int64 __fastcall CcdWriteRegistryValues(const WCHAR *a1, const WCHAR *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v9; // ebx
  int v10; // eax
  unsigned int v11; // esi
  unsigned int v12; // r12d
  __int64 v13; // r13
  __int64 v14; // r14
  NTSTATUS v15; // eax
  PCWSTR Path; // [rsp+30h] [rbp-38h] BYREF
  int v18; // [rsp+78h] [rbp+10h] BYREF

  Path = 0LL;
  v9 = -1073741823;
  if ( a2 && *a2 )
  {
    v18 = 0;
    v10 = CcdOpenRegistrySubkey((int)&Path, 983103, (int)a1, a2, (__int64)&v18);
    v9 = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry5(2LL, v10, a1, a2, a3, a5);
      return v9;
    }
  }
  else
  {
    Path = a1;
  }
  v11 = 0;
  v12 = a4 - 1;
  if ( v12 )
  {
    v13 = a5;
    v14 = a3 + 24;
    while ( 1 )
    {
      v15 = RtlWriteRegistryValue(
              0x40000000u,
              Path,
              *(PCWSTR *)(v14 - 8),
              *(_DWORD *)(v14 + 8) & 0xFFFFFF,
              (PVOID)(v13 + *(_QWORD *)v14),
              *(_DWORD *)(v14 + 24));
      v9 = v15;
      if ( v15 < 0 )
        break;
      ++v11;
      v14 += 56LL;
      if ( v11 >= v12 )
        goto LABEL_12;
    }
    WdLogSingleEntry5(2LL, v15, v11, a2, a3, v13);
  }
LABEL_12:
  if ( Path != a1 )
    ZwClose((HANDLE)Path);
  return v9;
}
