/*
 * XREFs of ?GreCheckBitmapBits@@YAHPEAUHDC__@@PEAXPEAU_DEVBITMAPINFO@@1PEAE@Z @ 0x1C02CE430
 * Callers:
 *     NtGdiCheckBitmapBits @ 0x1C02CEC80 (NtGdiCheckBitmapBits.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x1C001DEC4 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C0264D70 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 */

__int64 __fastcall GreCheckBitmapBits(HDC a1, void *a2, struct _DEVBITMAPINFO *a3, void *a4, unsigned __int8 *a5)
{
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v14; // [rsp+68h] [rbp-A0h] BYREF
  char v15; // [rsp+70h] [rbp-98h]
  int v16; // [rsp+74h] [rbp-94h]
  _QWORD v17[2]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v18[32]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v19[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v20; // [rsp+C8h] [rbp-40h]
  _BYTE v21[32]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v22; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v23[64]; // [rsp+108h] [rbp+0h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( v17[0] )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v21);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, (struct XDCOBJ *)v17, 0) )
    {
      v12 = *(_QWORD *)(v17[0] + 48LL);
      if ( v12 )
      {
        if ( *(_QWORD *)(v12 + 3192) )
        {
          COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v19, a2);
          if ( v20 )
          {
            v14 = 0LL;
            v16 = 0;
            v15 = 0;
            SURFMEM::bCreateDIB((SURFMEM *)&v14, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v14 )
              v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v12 + 3192))(
                     *(_QWORD *)(v12 + 1768),
                     *(_QWORD *)(v20 + 24),
                     (v14 + 24) & -(__int64)(v14 != 0),
                     a5);
            SURFMEM::~SURFMEM((SURFMEM *)&v14);
            if ( v20 )
              DEC_SHARE_REF_CNT(v20);
          }
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
        }
        else
        {
          EngSetLastError(0x57u);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21, v9, v10, v11);
    if ( v22 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v22);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v23);
    if ( v17[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v17);
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v18);
  return v8;
}
