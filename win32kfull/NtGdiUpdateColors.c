__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // r14d
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r10
  __int64 v6; // r9
  struct REGION *v7; // rax
  struct ECLIPOBJ *v8; // rdx
  BOOL (__stdcall *v9)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  __int64 v10; // rdx
  unsigned int updated; // eax
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  DC *v13[2]; // [rsp+50h] [rbp-B8h] BYREF
  struct _XLATEOBJ *v14[3]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v15[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v16; // [rsp+98h] [rbp-70h] BYREF
  int v17; // [rsp+A0h] [rbp-68h]
  int v18; // [rsp+A4h] [rbp-64h]
  __int16 v19; // [rsp+A8h] [rbp-60h]
  struct _CLIPOBJ v20; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v21; // [rsp+118h] [rbp+10h]
  int v22; // [rsp+120h] [rbp+18h]
  int v23; // [rsp+148h] [rbp+40h]
  __int64 v24; // [rsp+158h] [rbp+50h]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v13) )
  {
    v3 = *((_QWORD *)v13[0] + 6);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    v19 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v15, (struct XDCOBJ *)v13, 0);
    if ( (*(_DWORD *)(v3 + 2140) & 0x100) != 0 )
    {
      v4 = *((_QWORD *)v13[0] + 62);
      if ( v4 == *(_QWORD *)(v3 + 2528) )
      {
        v5 = *(_QWORD *)(v4 + 128);
        v6 = *((_QWORD *)v13[0] + 11);
        if ( (*((_DWORD *)v13[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v13, (DC *)((char *)v13[0] + 1032));
        if ( (v15[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v6 + 80) && *(_QWORD *)(v6 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(v14, v5, v6);
            if ( v14[0] )
            {
              v7 = XDCOBJ::prgnEffRao(v13);
              v21 = 0LL;
              v22 = 0;
              v24 = 0LL;
              v23 = 1;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v20, v7, (DC *)((char *)v13[0] + 1032), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v20.rclBounds) )
              {
                v1 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v13[0] + 9) & 0xE0) != 0 )
                {
                  *(RECTL *)&v14[1] = v20.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v13, v8, (__m128i *)&v14[1]);
                }
                ++*(_DWORD *)(v4 + 92);
                if ( (*(_DWORD *)(v3 + 40) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v4 + 24), &v20, v14[0]);
                }
                else
                {
                  if ( (*(_DWORD *)(v4 + 112) & 0x400) != 0 )
                    v9 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v3 + 2816);
                  else
                    v9 = EngCopyBits;
                  v10 = (v4 + 24) & -(__int64)(v4 != 0);
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))v9)(
                              v10,
                              v10,
                              &v20,
                              v14[0],
                              &v20.rclBounds,
                              &v20.rclBounds);
                }
                v1 = updated;
              }
            }
            XLATEMEMOBJ::~XLATEMEMOBJ((XLATEMEMOBJ *)v14);
          }
          else
          {
            v1 = 1;
          }
        }
        else
        {
          v1 = XDCOBJ::bFullScreen((XDCOBJ *)v13);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v15);
    if ( v16 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v16);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
    return v1;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v13);
    return 0LL;
  }
}
