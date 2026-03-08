/*
 * XREFs of ?UMPDDrvEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C02BBF60
 * Callers:
 *     <none>
 * Callees:
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00ED8B8 (-SETFLAG@@YAXHAECKK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C029B708 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C029BE78 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z @ 0x1C02BAB9C (-ThunkStringW@UMPDOBJ@@QEAAHPEAPEAG@Z.c)
 *     ?UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C02BB8D0 (-UMPDDrvDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 */

struct DHPDEV__ *__fastcall UMPDDrvEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  __int64 v12; // r13
  UMPDOBJ *v14; // rbx
  unsigned int v15; // edi
  char *v17; // rax
  char *KernelPtr; // rax
  char *v19; // rax
  char *v20; // r13
  PVOID v21; // r12
  PVOID v22; // r15
  PVOID v23; // rdi
  size_t v24; // r8
  ULONG64 v25; // rcx
  size_t v26; // rax
  size_t v27; // rax
  void *v28; // rdx
  void *v29; // rdi
  char *v30; // rax
  size_t v31; // [rsp+20h] [rbp-178h]
  char *Size; // [rsp+38h] [rbp-160h]
  UMPDOBJ *v33; // [rsp+40h] [rbp-158h] BYREF
  PVOID pv; // [rsp+48h] [rbp-150h]
  PVOID v35; // [rsp+50h] [rbp-148h]
  PVOID v36; // [rsp+58h] [rbp-140h]
  void *v37; // [rsp+60h] [rbp-138h]
  struct DHPDEV__ *v38; // [rsp+68h] [rbp-130h] BYREF
  void *Src; // [rsp+70h] [rbp-128h]
  unsigned int *v40; // [rsp+78h] [rbp-120h]
  unsigned int *v41; // [rsp+80h] [rbp-118h]
  unsigned int *v42; // [rsp+88h] [rbp-110h]
  unsigned int *v43; // [rsp+90h] [rbp-108h]
  _QWORD v44[4]; // [rsp+A0h] [rbp-F8h] BYREF
  void *v45; // [rsp+C0h] [rbp-D8h] BYREF
  unsigned __int16 *v46; // [rsp+C8h] [rbp-D0h] BYREF
  int v47; // [rsp+D0h] [rbp-C8h]
  void *v48; // [rsp+D8h] [rbp-C0h]
  unsigned int v49; // [rsp+E0h] [rbp-B8h]
  void *v50; // [rsp+E8h] [rbp-B0h]
  unsigned int v51; // [rsp+F0h] [rbp-A8h]
  void *v52; // [rsp+F8h] [rbp-A0h]
  __int64 v53; // [rsp+100h] [rbp-98h]
  unsigned __int16 *v54[2]; // [rsp+108h] [rbp-90h] BYREF
  int v55; // [rsp+118h] [rbp-80h]
  unsigned int v56; // [rsp+11Ch] [rbp-7Ch]
  void *v57; // [rsp+128h] [rbp-70h]
  void *v58; // [rsp+130h] [rbp-68h]
  void *v59; // [rsp+138h] [rbp-60h]
  BOOL v60; // [rsp+140h] [rbp-58h]
  BOOL v61; // [rsp+144h] [rbp-54h]
  BOOL v62; // [rsp+148h] [rbp-50h]

  v12 = a3;
  v36 = a2;
  v40 = a6;
  v37 = a8;
  v35 = a10;
  pv = a11;
  v38 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v33);
  memset_0(v44, 0, 0xB0uLL);
  v14 = v33;
  if ( !v33 )
    goto LABEL_11;
  v44[0] = 176LL;
  v44[2] = *(_QWORD *)v33;
  v44[3] = *((_QWORD *)a9 + 221);
  v45 = a1;
  v46 = (unsigned __int16 *)v36;
  v47 = v12;
  v48 = a4;
  v49 = a5;
  v51 = a7;
  v53 = *((_QWORD *)a9 + 2);
  v54[0] = (unsigned __int16 *)v35;
  v54[1] = (unsigned __int16 *)pv;
  v55 = *((_DWORD *)v33 + 106);
  v56 = v55 ? (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC : 0;
  v15 = a1 ? a1->dmSize + a1->dmDriverExtra : 0;
  if ( a4 )
  {
    if ( (unsigned int)v12 <= 0x1FFFFFFF )
    {
      v48 = UMPDOBJ::_AllocUserMem(v14, 8 * (int)v12, 1);
      if ( !v48 )
        goto LABEL_11;
    }
  }
  if ( a6 )
  {
    v50 = UMPDOBJ::_AllocUserMem(v14, a5, 1);
    if ( !v50 )
      goto LABEL_11;
  }
  if ( v37 )
  {
    v52 = UMPDOBJ::_AllocUserMem(v14, a7, 1);
    if ( !v52 )
      goto LABEL_11;
  }
  v17 = UMPDOBJ::_AllocUserMem(v14, 0x30000u, 1);
  if ( !v17 )
    goto LABEL_11;
  v57 = v17;
  v58 = v17 + 0x10000;
  v59 = v17 + 0x20000;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v45, v15) )
    goto LABEL_11;
  if ( !(unsigned int)UMPDOBJ::ThunkStringW(v14, &v46) )
    goto LABEL_11;
  if ( !(unsigned int)UMPDOBJ::ThunkStringW(v14, v54) )
    goto LABEL_11;
  LODWORD(v31) = 8;
  if ( (unsigned int)UMPDOBJ::Thunk(v14, v44, 0xB0u, &v38, v31) == -1 )
    goto LABEL_11;
  if ( a4 )
  {
    KernelPtr = UMPDOBJ::GetKernelPtr((char **)v14, (char *)v48);
    memmove(a4, KernelPtr, 8 * v12);
  }
  if ( a6 )
  {
    v19 = UMPDOBJ::GetKernelPtr((char **)v14, (char *)v50);
    memmove(a6, v19, a5);
    if ( a6[59] == 18 && a6[68] <= 0x100 && a6[69] <= 0x100 )
    {
      SETFLAG(1, (volatile unsigned int *)a9 + 10, 0x400000);
      v41 = a6 + 70;
      v60 = *((_QWORD *)a6 + 35) != 0LL;
      v42 = a6 + 72;
      v61 = *((_QWORD *)a6 + 36) != 0LL;
      v43 = a6 + 74;
      v62 = *((_QWORD *)a6 + 37) != 0LL;
      *((_QWORD *)a6 + 35) = 0LL;
      *((_QWORD *)a6 + 36) = 0LL;
      *((_QWORD *)a6 + 37) = 0LL;
      v20 = UMPDOBJ::GetKernelPtr((char **)v14, (char *)v57);
      Size = UMPDOBJ::GetKernelPtr((char **)v14, (char *)v58);
      Src = UMPDOBJ::GetKernelPtr((char **)v14, (char *)v59);
      v21 = 0LL;
      pv = 0LL;
      v22 = 0LL;
      v35 = 0LL;
      v23 = 0LL;
      v36 = 0LL;
      if ( v60 )
      {
        v21 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        pv = v21;
      }
      if ( v61 )
      {
        v22 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v35 = v22;
      }
      if ( v62 )
      {
        v23 = EngAllocUserMem(a6[68] * a6[69], 0x706D7547u);
        v36 = v23;
      }
      if ( v21 )
      {
        v24 = a6[68] * a6[69];
        if ( *((_DWORD *)v14 + 106) )
        {
          memmove(v21, v20, v24);
          if ( v22 )
            memmove(v22, Size, a6[68] * a6[69]);
          if ( v23 )
            memmove(v23, Src, a6[68] * a6[69]);
        }
        else
        {
          v25 = (ULONG64)&v20[a6[68] * a6[69]];
          if ( v25 < (unsigned __int64)v20 || v25 > MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v21, v20, v24);
          if ( v22 )
          {
            v26 = a6[68] * a6[69];
            if ( &Size[v26] < Size || (unsigned __int64)&Size[v26] > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v22, Size, v26);
          }
          if ( v23 )
          {
            v27 = a6[68] * a6[69];
            v28 = Src;
            if ( (char *)Src + v27 < Src || (unsigned __int64)Src + v27 > MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v23, v28, v27);
          }
        }
        *(_QWORD *)v41 = v21;
        *(_QWORD *)v42 = v22;
        *(_QWORD *)v43 = v23;
      }
      else
      {
        a6[59] = 17;
      }
    }
  }
  v29 = v37;
  if ( v37 )
  {
    v30 = UMPDOBJ::GetKernelPtr((char **)v14, (char *)v52);
    if ( !*((_QWORD *)v30 + 37) )
    {
      if ( v38 )
        UMPDDrvDisablePDEV(v38);
LABEL_11:
      XUMPDOBJ::~XUMPDOBJ(&v33);
      return 0LL;
    }
    memmove(v29, v30, a7);
  }
  XUMPDOBJ::~XUMPDOBJ(&v33);
  return v38;
}
