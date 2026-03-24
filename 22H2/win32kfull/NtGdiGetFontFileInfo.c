/*
 * XREFs of NtGdiGetFontFileInfo @ 0x1C0160A60
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009029C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C0137700 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z @ 0x1C0160C1C (-GetPFFFromId@@YAPEAVPFF@@PEAVPFT@@IPEAPEAPEAV1@@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C016CAD0 (--1PFFREFOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetFontFileInfo(unsigned int a1, unsigned int a2, wchar_t *a3, SIZE_T a4, ULONG64 a5)
{
  __int64 v7; // rsi
  struct PFF *PFFFromId; // rbx
  __int64 v10; // r14
  const wchar_t *v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned int v14; // r9d
  _BYTE *v15; // rdx
  SIZE_T v16; // rdx
  __int64 v18; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+40h] [rbp-28h]

  v7 = a2;
  Prediction::CFixPred::CFixPred((Prediction::CFixPred *)v19);
  v18 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  PFFFromId = GetPFFFromId((struct PFT *)gpPFTPublic, a1, 0LL);
  if ( !PFFFromId && gpPFTPrivate )
    PFFFromId = GetPFFFromId((struct PFT *)gpPFTPrivate, a1, 0LL);
  if ( !PFFFromId )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v18);
    goto LABEL_23;
  }
  v19[0] = PFFFromId;
  ++*((_DWORD *)PFFFromId + 17);
  v20 = 0;
  SEMOBJ::vUnlock((SEMOBJ *)&v18);
  if ( (unsigned int)v7 >= *((_DWORD *)PFFFromId + 9) )
  {
LABEL_23:
    PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v19);
    return 87LL;
  }
  _mm_lfence();
  v10 = *(_QWORD *)(*((_QWORD *)PFFFromId + 25) + 8 * v7);
  v11 = &word_1C02E497C;
  if ( *(_QWORD *)(v10 + 80) )
    v11 = *(const wchar_t **)(v10 + 80);
  v12 = 0;
  v13 = -1LL;
  do
    ++v13;
  while ( v11[v13] );
  v14 = 2 * v13 + 18;
  if ( a5 )
  {
    if ( (a5 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v15 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v15 = (_BYTE *)MmUserProbeAddress;
    *v15 = *v15;
    v15[7] = v15[7];
    v16 = v14;
    *(_QWORD *)a5 = v14;
    v12 = 0;
  }
  else
  {
    v16 = v14;
  }
  if ( a3 && a4 >= v16 )
  {
    ProbeForWrite(a3, v16, 8u);
    *(_DWORD *)a3 = *(_DWORD *)v10;
    *((_DWORD *)a3 + 1) = *(_DWORD *)(v10 + 4);
    *((_QWORD *)a3 + 1) = *(unsigned int *)(v10 + 24);
    wcscpy_s(a3 + 8, (a4 - 16) >> 1, v11);
  }
  else
  {
    v12 = 122;
  }
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)v19);
  return v12;
}
