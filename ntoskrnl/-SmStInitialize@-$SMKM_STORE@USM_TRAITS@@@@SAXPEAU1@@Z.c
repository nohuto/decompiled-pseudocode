/*
 * XREFs of ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140358FB0
 * Callers:
 *     SmProcessCreateRequest @ 0x1407DD648 (SmProcessCreateRequest.c)
 * Callees:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1403589B4 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStInitialize(void *a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rax
  __int64 result; // rax

  v1 = (__int64)a1;
  memset(a1, 0, 0x1A60uLL);
  *(_BYTE *)(v1 + 6020) = 2;
  ST_STORE<SM_TRAITS>::StInitialize(v1);
  *(_QWORD *)(v1 + 6056) = v1 + 6048;
  *(_QWORD *)(v1 + 6048) = 0LL;
  *(_QWORD *)(v1 + 6072) = v1 + 6064;
  *(_QWORD *)(v1 + 6064) = 0LL;
  *(_QWORD *)(v1 + 6088) = v1 + 6080;
  *(_QWORD *)(v1 + 6080) = 0LL;
  *(_QWORD *)(v1 + 6040) = 0LL;
  *(_QWORD *)(v1 + 6168) = v1 + 6160;
  *(_QWORD *)(v1 + 6160) = v1 + 6160;
  *(_WORD *)(v1 + 6152) = 0;
  *(_BYTE *)(v1 + 6154) = 6;
  *(_DWORD *)(v1 + 6156) = 0;
  *(_QWORD *)(v1 + 6144) = v1 + 6136;
  *(_QWORD *)(v1 + 6136) = v1 + 6136;
  v2 = (_QWORD *)(v1 + 6184);
  *(_WORD *)(v1 + 6128) = 0;
  *(_BYTE *)(v1 + 6130) = 6;
  *(_DWORD *)(v1 + 6132) = 0;
  *(_WORD *)(v1 + 6176) = 1;
  *(_BYTE *)(v1 + 6178) = 6;
  *(_DWORD *)(v1 + 6180) = 0;
  v1 += 6608LL;
  v2[1] = v2;
  *v2 = v2;
  memset((void *)v1, 0, 0x78uLL);
  result = v1 + 16;
  *(_WORD *)(v1 + 8) = 1;
  *(_BYTE *)(v1 + 10) = 6;
  *(_DWORD *)(v1 + 12) = 0;
  *(_QWORD *)(v1 + 24) = v1 + 16;
  *(_QWORD *)(v1 + 16) = v1 + 16;
  *(_QWORD *)(v1 + 32) = 0LL;
  return result;
}
