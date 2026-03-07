__int64 __fastcall DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(DDAMetaData *this)
{
  __int64 v2; // rax
  bool v3; // zf
  struct tagRECT *DirtyRectData; // rax
  int v5; // esi
  LONG *i; // rdi
  unsigned int v7; // ebp

  *((_QWORD *)this + 8) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(
                            0LL,
                            0LL,
                            0LL,
                            0LL);
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 7) + 80LL))(0LL, 0LL, 0LL, 0LL);
  v3 = *((_QWORD *)this + 8) == 0LL;
  *((_QWORD *)this + 9) = v2;
  if ( !v3 && v2 )
  {
    DirtyRectData = DDAMetaData::GetDirtyRectData(this, *((_DWORD *)this + 6));
    v5 = 0;
    if ( !*((_DWORD *)this + 6) )
      return 1LL;
    for ( i = &DirtyRectData->right; ; i += 4 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
             *((_QWORD *)this + 9),
             (unsigned int)*(i - 2),
             (unsigned int)*(i - 1),
             (unsigned int)*i,
             i[1]);
      if ( !v7 )
        break;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 8),
              *((_QWORD *)this + 9),
              2LL) )
      {
        WdLogSingleEntry1(2LL, 639LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to combine current dirty rect with dirty region",
          639LL,
          0LL,
          0LL,
          0LL,
          0LL);
        return v7;
      }
      if ( (unsigned int)++v5 >= *((_DWORD *)this + 6) )
        return 1LL;
    }
    WdLogSingleEntry1(2LL, 633LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to set tmp region to current dirty rect",
      633LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return 0LL;
}
