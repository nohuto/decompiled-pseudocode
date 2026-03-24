/*
 * XREFs of xxxCompositedPaint @ 0x1C023E5B0
 * Callers:
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C00537F0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00F55A0 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00675D0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069AF0 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069B4C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _GetProp @ 0x1C006B990 (_GetProp.c)
 *     xxxInternalInvalidate @ 0x1C0072580 (xxxInternalInvalidate.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     UpdateSprite @ 0x1C00BEA24 (UpdateSprite.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023E388 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  int v2; // esi
  const struct tagRECT *Prop; // rax
  const struct tagRECT *v4; // rbx
  struct tagRECT *v5; // r14
  BOOL v6; // eax
  int v7; // edi
  __int64 EmptyRgnPublic; // rax
  HRGN v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  _DWORD *v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rsi
  HDC DCEx; // rdi
  struct tagSIZE v17; // [rsp+98h] [rbp+10h] BYREF
  struct tagPOINT v18; // [rsp+A0h] [rbp+18h] BYREF
  char v19; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, (__int64)a1, 0xB10u, 1);
  v2 = xxxCompositedTraverse(a1);
  SetOrClrWF(0, (__int64)a1, 0xB10u, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v19);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1LL);
  v4 = Prop;
  if ( Prop )
  {
    v5 = (struct tagRECT *)&Prop[1];
    v6 = IsRectEmptyInl(Prop + 1);
    v7 = v6;
    if ( !v2 && !v6 )
    {
      EmptyRgnPublic = *(_QWORD *)&v4[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(), (*(_QWORD *)&v4[2].right = EmptyRgnPublic) != 0LL) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v5);
          GreCombineRgn(*(_QWORD *)&v4[2].right, *(_QWORD *)&v4[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v4[2].right = 1LL;
      }
      v7 = 1;
      *v5 = 0LL;
    }
    v9 = *(HRGN *)&v4[2].right;
    if ( v9 )
    {
      xxxInternalInvalidate(a1, v9, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v4[2].right);
      *(_QWORD *)&v4[2].right = 0LL;
    }
    if ( !v7 )
    {
      v10 = *(_QWORD *)&v4->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v18 = 0LL;
        v11 = GreSelectBitmap(*(_QWORD *)ghdcMem, v10);
        v12 = (_DWORD *)*((_QWORD *)a1 + 5);
        v13 = v11;
        v17.cx = v12[24] - v12[22];
        v17.cy = v12[25] - v12[23];
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 40LL),
          a1,
          (__int64)v12,
          0LL,
          0LL,
          &v17,
          *(HDC *)ghdcMem,
          &v18,
          0,
          0LL,
          0x40000000u,
          v5);
        v14 = v13;
      }
      else
      {
        v15 = GreSelectBitmap(*(_QWORD *)ghdcMem, v10);
        SetOrClrWF(0, (__int64)a1, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v5->left,
          v5->top,
          v5->right - v5->left,
          v5->bottom - v5->top,
          *(HDC *)ghdcMem,
          v5->left,
          v5->top,
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, (__int64)a1, 0xB20u, 1);
        v14 = v15;
      }
      GreSelectBitmap(*(_QWORD *)ghdcMem, v14);
      *v5 = 0LL;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v19);
}
