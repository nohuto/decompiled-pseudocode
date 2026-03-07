char __fastcall EnumDeviceAndEngine(
        Gre::Base *a1,
        __int64 a2,
        unsigned int a3,
        struct _EFFILTER_INFO *a4,
        struct PUBLIC_PFTOBJ *a5,
        __int64 **a6,
        struct PFFOBJ *a7,
        struct PDEVOBJ *a8,
        struct DCOBJ *a9,
        unsigned int *a10,
        void *a11)
{
  __int64 *v14; // rax
  __int64 v15; // r10
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // r8
  char v21; // bl
  __int64 *v22; // rax
  unsigned int v23; // r9d
  unsigned int v24; // edx
  __int64 *v25; // rax
  __int64 *v27; // rcx
  __int64 v28; // rax
  struct _FONTSUB *v29; // rax
  unsigned __int16 *v30; // rbx
  __int64 *v31; // rcx
  __int64 v32; // rax
  _QWORD v33[2]; // [rsp+58h] [rbp-61h] BYREF
  _QWORD v34[2]; // [rsp+68h] [rbp-51h] BYREF
  __int64 *v35; // [rsp+78h] [rbp-41h] BYREF
  __int64 v36; // [rsp+80h] [rbp-39h]
  _QWORD v37[2]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v38[2]; // [rsp+98h] [rbp-21h] BYREF
  __int64 *v39; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-9h]
  __int64 *v41; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v42; // [rsp+C0h] [rbp+7h]

  Gre::Base::Globals(a1);
  v14 = (__int64 *)(*(_QWORD *)a7 + 112LL);
  v36 = *v14;
  v35 = v14;
  if ( FHOBJ::bValid((FHOBJ *)&v35) )
  {
    v33[0] = *(_QWORD *)a5;
    v33[1] = *(_QWORD *)v33[0];
    if ( FHOBJ::bValid((FHOBJ *)v33) )
    {
      v37[0] = v15 + 104;
      v37[1] = *(_QWORD *)(v15 + 104);
      if ( FHOBJ::bValid((FHOBJ *)v37) )
      {
        v38[0] = v16 + 8;
        v38[1] = *(_QWORD *)(v16 + 8);
        if ( FHOBJ::bValid((FHOBJ *)v38) )
        {
          if ( a1 )
          {
            EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v34, a9, 0x20u, a3, a11, a10);
            if ( v34[0] )
            {
              if ( (unsigned int)bScanFamilyAndFace(
                                   (struct FHOBJ *)v33,
                                   (struct FHOBJ *)v38,
                                   (struct FHOBJ *)&v35,
                                   (struct FHOBJ *)v37,
                                   (struct EFSOBJ *)v34,
                                   a3,
                                   a4,
                                   (unsigned __int16 *)a1) )
              {
                v27 = *a6;
                if ( !*a6
                  || (v42 = *v27, v39 = v27 + 1, v28 = v27[1], v41 = v27, v40 = v28, FHOBJ::bValid((FHOBJ *)&v41))
                  && FHOBJ::bValid((FHOBJ *)&v39)
                  && (unsigned int)bScanFamilyAndFace(
                                     (struct FHOBJ *)&v41,
                                     (struct FHOBJ *)&v39,
                                     0LL,
                                     0LL,
                                     (struct EFSOBJ *)v34,
                                     a3,
                                     a4,
                                     (unsigned __int16 *)a1) )
                {
                  v29 = pfsubAlternateFacename((const unsigned __int16 *)a1);
                  if ( !v29 )
                    goto LABEL_38;
                  v30 = (unsigned __int16 *)((char *)v29 + 130);
                  if ( v29 == (struct _FONTSUB *)-130LL
                    || (*(_QWORD *)v34[0] = v29,
                        (unsigned int)bScanFamilyAndFace(
                                        (struct FHOBJ *)v33,
                                        (struct FHOBJ *)v38,
                                        (struct FHOBJ *)&v35,
                                        (struct FHOBJ *)v37,
                                        (struct EFSOBJ *)v34,
                                        a3,
                                        a4,
                                        (unsigned __int16 *)v29 + 65))
                    && ((v31 = *a6) == 0LL
                     || (v40 = *v31, v41 = v31 + 1, v32 = v31[1], v39 = v31, v42 = v32, FHOBJ::bValid((FHOBJ *)&v39))
                     && FHOBJ::bValid((FHOBJ *)&v41)
                     && (unsigned int)bScanFamilyAndFace(
                                        (struct FHOBJ *)&v39,
                                        (struct FHOBJ *)&v41,
                                        0LL,
                                        0LL,
                                        (struct EFSOBJ *)v34,
                                        a3,
                                        a4,
                                        v30)) )
                  {
LABEL_38:
                    if ( !*(_DWORD *)(v34[0] + 28LL) )
                    {
                      v21 = 1;
                      goto LABEL_19;
                    }
                  }
                }
              }
            }
            goto LABEL_18;
          }
          EFSMEMOBJ::EFSMEMOBJ((EFSMEMOBJ *)v34, a9, *(_DWORD *)(v18 + 12) + *(_DWORD *)(v17 + 12), a3, a11, a10);
          if ( !v34[0] )
          {
LABEL_18:
            v21 = 0;
            goto LABEL_19;
          }
          v21 = 1;
          if ( (*(_DWORD *)(*(_QWORD *)a8 + 2152LL) & 0x2000) != 0 )
          {
            if ( !(unsigned int)bScanFamily(
                                  (struct FHOBJ *)&v35,
                                  0,
                                  (struct FHOBJ *)v33,
                                  2u,
                                  (struct FHOBJ *)v33,
                                  1u,
                                  (struct EFSOBJ *)v34,
                                  a3,
                                  a4,
                                  0LL) )
              goto LABEL_18;
            v22 = *a6;
            if ( !*a6 )
              goto LABEL_17;
            v35 = *a6;
            v36 = *v22;
            if ( !FHOBJ::bValid((FHOBJ *)&v35) )
              goto LABEL_18;
            v23 = 1;
            v24 = 2;
          }
          else
          {
            if ( !(unsigned int)bScanFamily(
                                  (struct FHOBJ *)&v35,
                                  0,
                                  (struct FHOBJ *)v33,
                                  1u,
                                  (struct FHOBJ *)v33,
                                  2u,
                                  (struct EFSOBJ *)v34,
                                  a3,
                                  a4,
                                  0LL) )
              goto LABEL_18;
            v25 = *a6;
            if ( !*a6 )
              goto LABEL_17;
            v35 = *a6;
            v36 = *v25;
            if ( !FHOBJ::bValid((FHOBJ *)&v35) )
              goto LABEL_18;
            v23 = 2;
            v24 = 1;
          }
          if ( !(unsigned int)bScanFamily(
                                (struct FHOBJ *)&v35,
                                v24,
                                (struct FHOBJ *)&v35,
                                v23,
                                0LL,
                                0,
                                (struct EFSOBJ *)v34,
                                a3,
                                a4,
                                0LL) )
            goto LABEL_18;
LABEL_17:
          if ( !*(_DWORD *)(v34[0] + 28LL) )
          {
LABEL_19:
            EFSMEMOBJ::~EFSMEMOBJ((EFSMEMOBJ *)v34, v19, v20);
            return v21;
          }
          goto LABEL_18;
        }
      }
    }
  }
  return 0;
}
