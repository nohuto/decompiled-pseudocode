/*
 * XREFs of RIMFillDeviceHealthInfo @ 0x1C01A4C50
 * Callers:
 *     <none>
 * Callees:
 *     RimDeviceTypeToRimInputType @ 0x1C00BC2F4 (RimDeviceTypeToRimInputType.c)
 *     RIMLogDeviceHealthTelemetry @ 0x1C01A6EE8 (RIMLogDeviceHealthTelemetry.c)
 */

__int64 __fastcall RIMFillDeviceHealthInfo(ULONG64 a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned int v4; // ebx
  int v5; // ebx
  __int64 v6; // rax
  __int128 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+40h] [rbp-18h]

  LODWORD(v8) = RimDeviceTypeToRimInputType(a2, *(unsigned __int8 *)(a2 + 48));
  v4 = *(_DWORD *)(v3 + 184);
  LODWORD(v9) = (v4 >> 13) & 1;
  DWORD1(v9) = __CFSHR__(v4, 12);
  *((_QWORD *)&v9 + 1) = __CFSHR__(v4, 13);
  LODWORD(v10) = (v4 & 0x80u) != 0;
  HIDWORD(v10) = !__CFSHR__(v4, 13) && !__CFSHR__(v4, 12) && (v4 & 0x100) == 0;
  DWORD1(v8) = *(_DWORD *)(v3 + 288);
  DWORD2(v8) = *(_DWORD *)(v3 + 272);
  HIDWORD(v8) = *(_DWORD *)(v3 + 152);
  v5 = (v4 >> 27) & 1;
  if ( (*(_DWORD *)(v3 + 200) & 0x80u) != 0 )
  {
    v6 = *(_QWORD *)(v3 + 472);
    if ( v6 )
      HIDWORD(v9) = -__CFSHR__(*(_DWORD *)(v6 + 360), 13);
  }
  RIMLogDeviceHealthTelemetry(v3);
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  *(_OWORD *)a1 = v8;
  *(_OWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 32) = v10;
  *(_DWORD *)(a1 + 40) = v5;
  return 1LL;
}
