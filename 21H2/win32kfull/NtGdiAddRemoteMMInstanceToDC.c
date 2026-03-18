/*
 * XREFs of NtGdiAddRemoteMMInstanceToDC @ 0x1C027AA50
 * Callers:
 *     <none>
 * Callees:
 *     ??0PUBLIC_PFTOBJ@@QEAA@XZ @ 0x1C0011B78 (--0PUBLIC_PFTOBJ@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C02709E0 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z @ 0x1C027965C (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z.c)
 */

__int64 __fastcall NtGdiAddRemoteMMInstanceToDC(HDC a1, char *Src, size_t Size)
{
  size_t v3; // rsi
  unsigned int v6; // r14d
  __int64 v8; // rax
  struct _FONTFILEVIEW **v9; // r8
  __int64 v10; // rax
  int v11; // [rsp+40h] [rbp-138h] BYREF
  _BYTE v12[8]; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v13[6]; // [rsp+50h] [rbp-128h] BYREF
  _OWORD v14[8]; // [rsp+80h] [rbp-F8h] BYREF
  _DWORD v15[20]; // [rsp+100h] [rbp-78h] BYREF

  v3 = (unsigned int)Size;
  memset(v15, 0, sizeof(v15));
  v6 = 0;
  v11 = 0;
  memset(v14, 0, 0x78uLL);
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0] )
  {
    if ( (*(_DWORD *)(v13[0] + 36LL) & 1) == 0 && (unsigned int)v3 <= 0x50 )
    {
      if ( (_DWORD)v3 && ((unsigned __int64)&Src[v3] > MmUserProbeAddress || &Src[v3] < Src) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, Src, v3);
      if ( v15[3] <= 0x10u )
      {
        GreAcquireSemaphore(ghsemPublicPFT);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemPublicPFT", ghsemPublicPFT, 15LL);
        if ( (unsigned int)GreGetBaseUFIBits((struct _UNIVERSAL_FONT_ID *)v15, (struct _FONTFILEVIEW *)v14) )
        {
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v12);
          v8 = Win32AllocPoolZInit(128LL, 1986422343LL);
          v9 = (struct _FONTFILEVIEW **)v8;
          if ( v8 )
          {
            v11 = 0;
            v10 = v8 + 8;
            *v9 = (struct _FONTFILEVIEW *)v10;
            *((_QWORD *)&v14[5] + 1) = 0LL;
            DWORD1(v14[6]) = 0;
            *(_OWORD *)v10 = v14[0];
            *(_OWORD *)(v10 + 16) = v14[1];
            *(_OWORD *)(v10 + 32) = v14[2];
            *(_OWORD *)(v10 + 48) = v14[3];
            *(_OWORD *)(v10 + 64) = v14[4];
            *(_OWORD *)(v10 + 80) = v14[5];
            *(_OWORD *)(v10 + 96) = v14[6];
            *(_QWORD *)(v10 + 112) = *(_QWORD *)&v14[7];
            v6 = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                   (PUBLIC_PFTOBJ *)v12,
                   (struct XDCOBJ *)v13,
                   v9,
                   1u,
                   (struct tagDESIGNVECTOR *)&v15[2],
                   0LL,
                   &v11);
          }
          else
          {
            v6 = 0;
          }
        }
        EtwTraceGreLockReleaseSemaphore(L"ghsemPublicPFT", ghsemPublicPFT);
        GreReleaseSemaphoreInternal(ghsemPublicPFT);
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v13);
    return v6;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v13);
    return 0LL;
  }
}
