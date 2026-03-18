/*
 * XREFs of ?GreExtTextOutWInternal@@YAHPEAUHDC__@@HHIPEAUtagRECT@@PEAGHPEAHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x1C0119504
 * Callers:
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x1C0027824 (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x1C0027B88 (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z @ 0x1C00A1E50 (-GrepExtTextOutW@@YAHPEAUHDC__@@HHIPEBUtagRECT@@PEBGIPEBHW4EntryPoint@RFONTOBJ@@@Z.c)
 *     NtGdiExtTextOutW @ 0x1C0118A60 (NtGdiExtTextOutW.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00E0C40 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C010BA70 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C011C160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C011CB30 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x1C013E430 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E4C0 (--0-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreExtTextOutWInternal(
        HDC a1,
        LONG a2,
        LONG a3,
        int a4,
        struct tagRECT *a5,
        unsigned __int16 *a6,
        int a7,
        int *a8,
        void *a9,
        unsigned int a10,
        int a11)
{
  unsigned int v12; // edi
  DC *v16; // rcx
  struct _DC_ATTR *UserAttr; // rax
  unsigned int v18; // eax
  struct _DC_ATTR *v19; // rax
  __int64 v20; // rbx
  _DWORD v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  DC *v23; // [rsp+70h] [rbp-98h] BYREF
  __int64 v24; // [rsp+78h] [rbp-90h]
  _BYTE v25[40]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h]
  _QWORD v29[2]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v30[32]; // [rsp+D8h] [rbp-30h] BYREF
  __int16 v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  __int64 v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]

  v23 = 0LL;
  v12 = 0;
  v24 = 0LL;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v25);
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v23, a1);
  v16 = v23;
  if ( !v23 )
    goto LABEL_28;
  if ( (*((_DWORD *)v23 + 11) & 2) == 0 )
  {
    if ( !HIDWORD(v24) )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v23);
      if ( UserAttr && !DC::SaveAttributes(v23, UserAttr) )
      {
        v16 = 0LL;
        _InterlockedDecrement((volatile signed __int32 *)v23 + 3);
        v23 = 0LL;
LABEL_19:
        if ( v16 )
        {
          if ( (_DWORD)v24 && (*((_DWORD *)v16 + 11) & 2) != 0 )
          {
            if ( !HIDWORD(v24) )
            {
              v19 = XDCOBJ::GetUserAttr((XDCOBJ *)&v23);
              v16 = v23;
              if ( v19 )
              {
                DC::RestoreAttributes(v23, v19);
                v16 = v23;
              }
            }
            *((_DWORD *)v16 + 11) &= ~2u;
            v16 = v23;
            LODWORD(v24) = 0;
          }
          v22[0] = 0;
          v20 = *(_QWORD *)v16;
          HmgDecrementExclusiveReferenceCountEx(v16, HIDWORD(v24), v22);
          if ( v22[0] )
            GrepDeleteDC(v20, 0x2000000LL);
        }
        goto LABEL_28;
      }
      v16 = v23;
    }
    *((_DWORD *)v16 + 11) |= 2u;
    v16 = v23;
    LODWORD(v24) = 1;
  }
  if ( (*((_DWORD *)v16 + 130) & 4) != 0 )
  {
    DC::vMarkTransformDirty(v16);
    v16 = v23;
  }
  if ( v16 )
  {
    if ( (*((_DWORD *)v16 + 9) & 0x10000) == 0 )
    {
      v22[1] = *((unsigned __int16 *)v16 + 6);
      v22[0] = a11;
      v29[0] = 0LL;
      v29[1] = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::UnexpectedThreadTerminationHandler<DLODCOBJ>(v30);
      v31 = 256;
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0;
      v29[0] = 0LL;
      v34 = 0LL;
      v33 = 0LL;
      v32 = 0LL;
      if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v26, (struct XDCOBJ *)&v23, 0) )
        v18 = GreExtTextOutWLocked(
                (struct XDCOBJ *)&v23,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                *(unsigned __int8 *)(*((_QWORD *)v23 + 122) + 213LL),
                a9,
                a10,
                (const struct RFONTOBJ::Tag *)v22);
      else
        v18 = XDCOBJ::bFullScreen((XDCOBJ *)&v23);
      v12 = v18;
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26);
      if ( v29[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v29);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v30);
      v16 = v23;
    }
    goto LABEL_19;
  }
LABEL_28:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v25);
  return v12;
}
