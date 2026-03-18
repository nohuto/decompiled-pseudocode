/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C11D8
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02C10B0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C000B54C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C000D8A8 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02DBF8C (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(__int64 a1, struct PFF *a2)
{
  __int64 v2; // rbx
  char v3; // si
  struct PFF *v4; // r14
  unsigned int i; // r15d
  struct _IFIMETRICS *v7; // r12
  void **v8; // rdi
  struct _IFIMETRICS *v9; // rax
  struct _IFIMETRICS *v10; // r14
  struct _IFIMETRICS *v11; // rax
  unsigned __int64 v13; // rdx
  struct _IFIMETRICS *v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+98h] [rbp+48h]
  unsigned __int64 v18; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a2 + 11);
  v3 = 0;
  v4 = a2;
  v16[0] = a2;
  v15 = v2;
  if ( *((_DWORD *)a2 + 52) )
  {
    for ( i = 1; ; ++i )
    {
      v19 = 0LL;
      v17 = i;
      v7 = PDEVOBJ::QueryFont((PDEVOBJ *)&v15, *((struct DHPDEV__ **)v4 + 12), a1, i, &v19);
      if ( !v7 )
        return v3;
      v8 = (void **)*((_QWORD *)v4 + i + 26);
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[4], v7) )
        break;
      if ( v8[2] )
      {
        v18 = 0LL;
        v9 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree((PFFOBJ *)v16, *((struct DHPDEV__ **)v4 + 12), a1, i, 3u, &v18);
        v10 = v9;
        if ( !v9 )
          return v3;
        if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[2], v9) )
          goto LABEL_16;
        v4 = (struct PFF *)v16[0];
      }
      if ( v8[6] )
      {
        v18 = 0LL;
        v11 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree(
                                      (PFFOBJ *)v16,
                                      *((struct DHPDEV__ **)v4 + 12),
                                      a1,
                                      i,
                                      2u,
                                      &v18);
        v10 = v11;
        if ( !v11 )
          return v3;
        if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[6], v11) )
        {
LABEL_16:
          v13 = v18;
          v14 = v10;
LABEL_18:
          (*(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v2 + 3000))(v14, v13);
          return v3;
        }
        v4 = (struct PFF *)v16[0];
      }
      if ( v17 >= *((_DWORD *)v4 + 52) )
        return 1;
    }
    v13 = v19;
    v14 = v7;
    goto LABEL_18;
  }
  return 1;
}
