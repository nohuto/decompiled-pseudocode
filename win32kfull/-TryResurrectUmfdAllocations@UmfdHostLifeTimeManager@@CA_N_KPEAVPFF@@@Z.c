/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02E2DC8
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02E2C90 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C01223D8 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C02E3118 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C0308230 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(unsigned __int64 a1, struct PFF *a2)
{
  __int64 v2; // rbx
  struct PFF *v3; // rsi
  unsigned int i; // r14d
  unsigned int v6; // r13d
  struct _IFIMETRICS *v7; // r15
  void **v8; // rdi
  struct _IFIMETRICS *v9; // rax
  struct _IFIMETRICS *v10; // rsi
  struct _IFIMETRICS *v11; // rax
  unsigned __int64 v13; // rdx
  struct _IFIMETRICS *v14; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 v18; // [rsp+98h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a2 + 11);
  v3 = a2;
  v15[0] = a2;
  v18 = v2;
  if ( !*((_DWORD *)a2 + 52) )
    return 1;
  for ( i = 1; ; ++i )
  {
    v17 = 0LL;
    v6 = i;
    v7 = PDEVOBJ::QueryFont((PDEVOBJ *)&v18, *((struct DHPDEV__ **)v3 + 12), a1, i, &v17);
    if ( !v7 )
      break;
    v8 = (void **)*((_QWORD *)v3 + i + 26);
    if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[4], v7) )
    {
      v13 = v17;
      v14 = v7;
      goto LABEL_17;
    }
    if ( v8[2] )
    {
      v16 = 0LL;
      v9 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree((PFFOBJ *)v15, *((struct DHPDEV__ **)v3 + 12), a1, i, 3u, &v16);
      v10 = v9;
      if ( !v9 )
        return 0;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[2], v9) )
        goto LABEL_15;
      v3 = (struct PFF *)v15[0];
    }
    if ( v8[6] )
    {
      v16 = 0LL;
      v11 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree((PFFOBJ *)v15, *((struct DHPDEV__ **)v3 + 12), a1, i, 2u, &v16);
      v10 = v11;
      if ( !v11 )
        return 0;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[6], v11) )
      {
LABEL_15:
        v13 = v16;
        v14 = v10;
LABEL_17:
        (*(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v2 + 3000))(v14, v13);
        return 0;
      }
      v3 = (struct PFF *)v15[0];
    }
    if ( v6 >= *((_DWORD *)v3 + 52) )
      return 1;
  }
  return 0;
}
