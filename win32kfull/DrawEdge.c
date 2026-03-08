/*
 * XREFs of DrawEdge @ 0x1C0088404
 * Callers:
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C00140F0 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     xxxDrawCaptionBar @ 0x1C0021730 (xxxDrawCaptionBar.c)
 *     DrawPushButton @ 0x1C0086E34 (DrawPushButton.c)
 *     xxxDrawWindowFrame @ 0x1C00A64E4 (xxxDrawWindowFrame.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CADAC (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNDrawFullNC @ 0x1C0237FB4 (xxxMNDrawFullNC.c)
 *     xxxMenuDraw @ 0x1C0238E5C (xxxMenuDraw.c)
 * Callees:
 *     ?vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0051250 (-vLockIgnoreAttributes@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     FillRect @ 0x1C00881F8 (FillRect.c)
 *     ?GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z @ 0x1C008B840 (-GrePolyPatBltInternal@@YAHAEAVXDCOBJ@@KPEAU_POLYPATBLT@@KKKKKK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C024ED7C (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C024F0A8 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DrawEdge(HDC a1, RECT *a2, int a3, int a4)
{
  HDC v4; // r10
  RECT v5; // xmm0
  int v6; // edi
  LONG bottom; // r13d
  unsigned int v8; // esi
  LONG right; // r12d
  LONG top; // r14d
  int v11; // ecx
  LONG left; // r15d
  bool v13; // zf
  unsigned int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  HBRUSH v19; // r8
  HBRUSH v20; // rdx
  unsigned int v21; // edi
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  DC *v27; // rcx
  struct _DC_ATTR *UserAttr; // rax
  DC *v29; // rcx
  struct _DC_ATTR *v30; // rax
  __int64 v31; // rdi
  int v33; // eax
  unsigned int v34; // eax
  HBRUSH v35; // r8
  int v36; // eax
  HBRUSH v37; // r8
  DC *v38; // [rsp+50h] [rbp-89h] BYREF
  int v39; // [rsp+58h] [rbp-81h]
  unsigned int v40; // [rsp+5Ch] [rbp-7Dh]
  RECT v41; // [rsp+60h] [rbp-79h] BYREF
  int v42; // [rsp+70h] [rbp-69h] BYREF
  int v43; // [rsp+74h] [rbp-65h]
  HDC v44; // [rsp+78h] [rbp-61h]
  RECT *v45; // [rsp+80h] [rbp-59h]
  LONG v46; // [rsp+90h] [rbp-49h] BYREF
  LONG v47; // [rsp+94h] [rbp-45h]
  int v48; // [rsp+98h] [rbp-41h]
  int v49; // [rsp+9Ch] [rbp-3Dh]
  _QWORD v50[10]; // [rsp+A0h] [rbp-39h]

  v4 = a1;
  v5 = *a2;
  v44 = a1;
  v6 = a3;
  v43 = a3;
  v41 = v5;
  bottom = v5.bottom;
  v8 = 1;
  right = v5.right;
  top = v5.top;
  v11 = a4 | 0x8000;
  left = v5.left;
  v13 = *(_WORD *)(gpsi + 6996LL) == 1;
  v45 = a2;
  if ( !v13 )
    v11 = a4;
  v14 = v11 | 0x4000;
  if ( (v11 & 0x8000) == 0 )
    v14 = v11;
  v15 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_43;
  while ( 1 )
  {
    if ( (v14 & 0x4000) != 0 )
    {
      v33 = v15 & 3;
      if ( (v14 & 0x8000) != 0 )
      {
        if ( v33 )
          v20 = *(HBRUSH *)(gpsi + 4744LL);
        else
          v20 = *(HBRUSH *)(gpsi + 4736LL);
      }
      else if ( v33 )
      {
        v20 = *(HBRUSH *)(gpsi + 4824LL);
      }
      else
      {
        v20 = *(HBRUSH *)(gpsi + 4816LL);
      }
      v19 = v20;
    }
    else
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 4 )
              return 0LL;
            if ( (v14 & 0x1000) != 0 )
              v19 = *(HBRUSH *)(gpsi + 4824LL);
            else
              v19 = *(HBRUSH *)(gpsi + 4864LL);
            v20 = *(HBRUSH *)(gpsi + 4872LL);
          }
          else
          {
            if ( (v14 & 0x1000) != 0 )
              v19 = *(HBRUSH *)(gpsi + 4872LL);
            else
              v19 = *(HBRUSH *)(gpsi + 4856LL);
            v20 = *(HBRUSH *)(gpsi + 4824LL);
          }
        }
        else
        {
          if ( (v14 & 0x1000) != 0 )
            v19 = *(HBRUSH *)(gpsi + 4864LL);
          else
            v19 = *(HBRUSH *)(gpsi + 4824LL);
          v20 = *(HBRUSH *)(gpsi + 4856LL);
        }
      }
      else
      {
        if ( (v14 & 0x1000) != 0 )
          v19 = *(HBRUSH *)(gpsi + 4856LL);
        else
          v19 = *(HBRUSH *)(gpsi + 4872LL);
        v20 = *(HBRUSH *)(gpsi + 4864LL);
      }
    }
    if ( (v14 & 0x10) == 0 )
    {
      v21 = 0;
      if ( (v14 & 4) != 0 )
      {
        --right;
        v47 = top;
        v41.right = right;
        v46 = right;
        v49 = bottom - top;
        v21 = 1;
        v48 = 1;
        v50[0] = v20;
      }
      if ( (v14 & 8) != 0 )
      {
        v41.bottom = --bottom;
        v22 = 3LL * v21;
        *(&v46 + 2 * v22) = left;
        *(&v48 + 2 * v22) = right - left;
        ++v21;
        *(&v47 + 2 * v22) = bottom;
        *(&v49 + 2 * v22) = 1;
        v50[v22] = v20;
      }
      if ( (v14 & 1) != 0 )
      {
        v23 = v21++;
        v24 = 3 * v23;
        *(&v46 + 2 * v24) = left++;
        *(&v47 + 2 * v24) = top;
        v41.left = left;
        *(&v48 + 2 * v24) = 1;
        *(&v49 + 2 * v24) = bottom - top;
        v50[v24] = v19;
      }
      if ( (v14 & 2) != 0 )
      {
        v25 = v21++;
        v26 = 3 * v25;
        *(&v47 + 2 * v26) = top++;
        *(&v46 + 2 * v26) = left;
        v41.top = top;
        *(&v48 + 2 * v26) = right - left;
        *(&v49 + 2 * v26) = 1;
        v50[v26] = v19;
      }
      v38 = 0LL;
      v39 = 0;
      v40 = 0;
      XDCOBJ::vLockIgnoreAttributes((XDCOBJ *)&v38, v4);
      v27 = v38;
      if ( v38 )
      {
        if ( (*((_DWORD *)v38 + 11) & 2) == 0 )
        {
          if ( !v40 )
          {
            UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v38);
            if ( UserAttr && !DC::SaveAttributes(v38, UserAttr) )
            {
              _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
              v38 = 0LL;
              bottom = v41.bottom;
              v8 = 0;
              right = v41.right;
              top = v41.top;
              left = v41.left;
              goto LABEL_74;
            }
            v27 = v38;
          }
          *((_DWORD *)v27 + 11) |= 2u;
          v27 = v38;
          v39 = 1;
        }
        if ( (*((_DWORD *)v27 + 130) & 4) != 0 )
        {
          DC::vMarkTransformDirty(v27);
          v27 = v38;
        }
      }
      v8 = 0;
      if ( v27 )
      {
        v8 = GrePolyPatBltInternal(
               (struct XDCOBJ *)&v38,
               0xF00021u,
               (struct _POLYPATBLT *)&v46,
               v21,
               0,
               *(_DWORD *)(*((_QWORD *)v27 + 122) + 184LL),
               *(_DWORD *)(*((_QWORD *)v27 + 122) + 176LL),
               *(_DWORD *)(*((_QWORD *)v27 + 122) + 188LL),
               *(_DWORD *)(*((_QWORD *)v27 + 122) + 180LL));
LABEL_32:
        v29 = v38;
        if ( v38 )
        {
          if ( v39 && (*((_DWORD *)v38 + 11) & 2) != 0 )
          {
            if ( !v40 )
            {
              v30 = XDCOBJ::GetUserAttr((XDCOBJ *)&v38);
              v29 = v38;
              if ( v30 )
              {
                DC::RestoreAttributes(v38, v30);
                v29 = v38;
              }
            }
            *((_DWORD *)v29 + 11) &= ~2u;
            v39 = 0;
            v29 = v38;
          }
          v42 = 0;
          v31 = *(_QWORD *)v29;
          HmgDecrementExclusiveReferenceCountEx(v29, v40, &v42);
          if ( v42 )
            GrepDeleteDC(v31, 0x2000000LL);
        }
        v6 = v43;
        goto LABEL_42;
      }
LABEL_74:
      EngSetLastError(6u);
      goto LABEL_32;
    }
    v34 = DrawDiagonal(v4, &v41, v19, v20, v14);
    bottom = v41.bottom;
    v8 = v34;
    right = v41.right;
    top = v41.top;
    left = v41.left;
LABEL_42:
    v4 = v44;
LABEL_43:
    v15 = v6 & 0xC;
    if ( (v6 & 0xC) == 0 )
      break;
    v6 &= 0xFFFFFFF3;
    v43 = v6;
  }
  if ( (v14 & 0x800) != 0 )
  {
    if ( (v14 & 0x10) != 0 )
    {
      if ( (v14 & 0x8000) != 0 )
        v35 = *(HBRUSH *)(gpsi + 4736LL);
      else
        v35 = *(HBRUSH *)(gpsi + 4816LL);
      v36 = FillTriangle(v4, &v41, v35, v14);
    }
    else
    {
      if ( (v14 & 0x8000) != 0 )
        v37 = *(HBRUSH *)(gpsi + 4736LL);
      else
        v37 = *(HBRUSH *)(gpsi + 4816LL);
      v36 = FillRect(v4, &v41, v37);
    }
    v8 = v36;
  }
  if ( (v14 & 0x2000) != 0 )
    *v45 = v41;
  return v8;
}
