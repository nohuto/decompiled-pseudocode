__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rdi
  int DoesRectOverlapWithExistingDirty; // eax
  __int64 v5; // rdi
  const wchar_t *v6; // r9
  unsigned int v8; // r14d
  __int128 v9; // [rsp+50h] [rbp-38h] BYREF

  v2 = a2;
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    WdLogSingleEntry1(1LL, 741LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DWM is passing in a NULL rect, DWM needs to investigate!!",
      741LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v9 = 0LL;
    while ( !*((_QWORD *)this + 8) )
    {
      DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(
                                           (__int64)this,
                                           (unsigned int *)v2,
                                           (__int64)&v9);
      switch ( DoesRectOverlapWithExistingDirty )
      {
        case 1:
          return 1LL;
        case 2:
          v2 = (struct tagRECT *)&v9;
          break;
        case 3:
          if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
          {
            v5 = 778LL;
            WdLogSingleEntry1(2LL, 778LL);
            v6 = L"Failed to convert dirty rects to GDI region";
LABEL_11:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v6, v5, 0LL, 0LL, 0LL, 0LL);
            return 0LL;
          }
          break;
        default:
          if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, v2) )
          {
            v5 = 793LL;
            WdLogSingleEntry1(2LL, 793LL);
            v6 = L"Failed to process dirty against move list";
            goto LABEL_11;
          }
          return 1LL;
      }
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
           *((_QWORD *)this + 9),
           (unsigned int)v2->left,
           (unsigned int)v2->top,
           (unsigned int)v2->right,
           v2->bottom);
    if ( !v8 )
    {
      v5 = 804LL;
      WdLogSingleEntry1(2LL, 804LL);
      v6 = L"Failed to set tmp region to current dirty rect";
      goto LABEL_11;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 9),
            2LL) )
    {
      WdLogSingleEntry1(2LL, 810LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to combine move rect with dirty region",
        810LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return v8;
    }
  }
  return 1LL;
}
