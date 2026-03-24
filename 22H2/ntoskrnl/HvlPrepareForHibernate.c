/*
 * XREFs of HvlPrepareForHibernate @ 0x1404F7C70
 * Callers:
 *     PopSaveHiberContext @ 0x140993F80 (PopSaveHiberContext.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038FDC0 (HvcallInitiateHypercall.c)
 *     memset @ 0x140413800 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x1404F24C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F30B0 (HvlpReleaseHypercallPage.c)
 */

__int64 __fastcall HvlPrepareForHibernate(_OWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // ebp
  _OWORD *v10; // rbx
  _QWORD *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r9
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int128 v17; // [rsp+30h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int128 v19; // [rsp+50h] [rbp-28h]

  v5 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 1, 0LL, 88LL);
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v16, 2, 0LL, 32LL);
  memset(v10, 0, 0x58uLL);
  v12 = *((_QWORD *)&v17 + 1);
  v13 = *((_QWORD *)&v19 + 1);
  *v10 = *a1;
  v10[1] = a1[1];
  v10[2] = a1[2];
  v10[3] = a1[3];
  v10[4] = a1[4];
  if ( (unsigned __int16)HvcallInitiateHypercall(134, v13, v12, v14) )
  {
    v5 = -1073741823;
  }
  else
  {
    *a2 = *v11;
    *a3 = v11[1];
    *a4 = v11[2];
    *a5 = v11[3];
  }
  HvlpReleaseHypercallPage((__int64)&v16);
  HvlpReleaseHypercallPage((__int64)&v18);
  return v5;
}
