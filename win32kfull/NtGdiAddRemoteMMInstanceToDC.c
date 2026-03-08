/*
 * XREFs of NtGdiAddRemoteMMInstanceToDC @ 0x1C027A930
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C012F7A8 (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     memmove @ 0x1C0130B80 (memmove.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C026DA10 (-bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PE.c)
 *     ?GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z @ 0x1C02788F0 (-GreGetBaseUFIBits@@YAHPEAU_UNIVERSAL_FONT_ID@@PEAU_FONTFILEVIEW@@@Z.c)
 */

__int64 __fastcall NtGdiAddRemoteMMInstanceToDC(HDC a1, char *Src, size_t Size)
{
  size_t v3; // rsi
  unsigned int v6; // r14d
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _FONTFILEVIEW **v13; // r8
  __int64 v14; // rax
  int v15; // [rsp+40h] [rbp-128h] BYREF
  _QWORD v16[2]; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v17[24]; // [rsp+58h] [rbp-110h] BYREF
  _OWORD v18[5]; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v19; // [rsp+C0h] [rbp-A8h]
  __int128 v20; // [rsp+D0h] [rbp-98h]
  __int64 v21; // [rsp+E0h] [rbp-88h]
  _BYTE v22[8]; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v23[4]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v24; // [rsp+FCh] [rbp-6Ch]

  v3 = (unsigned int)Size;
  memset_0(v22, 0, 0x50uLL);
  v6 = 0;
  v15 = 0;
  memset_0(v18, 0, 0x78uLL);
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    if ( (*(_DWORD *)(v16[0] + 36LL) & 1) == 0 && (unsigned int)v3 <= 0x50 )
    {
      if ( (_DWORD)v3 && ((unsigned __int64)&Src[v3] > MmUserProbeAddress || &Src[v3] < Src) )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, Src, v3);
      if ( v24 <= 0x10 )
      {
        v9 = Gre::Base::Globals(v8);
        GreAcquireSemaphore(*((_QWORD *)v9 + 6));
        EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemPublicPFT", *((_QWORD *)v9 + 6), 14LL);
        if ( (unsigned int)GreGetBaseUFIBits((struct _UNIVERSAL_FONT_ID *)v22, (struct _FONTFILEVIEW *)v18) )
        {
          v11 = SGDGetSessionState(v10);
          PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v17, *(struct PFT **)(*(_QWORD *)(v11 + 32) + 20272LL));
          v12 = Win32AllocPoolZInit(128LL, 1986422343LL);
          v13 = (struct _FONTFILEVIEW **)v12;
          if ( v12 )
          {
            v15 = 0;
            v14 = v12 + 8;
            *v13 = (struct _FONTFILEVIEW *)v14;
            *((_QWORD *)&v19 + 1) = 0LL;
            DWORD1(v20) = 0;
            *(_OWORD *)v14 = v18[0];
            *(_OWORD *)(v14 + 16) = v18[1];
            *(_OWORD *)(v14 + 32) = v18[2];
            *(_OWORD *)(v14 + 48) = v18[3];
            *(_OWORD *)(v14 + 64) = v18[4];
            *(_OWORD *)(v14 + 80) = v19;
            *(_OWORD *)(v14 + 96) = v20;
            *(_QWORD *)(v14 + 112) = v21;
            v6 = PUBLIC_PFTOBJ::bLoadRemoteFonts(
                   (PUBLIC_PFTOBJ *)v17,
                   (struct XDCOBJ *)v16,
                   v13,
                   1u,
                   (struct tagDESIGNVECTOR *)v23,
                   0LL,
                   &v15);
          }
          else
          {
            v6 = 0;
          }
        }
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemPublicPFT");
        GreReleaseSemaphoreInternal(*((_QWORD *)v9 + 6));
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return v6;
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return 0LL;
  }
}
