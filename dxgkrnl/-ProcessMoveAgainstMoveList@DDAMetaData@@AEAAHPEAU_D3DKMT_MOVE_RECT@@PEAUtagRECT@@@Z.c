__int64 __fastcall DDAMetaData::ProcessMoveAgainstMoveList(
        DDAMetaData *this,
        struct _D3DKMT_MOVE_RECT *a2,
        struct tagRECT *a3)
{
  unsigned int v5; // ebp
  UINT *v6; // rsi
  RECT *p_DestRect; // r15
  int v8; // ecx
  UINT v9; // edx
  int v10; // ecx
  int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r13d
  __int64 v15; // r8
  int v16; // eax
  struct tagRECT *v17; // rdx
  __int64 v18; // rbx
  const wchar_t *v19; // r9
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  struct _D3DKMT_PRESENT_RGNS v24; // [rsp+50h] [rbp-48h] BYREF

  v5 = 0;
  v6 = (UINT *)**((_QWORD **)this + 6);
  if ( *((_DWORD *)this + 11) )
  {
    p_DestRect = &a2->DestRect;
    while ( 1 )
    {
      v8 = *v6 + v6[4] - v6[2];
      v24.DirtyRectCount = *v6;
      v9 = v6[1];
      LODWORD(v24.pDirtyRects) = v8;
      v10 = v6[5] - v6[3];
      *(&v24.DirtyRectCount + 1) = v9;
      HIDWORD(v24.pDirtyRects) = v9 + v10;
      v11 = RectsOverlap(p_DestRect, v6 + 2, 0LL);
      v14 = RectsOverlap(v12, &v24, v13);
      v16 = RectsOverlap(a3, v6 + 2, v15);
      if ( v11 || v14 || v16 )
        break;
      ++v5;
      v6 += 6;
      if ( v5 >= *((_DWORD *)this + 11) )
        goto LABEL_7;
    }
    if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, v17) )
    {
      v18 = 900LL;
      WdLogSingleEntry1(2LL, 900LL);
      v19 = L"Failed to add existing move to dirty list";
      goto LABEL_11;
    }
    v21 = (__int64 *)*((_QWORD *)this + 6);
    *(_QWORD *)&v24.DirtyRectCount = 1LL;
    v24.pDirtyRects = p_DestRect;
    v22 = *v21;
    v23 = (unsigned int)--*((_DWORD *)this + 11);
    *(_OWORD *)v6 = *(_OWORD *)(v22 + 24 * v23);
    *((_QWORD *)v6 + 2) = *(_QWORD *)(v22 + 24 * v23 + 16);
    *(_OWORD *)&v24.MoveRectCount = 0LL;
    if ( !(unsigned int)DDAMetaData::ProcessNewDirtyRects(this, &v24) )
    {
      v18 = 908LL;
      WdLogSingleEntry1(2LL, 908LL);
      v19 = L"Failed to add new move to dirty list";
      goto LABEL_11;
    }
  }
  else
  {
LABEL_7:
    if ( !(unsigned int)DDAMetaData::AddToMoveList(this, a2) )
    {
      v18 = 925LL;
      WdLogSingleEntry1(2LL, 925LL);
      v19 = L"Failed to add new to move list";
LABEL_11:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v19, v18, 0LL, 0LL, 0LL, 0LL);
      return 0LL;
    }
  }
  return 1LL;
}
