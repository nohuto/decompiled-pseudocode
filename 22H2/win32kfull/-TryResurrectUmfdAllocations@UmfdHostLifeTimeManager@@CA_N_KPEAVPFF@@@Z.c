/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C1C08
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02C1AE0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C009F3F8 (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00A3AE8 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02DE53C (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(__int64 a1, struct PFF *a2)
{
  __int64 v2; // rdi
  char v3; // si
  struct PFF *v4; // r14
  unsigned int v6; // r15d
  struct _IFIMETRICS *v7; // r12
  void **v8; // rbx
  struct _IFIMETRICS *v9; // rax
  struct _IFIMETRICS *v10; // r14
  struct _IFIMETRICS *v11; // rax
  unsigned __int64 v13; // rdx
  struct _IFIMETRICS *v14; // rcx
  _QWORD v15[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int64 v16; // [rsp+88h] [rbp+48h] BYREF
  unsigned __int64 v17; // [rsp+90h] [rbp+50h] BYREF
  __int64 v18; // [rsp+98h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a2 + 11);
  v3 = 0;
  v4 = a2;
  v15[0] = a2;
  v18 = v2;
  if ( *((_DWORD *)a2 + 52) )
  {
    v6 = 1;
    while ( 1 )
    {
      v17 = 0LL;
      v7 = PDEVOBJ::QueryFont((PDEVOBJ *)&v18, *((struct DHPDEV__ **)v4 + 12), a1, v6, &v17);
      if ( !v7 )
        return v3;
      v8 = (void **)*((_QWORD *)v4 + v6 + 26);
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[4], v7) )
        break;
      if ( v8[2] )
      {
        v16 = 0LL;
        v9 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree(
                                     (PFFOBJ *)v15,
                                     *((struct DHPDEV__ **)v4 + 12),
                                     a1,
                                     v6,
                                     3u,
                                     &v16);
        v10 = v9;
        if ( !v9 )
          return v3;
        if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[2], v9) )
          goto LABEL_16;
        v4 = (struct PFF *)v15[0];
      }
      if ( v8[6] )
      {
        v16 = 0LL;
        v11 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree(
                                      (PFFOBJ *)v15,
                                      *((struct DHPDEV__ **)v4 + 12),
                                      a1,
                                      v6,
                                      2u,
                                      &v16);
        v10 = v11;
        if ( !v11 )
          return v3;
        if ( !UmfdAllocation::UpdateKernelmodeAllocation(v8[6], v11) )
        {
LABEL_16:
          v13 = v16;
          v14 = v10;
LABEL_18:
          (*(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v2 + 3024))(v14, v13);
          return v3;
        }
        v4 = (struct PFF *)v15[0];
      }
      if ( v6++ >= *((_DWORD *)v4 + 52) )
        return 1;
    }
    v13 = v17;
    v14 = v7;
    goto LABEL_18;
  }
  return 1;
}
