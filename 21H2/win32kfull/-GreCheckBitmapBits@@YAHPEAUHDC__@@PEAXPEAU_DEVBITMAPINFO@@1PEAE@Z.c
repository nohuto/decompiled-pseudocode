/*
 * XREFs of ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02B4434
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x1C02B4C30 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003FD70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C008AE30 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026ACF0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall GreCheckBitmapBits(HDC a1, void *a2, struct _DEVBITMAPINFO *a3, void *a4, unsigned __int8 *a5)
{
  unsigned int v8; // edi
  __int64 v9; // rbx
  __int64 v11; // [rsp+68h] [rbp-A0h] BYREF
  char v12; // [rsp+70h] [rbp-98h]
  int v13; // [rsp+74h] [rbp-94h]
  _BYTE v14[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v15; // [rsp+98h] [rbp-70h]
  _QWORD v16[7]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v17[32]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v18; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v19[64]; // [rsp+108h] [rbp+0h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v17);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v17, (struct XDCOBJ *)v16, 0) )
    {
      v9 = *(_QWORD *)(v16[0] + 48LL);
      if ( v9 )
      {
        if ( *(_QWORD *)(v9 + 3192) )
        {
          COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v14, a2);
          if ( v15 )
          {
            v11 = 0LL;
            v12 = 0;
            v13 = 0;
            SURFMEM::bCreateDIB((SURFMEM *)&v11, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v11 )
              v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v9 + 3192))(
                     *(_QWORD *)(v9 + 1768),
                     *(_QWORD *)(v15 + 24),
                     v11 + 24,
                     a5);
            SURFMEM::~SURFMEM((SURFMEM *)&v11);
            if ( v15 )
              DEC_SHARE_REF_CNT(v15);
          }
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v14);
        }
        else
        {
          EngSetLastError(0x57u);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v17);
    if ( v18 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v18);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v16);
  return v8;
}
