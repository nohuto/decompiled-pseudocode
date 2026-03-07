char __fastcall EnumEngineOnly(
        Gre::Base *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        __int64 **a5,
        __int64 **a6,
        struct DCOBJ *a7,
        unsigned int *a8,
        struct FHOBJ *a9)
{
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 *v14; // rcx
  struct _FONTSUB *v15; // rax
  char v16; // bl
  const unsigned __int16 *v18; // rbx
  __int64 *v19; // rax
  __int64 v20; // rax
  __int64 *v22; // rcx
  __int64 v23; // rax
  _QWORD v24[2]; // [rsp+58h] [rbp-21h] BYREF
  __int64 *v25; // [rsp+68h] [rbp-11h] BYREF
  __int64 v26; // [rsp+70h] [rbp-9h]
  _QWORD v27[2]; // [rsp+78h] [rbp-1h] BYREF
  __int64 *v28; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+90h] [rbp+17h]
  __int64 *v30; // [rsp+98h] [rbp+1Fh] BYREF
  __int64 v31; // [rsp+A0h] [rbp+27h]

  Gre::Base::Globals(a1);
  v25 = *a5;
  v26 = *v25;
  if ( (unsigned int)FHOBJ::bValid((FHOBJ *)&v25) )
  {
    v27[0] = v12 + 8;
    v27[1] = *(_QWORD *)(v12 + 8);
    if ( (unsigned int)FHOBJ::bValid((FHOBJ *)v27) )
    {
      if ( a1 )
      {
        EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v24, a7, 0x20u, a3, a9, a8);
        if ( v24[0] )
        {
          if ( (unsigned int)bScanFamilyAndFace(
                               (struct FHOBJ *)&v25,
                               (struct FHOBJ *)v27,
                               0LL,
                               0LL,
                               (struct EFSOBJ *)v24,
                               a3,
                               a4,
                               (const unsigned __int16 *)a1) )
          {
            v14 = *a6;
            if ( !*a6
              || (v31 = *v14,
                  v28 = v14 + 1,
                  v20 = v14[1],
                  v30 = v14,
                  v29 = v20,
                  (unsigned int)FHOBJ::bValid((FHOBJ *)&v30))
              && (unsigned int)FHOBJ::bValid((FHOBJ *)&v28)
              && (unsigned int)bScanFamilyAndFace(
                                 (struct FHOBJ *)&v30,
                                 (struct FHOBJ *)&v28,
                                 0LL,
                                 0LL,
                                 (struct EFSOBJ *)v24,
                                 a3,
                                 a4,
                                 (const unsigned __int16 *)a1) )
            {
              v15 = pfsubAlternateFacename((const unsigned __int16 *)a1);
              if ( !v15 )
                goto LABEL_34;
              v18 = (const unsigned __int16 *)((char *)v15 + 130);
              if ( v15 == (struct _FONTSUB *)-130LL )
                goto LABEL_34;
              *(_QWORD *)v24[0] = v15;
              if ( (unsigned int)bScanFamilyAndFace(
                                   (struct FHOBJ *)&v25,
                                   (struct FHOBJ *)v27,
                                   0LL,
                                   0LL,
                                   (struct EFSOBJ *)v24,
                                   a3,
                                   a4,
                                   (const unsigned __int16 *)v15 + 65) )
              {
                v22 = *a6;
                if ( !*a6
                  || (v29 = *v22,
                      v30 = v22 + 1,
                      v23 = v22[1],
                      v28 = v22,
                      v31 = v23,
                      (unsigned int)FHOBJ::bValid((FHOBJ *)&v28))
                  && (unsigned int)FHOBJ::bValid((FHOBJ *)&v30)
                  && (unsigned int)bScanFamilyAndFace(
                                     (struct FHOBJ *)&v28,
                                     (struct FHOBJ *)&v30,
                                     0LL,
                                     0LL,
                                     (struct EFSOBJ *)v24,
                                     a3,
                                     a4,
                                     v18) )
                {
LABEL_34:
                  if ( !*(_DWORD *)(v24[0] + 28LL) )
                  {
                    v16 = 1;
LABEL_10:
                    EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v24);
                    return v16;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v24, a7, *(_DWORD *)(v13 + 12), a3, a9, a8);
        if ( v24[0] )
        {
          v16 = 1;
          if ( bScanFamily(
                 (struct FHOBJ *)&v25,
                 2u,
                 (struct FHOBJ *)&v25,
                 1u,
                 0LL,
                 0,
                 (struct EFSOBJ *)v24,
                 a3,
                 a4,
                 0LL) )
          {
            v19 = *a6;
            if ( !*a6
              || (v25 = *a6, v26 = *v19, (unsigned int)FHOBJ::bValid((FHOBJ *)&v25))
              && bScanFamily(
                   (struct FHOBJ *)&v25,
                   2u,
                   (struct FHOBJ *)&v25,
                   1u,
                   0LL,
                   0,
                   (struct EFSOBJ *)v24,
                   a3,
                   a4,
                   0LL) )
            {
              if ( !*(_DWORD *)(v24[0] + 28LL) )
                goto LABEL_10;
            }
          }
        }
      }
      v16 = 0;
      goto LABEL_10;
    }
  }
  return 0;
}
