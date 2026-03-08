/*
 * XREFs of ?UMPDDrvIcmCreateColorTransform@@YAPEAXPEAUDHPDEV__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2KK@Z @ 0x1C02BD980
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C029BD7C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C02B9F40 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C02B9FB8 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C02BA998 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
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
  size_t Size; // [rsp+20h] [rbp-A1h]
  __int64 v17; // [rsp+30h] [rbp-91h] BYREF
  UMPDOBJ *v18; // [rsp+38h] [rbp-89h] BYREF
  void *v19; // [rsp+40h] [rbp-81h]
  _DWORD v20[2]; // [rsp+50h] [rbp-71h] BYREF
  __int64 v21; // [rsp+58h] [rbp-69h]
  __int64 v22; // [rsp+60h] [rbp-61h]
  struct DHPDEV__ *v23; // [rsp+68h] [rbp-59h]
  void *v24; // [rsp+70h] [rbp-51h] BYREF
  void *v25; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v26; // [rsp+80h] [rbp-41h]
  int v27; // [rsp+84h] [rbp-3Dh]
  void *v28; // [rsp+88h] [rbp-39h] BYREF
  unsigned int v29; // [rsp+90h] [rbp-31h]
  int v30; // [rsp+94h] [rbp-2Dh]
  void *v31; // [rsp+98h] [rbp-29h] BYREF
  unsigned int v32; // [rsp+A0h] [rbp-21h]
  unsigned int v33; // [rsp+A4h] [rbp-1Dh]

  v10 = 0LL;
  v19 = a7;
  v17 = 0LL;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  v14 = v18;
  v21 = 0LL;
  v27 = 0;
  v30 = 0;
  if ( v18 )
  {
    v20[0] = 88;
    v20[1] = 64;
    v22 = *(_QWORD *)v18;
    v31 = v19;
    v23 = a1;
    v24 = a2;
    v33 = a9;
    v25 = a3;
    v26 = a4;
    v28 = a5;
    v29 = a6;
    v32 = a8;
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v24, 0x148u) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v25, a4) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v28, a6) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v14, (const void **)&v31, a8) )
          {
            LODWORD(Size) = 8;
            if ( (unsigned int)UMPDOBJ::Thunk(v14, v20, 0x58u, &v17, Size) != -1 )
              v10 = v17;
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v10;
}
