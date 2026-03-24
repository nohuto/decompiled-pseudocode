/*
 * XREFs of ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B56DC
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x1C02B5ED0 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008E920 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C00A9A2C (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C016DB10 (_guard_dispatch_icall_nop.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026C990 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall GreCheckBitmapBits(HDC a1, void *a2, struct _DEVBITMAPINFO *a3, void *a4, unsigned __int8 *a5)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v12; // [rsp+68h] [rbp-A0h] BYREF
  char v13; // [rsp+70h] [rbp-98h]
  int v14; // [rsp+74h] [rbp-94h]
  _BYTE v15[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h]
  _QWORD v17[7]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v18[32]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v19; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v20[64]; // [rsp+108h] [rbp+0h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( v17[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v18);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)v17, 0) )
    {
      v9 = *(_QWORD *)(v17[0] + 48LL);
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 3216) )
        {
          COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v15, a2);
          if ( v16 )
          {
            v12 = 0LL;
            v13 = 0;
            v14 = 0;
            SURFMEM::bCreateDIB((SURFMEM *)&v12, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v12 )
              v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v9 + 3216))(
                     *(_QWORD *)(v9 + 1800),
                     *(_QWORD *)(v16 + 24),
                     v12 + 24,
                     a5);
            SURFMEM::~SURFMEM((SURFMEM *)&v12);
            if ( v16 )
              DEC_SHARE_REF_CNT(v16, v10);
          }
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v15);
        }
        else
        {
          EngSetLastError(0x57u);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
    if ( v19 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v19);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v20);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v17);
  return v8;
}
