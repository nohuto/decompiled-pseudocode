/*
 * XREFs of ?CitpPostUpdateUseInfoCalculate@@YAXPEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C008E880
 * Callers:
 *     ?CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C008DF28 (-CitpPostUpdateUseInfoLog@@YAXPEAU_CIT_IMPACT_CONTEXT@@I@Z.c)
 *     ?CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z @ 0x1C008E60C (-CitpPostUpdateUseInfoSave@@YAJPEAU_CIT_IMPACT_CONTEXT@@PEBU_CIT_POST_UPDATE_USE_INFO@@@Z.c)
 * Callees:
 *     ?CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z @ 0x1C0049E98 (-CalculateUpToTime@CIT_USER_ACTIVE_TRACKER@@QEAAXI@Z.c)
 *     ?Citp100NSToMS@@YAI_K@Z @ 0x1C008EAAC (-Citp100NSToMS@@YAI_K@Z.c)
 */

void __fastcall CitpPostUpdateUseInfoCalculate(struct _CIT_IMPACT_CONTEXT *a1, struct _CIT_POST_UPDATE_USE_INFO *a2)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // eax
  unsigned int v11; // r8d

  *(_OWORD *)a2 = *((_OWORD *)a1 + 21);
  *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 22);
  *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 23);
  *((_OWORD *)a2 + 3) = *((_OWORD *)a1 + 24);
  *((_OWORD *)a2 + 4) = *((_OWORD *)a1 + 25);
  *((_OWORD *)a2 + 5) = *((_OWORD *)a1 + 26);
  *((_OWORD *)a2 + 6) = *((_OWORD *)a1 + 27);
  *((_QWORD *)a2 + 14) = *((_QWORD *)a1 + 56);
  v4 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v5 = MEMORY[0xFFFFF780000003B0];
  v6 = MEMORY[0xFFFFF78000000008];
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 204), v4);
  v7 = *(_QWORD *)((char *)a1 + 220);
  CIT_USER_ACTIVE_TRACKER::CalculateUpToTime((struct _CIT_IMPACT_CONTEXT *)((char *)a1 + 228), v4);
  v8 = *(_QWORD *)((char *)a1 + 244);
  v9 = (unsigned int)v7 / 0x3E8;
  *((_DWORD *)a2 + 3) += v9;
  *((_DWORD *)a2 + 25) += v9;
  *((_QWORD *)a2 + 11) += v9;
  *((_DWORD *)a2 + 19) += HIDWORD(v7) & 0x7FFFFFFF;
  *((_DWORD *)a2 + 4) += (unsigned int)v8 / 0x3E8;
  *((_DWORD *)a2 + 5) += (unsigned int)v8 / 0x3E8;
  *((_DWORD *)a2 + 9) += ((int)v4 - DWORD2(xmmword_1C02545B0)) / 0x3E8u;
  v10 = Citp100NSToMS(v6 - *((_QWORD *)&xmmword_1C02545A0 + 1) - v5);
  *((_DWORD *)a2 + 10) += (unsigned int)((v10 * (unsigned __int64)v11) >> 32) >> 6;
  *((_DWORD *)a2 + 11) += *((unsigned __int16 *)a1 + 132);
  *((_DWORD *)a2 + 12) += *((unsigned __int16 *)a1 + 136);
  *((_DWORD *)a2 + 13) += *((unsigned __int16 *)a1 + 133);
  *((_DWORD *)a2 + 14) += *((unsigned __int16 *)a1 + 134);
  *((_DWORD *)a2 + 15) += *((unsigned __int16 *)a1 + 139);
  *((_DWORD *)a2 + 16) += *((unsigned __int16 *)a1 + 144);
  *((_DWORD *)a2 + 17) += (unsigned int)((*((unsigned int *)a1 + 82) * (unsigned __int64)v11) >> 32) >> 6;
  *((_DWORD *)a2 + 18) += *((_DWORD *)a1 + 81);
  *((_QWORD *)a2 + 10) = MEMORY[0xFFFFF78000000014];
}
