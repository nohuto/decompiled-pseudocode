__int64 __fastcall GreCheckBitmapBits(HDC a1, void *a2, struct _DEVBITMAPINFO *a3, void *a4, unsigned __int8 *a5)
{
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v13; // [rsp+68h] [rbp-31h] BYREF
  char v14; // [rsp+70h] [rbp-29h]
  int v15; // [rsp+74h] [rbp-25h]
  _QWORD v16[2]; // [rsp+78h] [rbp-21h] BYREF
  __int128 v17; // [rsp+88h] [rbp-11h] BYREF
  __int64 v18; // [rsp+98h] [rbp-1h]
  int v19; // [rsp+A0h] [rbp+7h]
  _QWORD v20[2]; // [rsp+A8h] [rbp+Fh] BYREF
  __int16 v21; // [rsp+B8h] [rbp+1Fh]
  __int64 v22; // [rsp+C0h] [rbp+27h]
  __int64 v23; // [rsp+C8h] [rbp+2Fh]
  __int64 v24; // [rsp+D0h] [rbp+37h]

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    v20[1] = 0LL;
    v17 = 0LL;
    v21 = 256;
    v18 = 0LL;
    v19 = 0;
    v20[0] = 0LL;
    v24 = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v17, (struct XDCOBJ *)v16, 0) )
    {
      v10 = *(_QWORD *)(v16[0] + 48LL);
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 3192) )
        {
          LOBYTE(v9) = 14;
          v11 = HmgShareLockCheck(a2, v9);
          if ( v11 )
          {
            v13 = 0LL;
            v14 = 0;
            v15 = 0;
            SURFMEM::bCreateDIB((SURFMEM *)&v13, a3, a4, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            if ( v13 )
              v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, unsigned __int8 *))(v10 + 3192))(
                     *(_QWORD *)(v10 + 1768),
                     *(_QWORD *)(v11 + 24),
                     (v13 + 24) & -(__int64)(v13 != 0),
                     a5);
            SURFMEM::~SURFMEM((SURFMEM *)&v13);
            DEC_SHARE_REF_CNT(v11);
          }
        }
        else
        {
          EngSetLastError(0x57u);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v17);
    if ( v20[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v20);
    if ( v16[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  }
  return v8;
}
