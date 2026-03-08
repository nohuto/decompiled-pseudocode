/*
 * XREFs of GreGetDIBColorTable @ 0x1C00CF020
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0050C40 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0050DA0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0051250 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C00CF250 (-vFill_rgbquads@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  DC *v8; // rcx
  struct _DC_ATTR *UserAttr; // rax
  struct SURFACE *v10; // rcx
  DC *v11; // rcx
  struct _DC_ATTR *v12; // rax
  __int64 v13; // rdi
  unsigned int v15; // ebx
  ULONG v16; // ecx
  __int64 v17; // [rsp+28h] [rbp-29h] BYREF
  DC *v18; // [rsp+30h] [rbp-21h] BYREF
  __int64 v19; // [rsp+38h] [rbp-19h]
  __int128 v20; // [rsp+48h] [rbp-9h] BYREF
  __int64 v21; // [rsp+58h] [rbp+7h]
  int v22; // [rsp+60h] [rbp+Fh]
  _QWORD v23[2]; // [rsp+68h] [rbp+17h] BYREF
  __int16 v24; // [rsp+78h] [rbp+27h]
  __int64 v25; // [rsp+80h] [rbp+2Fh]
  __int64 v26; // [rsp+88h] [rbp+37h]
  __int64 v27; // [rsp+90h] [rbp+3Fh]
  int v28; // [rsp+D0h] [rbp+7Fh] BYREF

  v18 = 0LL;
  v19 = 0LL;
  v7 = 0;
  XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v18, a1);
  v8 = v18;
  if ( v18 )
  {
    if ( (*((_DWORD *)v18 + 11) & 2) == 0 )
    {
      if ( !HIDWORD(v19) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
        if ( UserAttr && !DC::SaveAttributes(v18, UserAttr) )
        {
          v8 = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)v18 + 3);
          v18 = 0LL;
          goto LABEL_10;
        }
        v8 = v18;
      }
      *((_DWORD *)v8 + 11) |= 2u;
      v8 = v18;
      LODWORD(v19) = 1;
    }
    if ( (*((_DWORD *)v8 + 130) & 4) != 0 )
    {
      DC::vMarkTransformDirty(v8);
      v8 = v18;
    }
  }
LABEL_10:
  if ( !a4 )
  {
    v16 = 87;
    goto LABEL_41;
  }
  if ( !v8 )
  {
    v16 = 6;
LABEL_41:
    EngSetLastError(v16);
LABEL_21:
    v11 = v18;
    if ( v18 )
    {
      if ( (_DWORD)v19 && (*((_DWORD *)v18 + 11) & 2) != 0 )
      {
        if ( !HIDWORD(v19) )
        {
          v12 = XDCOBJ::GetUserAttr((XDCOBJ *)&v18);
          v11 = v18;
          if ( v12 )
          {
            DC::RestoreAttributes(v18, v12);
            v11 = v18;
          }
        }
        *((_DWORD *)v11 + 11) &= ~2u;
        v11 = v18;
        LODWORD(v19) = 0;
      }
      v28 = 0;
      v13 = *(_QWORD *)v11;
      HmgDecrementExclusiveReferenceCountEx(v11, HIDWORD(v19), &v28);
      if ( v28 )
        GrepDeleteDC(v13, 0x2000000LL);
    }
    return v7;
  }
  v23[1] = 0LL;
  v20 = 0LL;
  v24 = 256;
  v21 = 0LL;
  v22 = 0;
  v23[0] = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v25 = 0LL;
  DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v20, (struct XDCOBJ *)&v18);
  v10 = (struct SURFACE *)*((_QWORD *)v18 + 62);
  if ( !v10 )
    v10 = SURFACE::pdibDefault;
  if ( (*((_WORD *)v10 + 50) || !*((_QWORD *)v10 + 24)) && !*((_QWORD *)v10 + 16)
    || (unsigned int)(*((_DWORD *)v10 + 24) - 1) > 2 )
  {
    EngSetLastError(6u);
LABEL_19:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
    if ( v23[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v23);
    goto LABEL_21;
  }
  v17 = *((_QWORD *)v10 + 16);
  v15 = *(_DWORD *)(v17 + 28);
  if ( a2 < v15 )
  {
    if ( a2 + a3 <= v15 )
      v15 = a2 + a3;
    v7 = v15 - a2;
    XEPALOBJ::vFill_rgbquads((XEPALOBJ *)&v17, a4, a2, v7);
    goto LABEL_19;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
  if ( v23[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v23);
  DCOBJ::~DCOBJ((DCOBJ *)&v18);
  return 0LL;
}
