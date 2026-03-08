/*
 * XREFs of ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x18020A87C
 * Callers:
 *     ?ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_INJECTMANIPULATION@@PEBXI@Z @ 0x18020AAF4 (-ProcessInjectManipulation@CManipulation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MANIPULATION_IN.c)
 *     ?CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18022BAE0 (-CalculateValueWorker@CInjectionAnimation@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ??0ManipulationData@@QEAA@XZ @ 0x18020A45C (--0ManipulationData@@QEAA@XZ.c)
 *     ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x18020B184 (-Update@CManipulation@@QEAAJPEAUManipulationData@@@Z.c)
 */

__int64 __fastcall CManipulation::InjectManipulation(CManipulation *this, const struct InjectManipulationArgs *a2)
{
  int *v2; // r9
  __int64 v3; // xmm0_8
  __int64 v4; // xmm3_8
  __int64 v5; // xmm1_8
  bool v6; // cf
  int v7; // eax
  int v8; // ecx
  __int64 v9; // xmm0_8
  int v10; // eax
  __int64 v11; // xmm0_8
  bool v12; // dl
  CManipulation *v13; // r10
  __int64 v15; // [rsp+20h] [rbp-69h] BYREF
  int v16; // [rsp+28h] [rbp-61h]
  __int64 v17; // [rsp+2Ch] [rbp-5Dh]
  int v18; // [rsp+34h] [rbp-55h]
  __int64 v19; // [rsp+38h] [rbp-51h]
  int v20; // [rsp+40h] [rbp-49h]
  __int64 v21; // [rsp+44h] [rbp-45h]
  int v22; // [rsp+4Ch] [rbp-3Dh]
  int v23; // [rsp+50h] [rbp-39h]
  __int64 v24; // [rsp+54h] [rbp-35h]
  int v25; // [rsp+5Ch] [rbp-2Dh]
  __int64 v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+A8h] [rbp+1Fh]
  __int64 v28; // [rsp+ACh] [rbp+23h]
  int v29; // [rsp+B4h] [rbp+2Bh]
  int v30; // [rsp+B8h] [rbp+2Fh]
  int v31; // [rsp+BCh] [rbp+33h]
  int v32; // [rsp+C0h] [rbp+37h]
  int v33; // [rsp+C4h] [rbp+3Bh]
  int v34; // [rsp+C8h] [rbp+3Fh]
  int v35; // [rsp+CCh] [rbp+43h]
  int v36; // [rsp+D0h] [rbp+47h]
  char v37; // [rsp+D4h] [rbp+4Bh]

  ManipulationData::ManipulationData((ManipulationData *)&v15);
  v3 = *((_QWORD *)v2 + 5);
  v4 = *(_QWORD *)(v2 + 7);
  v5 = *(_QWORD *)(v2 + 27);
  v16 = v2[9];
  v18 = v2[12];
  v20 = v2[15];
  v22 = v2[18];
  v25 = v2[29];
  v27 = v2[22];
  v29 = v2[25];
  v31 = *v2;
  v32 = v2[30];
  v33 = v2[31];
  v6 = v2[1] != 0;
  v17 = v3;
  v7 = v2[2];
  v8 = v6 ? 4 : 0;
  v19 = *(_QWORD *)(v2 + 13);
  v9 = *((_QWORD *)v2 + 8);
  v6 = v7 != 0;
  v10 = v2[3];
  v34 = v8;
  v21 = v9;
  LODWORD(v9) = v2[19];
  v35 = v6 ? 4 : 0;
  v23 = v9;
  v11 = *((_QWORD *)v2 + 10);
  v12 = v2[4] != 0;
  v36 = v10 != 0 ? 4 : 0;
  v26 = v11;
  v6 = v2[5] != 0;
  v28 = *(_QWORD *)(v2 + 23);
  v30 = v2[26];
  v15 = v4;
  v24 = v5;
  v37 = (v6 ? 2 : 0) | v37 & 0xFC | v12 & 0xFD;
  return CManipulation::Update(v13, (struct ManipulationData *)&v15);
}
