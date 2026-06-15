/*
 * XREFs of sub_180053914 @ 0x180053914
 * Callers:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_180008510 @ 0x180008510 (sub_180008510.c)
 *     sub_180009ED0 @ 0x180009ED0 (sub_180009ED0.c)
 *     sub_18000A370 @ 0x18000A370 (sub_18000A370.c)
 *     sub_18000AF30 @ 0x18000AF30 (sub_18000AF30.c)
 *     sub_18000BA80 @ 0x18000BA80 (sub_18000BA80.c)
 *     sub_18000BBD0 @ 0x18000BBD0 (sub_18000BBD0.c)
 *     sub_18000BDF0 @ 0x18000BDF0 (sub_18000BDF0.c)
 *     sub_18000C0B0 @ 0x18000C0B0 (sub_18000C0B0.c)
 *     sub_18000CA60 @ 0x18000CA60 (sub_18000CA60.c)
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_18000DBC0 @ 0x18000DBC0 (sub_18000DBC0.c)
 *     sub_18000EEF0 @ 0x18000EEF0 (sub_18000EEF0.c)
 *     sub_18000F070 @ 0x18000F070 (sub_18000F070.c)
 *     sub_18000F210 @ 0x18000F210 (sub_18000F210.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18000F4F0 @ 0x18000F4F0 (sub_18000F4F0.c)
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 *     sub_180011280 @ 0x180011280 (sub_180011280.c)
 *     sub_180011450 @ 0x180011450 (sub_180011450.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011A40 @ 0x180011A40 (sub_180011A40.c)
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180017CA0 @ 0x180017CA0 (sub_180017CA0.c)
 *     sub_18001C620 @ 0x18001C620 (sub_18001C620.c)
 *     sub_1800284E0 @ 0x1800284E0 (sub_1800284E0.c)
 *     sub_18002CFD0 @ 0x18002CFD0 (sub_18002CFD0.c)
 *     sub_18002E0E0 @ 0x18002E0E0 (sub_18002E0E0.c)
 *     sub_18002F090 @ 0x18002F090 (sub_18002F090.c)
 *     sub_18002FD00 @ 0x18002FD00 (sub_18002FD00.c)
 *     sub_180031C90 @ 0x180031C90 (sub_180031C90.c)
 *     sub_180032C50 @ 0x180032C50 (sub_180032C50.c)
 *     sub_180033330 @ 0x180033330 (sub_180033330.c)
 *     sub_1800335A0 @ 0x1800335A0 (sub_1800335A0.c)
 *     sub_180036290 @ 0x180036290 (sub_180036290.c)
 *     ?_Init@?$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z @ 0x18004DA90 (-_Init@-$numpunct@G@std@@IEAAXAEBV_Locinfo@2@_N@Z.c)
 *     sub_18004DF90 @ 0x18004DF90 (sub_18004DF90.c)
 *     sub_18004F420 @ 0x18004F420 (sub_18004F420.c)
 *     sub_1800502A0 @ 0x1800502A0 (sub_1800502A0.c)
 *     sub_180050740 @ 0x180050740 (sub_180050740.c)
 *     sub_180054090 @ 0x180054090 (sub_180054090.c)
 *     sub_18013350C @ 0x18013350C (sub_18013350C.c)
 * Callees:
 *     sub_180053958 @ 0x180053958 (sub_180053958.c)
 */

__int64 __fastcall sub_180053914(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax

  a1[1] = a2;
  *((_BYTE *)a1 + 16) = 1;
  sub_180053958(a2, a3);
  v4 = *a1;
  *((_DWORD *)a1 + 5) = 1;
  return (*(__int64 (__fastcall **)(__int64 *))(v4 + 8))(a1);
}
