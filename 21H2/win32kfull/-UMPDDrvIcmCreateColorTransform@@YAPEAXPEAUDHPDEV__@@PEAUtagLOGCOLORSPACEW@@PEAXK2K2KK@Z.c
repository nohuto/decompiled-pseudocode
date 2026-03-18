/*
 * XREFs of ?UMPDDrvIcmCreateColorTransform@@YAPEAXPEAUDHPDEV__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2KK@Z @ 0x1C02A8FA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0129B98 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C012A154 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C012A484 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C012A700 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall UMPDDrvIcmCreateColorTransform(
        struct DHPDEV__ *a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        unsigned int a9)
{
  __int64 v10; // rdi
  UMPDOBJ *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  size_t Size; // [rsp+20h] [rbp-A1h]
  __int64 v19; // [rsp+30h] [rbp-91h] BYREF
  UMPDOBJ *v20; // [rsp+38h] [rbp-89h] BYREF
  void *v21; // [rsp+40h] [rbp-81h]
  _QWORD v22[12]; // [rsp+50h] [rbp-71h] BYREF

  v10 = 0LL;
  v21 = a7;
  v19 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v20);
  memset(v22, 0, 0x58uLL);
  v14 = v20;
  if ( v20 )
  {
    v22[0] = 0x4000000058LL;
    v22[2] = *(_QWORD *)v20;
    v22[9] = v21;
    v22[3] = a1;
    v22[4] = a2;
    v22[5] = a3;
    LODWORD(v22[6]) = a4;
    v22[7] = a5;
    LODWORD(v22[8]) = a6;
    v22[10] = __PAIR64__(a9, a8);
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v20, (const void **)&v22[4], 0x148u) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v22[5], a4)
        && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v22[7], a6)
        && (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v22[9], a8) )
      {
        LODWORD(Size) = 8;
        v15 = UMPDOBJ::Thunk(v14, v22, 0x58u, &v19, Size);
        v16 = v19;
        if ( v15 == -1 )
          v16 = 0LL;
        v10 = v16;
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v20);
  return v10;
}
