/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C01260D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00FB048 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C01267A8 (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C01267F4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0129B98 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0129CE0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C012A700 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C012B680 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

struct DHPDEV__ *__fastcall UMPDDrvEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        struct DHPDEV__ *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  UMPDOBJ *v14; // rbx
  unsigned int v15; // r12d
  char *v17; // rax
  const void *KernelPtr; // rax
  const void *v19; // rax
  const void *v20; // r13
  PVOID v21; // r12
  PVOID v22; // r15
  PVOID v23; // rdi
  size_t v24; // r8
  ULONG64 v25; // rcx
  size_t v26; // rax
  size_t v27; // rax
  void *v28; // rdi
  _QWORD *v29; // rax
  size_t v30; // [rsp+20h] [rbp-158h]
  char *Size; // [rsp+38h] [rbp-140h]
  char *Srca; // [rsp+40h] [rbp-138h]
  UMPDOBJ *v34; // [rsp+48h] [rbp-130h] BYREF
  PVOID pv; // [rsp+50h] [rbp-128h]
  PVOID v36; // [rsp+58h] [rbp-120h]
  PVOID v37; // [rsp+60h] [rbp-118h]
  void *v38; // [rsp+68h] [rbp-110h]
  struct DHPDEV__ *v39[2]; // [rsp+70h] [rbp-108h] BYREF
  _QWORD v40[22]; // [rsp+80h] [rbp-F8h] BYREF

  v37 = a2;
  v39[1] = a6;
  v38 = a8;
  v36 = a10;
  pv = a11;
  v39[0] = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
  memset(v40, 0, sizeof(v40));
  v14 = v34;
  if ( !v34 )
    goto LABEL_11;
  v40[0] = 176LL;
  v40[2] = *(_QWORD *)v34;
  v40[3] = *((_QWORD *)a9 + 221);
  v40[4] = a1;
  v40[5] = v37;
  LODWORD(v40[6]) = a3;
  v40[7] = a4;
  LODWORD(v40[8]) = a5;
  LODWORD(v40[10]) = a7;
  v40[12] = *((_QWORD *)a9 + 2);
  v40[13] = v36;
  v40[14] = pv;
  LODWORD(v40[15]) = *((_DWORD *)v34 + 106);
  if ( LODWORD(v40[15]) )
    HIDWORD(v40[15]) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  else
    v40[15] = 0LL;
  v15 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
  if ( a4 )
  {
    if ( a3 <= 0x1FFFFFFF )
    {
      v40[7] = UMPDOBJ::_AllocUserMem(v14, 8 * a3, 1);
      if ( !v40[7] )
        goto LABEL_11;
    }
  }
  if ( a6 )
  {
    v40[9] = UMPDOBJ::_AllocUserMem(v14, a5, 1);
    if ( !v40[9] )
      goto LABEL_11;
  }
  if ( v38 )
  {
    v40[11] = UMPDOBJ::_AllocUserMem(v14, a7, 1);
    if ( !v40[11] )
      goto LABEL_11;
  }
  v17 = (char *)UMPDOBJ::_AllocUserMem(v14, 0x30000u, 1);
  if ( !v17 )
    goto LABEL_11;
  v40[17] = v17;
  v40[18] = v17 + 0x10000;
  v40[19] = v17 + 0x20000;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (void **)&v40[4], v15) )
    goto LABEL_11;
  if ( !(unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v40[5]) )
    goto LABEL_11;
  if ( !(unsigned int)UMPDOBJ::ThunkStringW(v14, (unsigned __int16 **)&v40[13]) )
    goto LABEL_11;
  LODWORD(v30) = 8;
  if ( UMPDOBJ::Thunk(v14, v40, 0xB0u, v39, v30) == -1 )
    goto LABEL_11;
  if ( a4 )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr(v14, (void *)v40[7]);
    memmove(a4, KernelPtr, 8LL * a3);
  }
  if ( a6 )
  {
    v19 = UMPDOBJ::GetKernelPtr(v14, (void *)v40[9]);
    memmove(a6, v19, a5);
    if ( *((_DWORD *)a6 + 59) == 18 && *((_DWORD *)a6 + 68) <= 0x100u && *((_DWORD *)a6 + 69) <= 0x100u )
    {
      SETFLAG(1, (volatile unsigned int *)a9 + 10, 0x400000);
      LODWORD(v40[20]) = *((_QWORD *)a6 + 35) != 0LL;
      HIDWORD(v40[20]) = *((_QWORD *)a6 + 36) != 0LL;
      LODWORD(v40[21]) = *((_QWORD *)a6 + 37) != 0LL;
      *((_QWORD *)a6 + 35) = 0LL;
      *((_QWORD *)a6 + 36) = 0LL;
      *((_QWORD *)a6 + 37) = 0LL;
      v20 = UMPDOBJ::GetKernelPtr(v14, (void *)v40[17]);
      Srca = (char *)UMPDOBJ::GetKernelPtr(v14, (void *)v40[18]);
      Size = (char *)UMPDOBJ::GetKernelPtr(v14, (void *)v40[19]);
      v21 = 0LL;
      pv = 0LL;
      v22 = 0LL;
      v36 = 0LL;
      v23 = 0LL;
      v37 = 0LL;
      if ( LODWORD(v40[20]) )
      {
        v21 = EngAllocUserMem((unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69)), 0x706D7547u);
        pv = v21;
      }
      if ( HIDWORD(v40[20]) )
      {
        v22 = EngAllocUserMem((unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69)), 0x706D7547u);
        v36 = v22;
      }
      if ( LODWORD(v40[21]) )
      {
        v23 = EngAllocUserMem((unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69)), 0x706D7547u);
        v37 = v23;
      }
      if ( v21 )
      {
        v24 = (unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69));
        if ( *((_DWORD *)v14 + 106) )
        {
          memmove(v21, v20, v24);
          if ( v22 )
            memmove(v22, Srca, (unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69)));
          if ( v23 )
            memmove(v23, Size, (unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69)));
        }
        else
        {
          v25 = (ULONG64)v20 + (unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69));
          if ( v25 < (unsigned __int64)v20 || v25 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v21, v20, v24);
          if ( v22 )
          {
            v26 = (unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69));
            if ( &Srca[v26] < Srca || (unsigned __int64)&Srca[v26] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v22, Srca, v26);
          }
          if ( v23 )
          {
            v27 = (unsigned int)(*((_DWORD *)a6 + 68) * *((_DWORD *)a6 + 69));
            if ( &Size[v27] < Size || (unsigned __int64)&Size[v27] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v23, Size, v27);
          }
        }
        *((_QWORD *)a6 + 35) = v21;
        *((_QWORD *)a6 + 36) = v22;
        *((_QWORD *)a6 + 37) = v23;
      }
      else
      {
        *((_DWORD *)a6 + 59) = 17;
      }
    }
  }
  v28 = v38;
  if ( v38 )
  {
    v29 = UMPDOBJ::GetKernelPtr(v14, (void *)v40[11]);
    if ( !v29[37] )
    {
      if ( v39[0] )
        UMPDDrvDisablePDEV(v39[0]);
LABEL_11:
      XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v34);
      return 0LL;
    }
    memmove(v28, v29, a7);
  }
  XUMPDOBJ::~XUMPDOBJ((XUMPDOBJ *)&v34);
  return v39[0];
}
