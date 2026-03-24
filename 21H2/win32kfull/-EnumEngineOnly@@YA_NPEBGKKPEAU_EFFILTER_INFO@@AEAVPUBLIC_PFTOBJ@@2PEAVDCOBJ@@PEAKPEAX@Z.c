/*
 * XREFs of ?EnumEngineOnly@@YA_NPEBGKKPEAU_EFFILTER_INFO@@AEAVPUBLIC_PFTOBJ@@2PEAVDCOBJ@@PEAKPEAX@Z @ 0x1C00BAC4C
 * Callers:
 *     GreEnumFonts @ 0x1C00BAA0C (GreEnumFonts.c)
 * Callees:
 *     ?pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z @ 0x1C00BA778 (-pfsubAlternateFacename@@YAPEAU_FONTSUB@@PEBG@Z.c)
 *     ?bValid@FHOBJ@@QEBAHXZ @ 0x1C00BAE34 (-bValid@FHOBJ@@QEBAHXZ.c)
 *     ??1EFSMEMOBJ@@QEAA@XZ @ 0x1C00BAE50 (--1EFSMEMOBJ@@QEAA@XZ.c)
 *     ??0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z @ 0x1C00BAE98 (--0EFSMEMOBJ@@QEAA@PEAVDCOBJ@@KKPEAXPEAK@Z.c)
 *     ?bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00BB7EC (-bScanFamilyAndFace@@YAHPEAVFHOBJ@@000PEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 *     ?bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z @ 0x1C00BB8CC (-bScanFamily@@YAHPEAVFHOBJ@@K0K0KPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@PEBG@Z.c)
 */

char __fastcall EnumEngineOnly(
        const unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        __int64 **a5,
        __int64 **a6,
        struct DCOBJ *a7,
        unsigned int *a8,
        void *a9)
{
  __int64 v12; // r8
  char v13; // bl
  __int64 v14; // r10
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rcx
  struct _FONTSUB *v19; // rax
  const unsigned __int16 *v20; // rsi
  __int64 *v22; // rax
  __int64 *v23; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // eax
  _QWORD v29[2]; // [rsp+58h] [rbp-31h] BYREF
  __int64 *v30; // [rsp+68h] [rbp-21h] BYREF
  __int64 v31; // [rsp+70h] [rbp-19h]
  _QWORD v32[2]; // [rsp+78h] [rbp-11h] BYREF
  __int64 *v33; // [rsp+88h] [rbp-1h] BYREF
  __int64 v34; // [rsp+90h] [rbp+7h]
  __int64 *v35; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v36; // [rsp+A0h] [rbp+17h]

  v30 = *a5;
  v31 = *v30;
  v13 = 0;
  if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v30) )
  {
    v32[0] = v12 + 8;
    v32[1] = *(_QWORD *)(v12 + 8);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v32) )
    {
      if ( a1 )
      {
        EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v29, a7, 0x20u, a3, a9, a8);
        if ( !v29[0] )
          goto LABEL_12;
        if ( !(unsigned int)bScanFamilyAndFace(
                              (struct FHOBJ *)&v30,
                              (struct FHOBJ *)v32,
                              0LL,
                              0LL,
                              (struct EFSOBJ *)v29,
                              a3,
                              a4,
                              a1) )
          goto LABEL_12;
        v18 = *a6;
        if ( *a6 )
        {
          v36 = *v18;
          v33 = v18 + 1;
          v26 = v18[1];
          v35 = v18;
          v34 = v26;
          if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)&v35)
            || !(unsigned int)FHOBJ::bValid((FHOBJ *)&v33)
            || !(unsigned int)bScanFamilyAndFace(
                                (struct FHOBJ *)&v35,
                                (struct FHOBJ *)&v33,
                                0LL,
                                0LL,
                                (struct EFSOBJ *)v29,
                                a3,
                                a4,
                                a1) )
          {
            goto LABEL_12;
          }
        }
        v19 = pfsubAlternateFacename(a1, v15, v16, v17);
        v20 = (const unsigned __int16 *)((char *)v19 + 130);
        if ( !v19 )
          v20 = 0LL;
        if ( !v20 )
          goto LABEL_10;
        *(_QWORD *)v29[0] = v19;
        if ( !(unsigned int)bScanFamilyAndFace(
                              (struct FHOBJ *)&v30,
                              (struct FHOBJ *)v32,
                              0LL,
                              0LL,
                              (struct EFSOBJ *)v29,
                              a3,
                              a4,
                              v20) )
          goto LABEL_12;
        v23 = *a6;
        if ( !*a6 )
          goto LABEL_10;
        v34 = *v23;
        v35 = v23 + 1;
        v27 = v23[1];
        v33 = v23;
        v36 = v27;
        v28 = FHOBJ::bValid((FHOBJ *)&v33);
        if ( !v28 || !(unsigned int)FHOBJ::bValid((FHOBJ *)&v35) )
        {
LABEL_12:
          EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v29);
          return v13;
        }
        v25 = bScanFamilyAndFace(
                (struct FHOBJ *)&v33,
                (struct FHOBJ *)&v35,
                0LL,
                0LL,
                (struct EFSOBJ *)v29,
                a3,
                a4,
                v20);
      }
      else
      {
        EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v29, a7, *(_DWORD *)(v14 + 12), a3, a9, a8);
        if ( !v29[0]
          || !bScanFamily((struct FHOBJ *)&v30, 2u, (struct FHOBJ *)&v30, 1u, 0LL, 0, (struct EFSOBJ *)v29, a3, a4, 0LL) )
        {
          goto LABEL_12;
        }
        v22 = *a6;
        if ( !*a6 )
          goto LABEL_10;
        v30 = *a6;
        v31 = *v22;
        if ( !(unsigned int)FHOBJ::bValid((FHOBJ *)&v30) )
          goto LABEL_12;
        v25 = bScanFamily((struct FHOBJ *)&v30, 2u, (struct FHOBJ *)&v30, 1u, 0LL, 0, (struct EFSOBJ *)v29, a3, a4, 0LL);
      }
      if ( v25 )
      {
LABEL_10:
        if ( !*(_DWORD *)(v29[0] + 28LL) )
          v13 = 1;
        goto LABEL_12;
      }
      goto LABEL_12;
    }
  }
  return v13;
}
