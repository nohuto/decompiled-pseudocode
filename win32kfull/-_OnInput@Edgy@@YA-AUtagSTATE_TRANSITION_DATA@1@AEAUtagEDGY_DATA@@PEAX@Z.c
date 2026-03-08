/*
 * XREFs of ?_OnInput@Edgy@@YA?AUtagSTATE_TRANSITION_DATA@1@AEAUtagEDGY_DATA@@PEAX@Z @ 0x1C01E9804
 * Callers:
 *     ?ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z @ 0x1C0148E68 (-ProcessInput@Edgy@@YAHPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E8CF8 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z @ 0x1C01E98E0 (-_OnStateTransition@Edgy@@YAQEAXAEAUtagEDGY_DATA@@W4tagEDGY_STATE@@AEBUtagARC_DATA@1@@Z.c)
 */

__int64 __fastcall Edgy::_OnInput(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 ArcData; // rax
  __int64 v6; // r10
  unsigned int v7; // r9d
  unsigned int v8; // edx
  __int128 v9; // xmm1
  unsigned int v10; // r8d
  __int128 v11; // xmm0
  __int64 v12; // rcx
  _OWORD v14[3]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v15; // [rsp+50h] [rbp-48h]
  _BYTE v16[64]; // [rsp+58h] [rbp-40h] BYREF

  ArcData = Edgy::_GetArcData((unsigned __int64)v16, a2, a3);
  v6 = *(int *)(a2 + 16);
  v7 = 4;
  v8 = dword_1C0322530[v6];
  v9 = *(_OWORD *)(ArcData + 16);
  v10 = dword_1C0322534[v6];
  v14[0] = *(_OWORD *)ArcData;
  v11 = *(_OWORD *)(ArcData + 32);
  v14[1] = v9;
  v15 = *(_QWORD *)(ArcData + 48);
  v14[2] = v11;
  if ( v8 < v10 )
  {
    v12 = 16LL * v8;
    while ( (DWORD2(v14[0]) & *(_DWORD *)((_BYTE *)&unk_1C03223B8 + v12)) != *(_DWORD *)((char *)&unk_1C03223BC + v12) )
    {
      ++v8;
      v12 += 16LL;
      if ( v8 >= v10 )
        goto LABEL_7;
    }
    v7 = *(_DWORD *)((char *)&unk_1C03223B4 + v12);
  }
LABEL_7:
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = v7;
  if ( (_DWORD)v6 != v7 )
    *(_QWORD *)(a1 + 8) = Edgy::_OnStateTransition(a2, v7, v14);
  return a1;
}
