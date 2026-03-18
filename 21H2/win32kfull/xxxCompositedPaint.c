/*
 * XREFs of xxxCompositedPaint @ 0x1C0239C94
 * Callers:
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x1C00490FC (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     ?xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z @ 0x1C005CAB0 (-xxxInternalDoPaint@@YAPEAUtagWND@@PEAU1@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     UpdateSprite @ 0x1C0020D60 (UpdateSprite.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     xxxInternalInvalidate @ 0x1C004A420 (xxxInternalInvalidate.c)
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007B728 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C016E026 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall xxxCompositedPaint(struct tagWND *a1)
{
  int v2; // esi
  const struct tagRECT *Prop; // rax
  HRGN v4; // rdx
  __int64 v5; // r8
  const struct tagRECT *v6; // rbx
  struct tagRECT *v7; // r14
  BOOL v8; // eax
  int v9; // edi
  __int64 EmptyRgnPublic; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rsi
  HDC DCEx; // rdi
  char v18; // [rsp+98h] [rbp+10h] BYREF
  struct tagSIZE v19; // [rsp+A0h] [rbp+18h] BYREF
  struct tagPOINT v20; // [rsp+A8h] [rbp+20h] BYREF

  SetOrClrWF(1, a1, 0xB10u, 1);
  v2 = xxxCompositedTraverse(a1);
  SetOrClrWF(0, a1, 0xB10u, 1);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  Prop = (const struct tagRECT *)GetProp((__int64)a1, (unsigned __int16)atomLayer, 1u);
  v6 = Prop;
  if ( Prop )
  {
    v7 = (struct tagRECT *)&Prop[1];
    v8 = IsRectEmptyInl(Prop + 1);
    v9 = v8;
    if ( !v2 && !v8 )
    {
      EmptyRgnPublic = *(_QWORD *)&v6[2].right;
      if ( EmptyRgnPublic
        || (EmptyRgnPublic = CreateEmptyRgnPublic(), (*(_QWORD *)&v6[2].right = EmptyRgnPublic) != 0LL) )
      {
        if ( EmptyRgnPublic != 1 )
        {
          SetRectRgnIndirect(ghrgnInv2, v7);
          GreCombineRgn(*(_QWORD *)&v6[2].right, *(_QWORD *)&v6[2].right, ghrgnInv2, 2LL);
        }
      }
      else
      {
        *(_QWORD *)&v6[2].right = 1LL;
      }
      v9 = 1;
      *v7 = 0LL;
    }
    v4 = *(HRGN *)&v6[2].right;
    if ( v4 )
    {
      xxxInternalInvalidate(a1, v4, 0x485u);
      DeleteMaybeSpecialRgn(*(_QWORD *)&v6[2].right);
      *(_QWORD *)&v6[2].right = 0LL;
    }
    if ( !v9 )
    {
      v11 = *(_QWORD *)&v6->left;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v20 = 0LL;
        v12 = GreSelectBitmap(ghdcMem, v11);
        v13 = (_DWORD *)*((_QWORD *)a1 + 5);
        v14 = v12;
        v19.cx = v13[24] - v13[22];
        v19.cy = v13[25] - v13[23];
        UpdateSprite(
          *(HDEV *)(gpDispInfo + 40LL),
          a1,
          (__int64)v13,
          0LL,
          0LL,
          &v19,
          ghdcMem,
          &v20,
          0,
          0LL,
          0x40000000u,
          v7);
        v15 = v14;
      }
      else
      {
        v16 = GreSelectBitmap(ghdcMem, v11);
        SetOrClrWF(0, a1, 0xB20u, 1);
        DCEx = (HDC)_GetDCEx(a1, 0LL, 1073807363LL);
        NtGdiBitBltInternal(
          DCEx,
          v7->left,
          v7->top,
          v7->right - v7->left,
          v7->bottom - v7->top,
          ghdcMem,
          v7->left,
          v7->top,
          13369376,
          0,
          0);
        _ReleaseDC(DCEx);
        SetOrClrWF(1, a1, 0xB20u, 1);
        v15 = v16;
      }
      GreSelectBitmap(ghdcMem, v15);
      *v7 = 0LL;
    }
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, (__int64)v4, v5);
}
