__int64 __fastcall DDAMetaData::DoesRectOverlapWithExistingDirty(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v6; // esi
  struct tagRECT *DirtyRectData; // rdx
  __int64 result; // rax
  struct tagRECT *v9; // rdx
  const wchar_t *v10; // r9
  int v11; // eax

  if ( *(_QWORD *)(a1 + 64) )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, unsigned int))(*(_QWORD *)(a1 + 56) + 96LL))(
           *(_QWORD *)(a1 + 72),
           *a2,
           a2[1],
           a2[2],
           a2[3]) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)(a1 + 56) + 104LL))(
              *(_QWORD *)(a1 + 72),
              *(_QWORD *)(a1 + 72),
              *(_QWORD *)(a1 + 64),
              1LL);
      if ( v11 )
        return v11 != 1 ? 3 : 0;
      WdLogSingleEntry1(2LL, a2);
      v10 = L"Failed to combine Gdi region to rect 0x%I64x";
    }
    else
    {
      WdLogSingleEntry1(2LL, a2);
      v10 = L"Failed to set Gdi region to rect 0x%I64x";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, (__int64)a2, 0LL, 0LL, 0LL, 0LL);
    return 3LL;
  }
  v6 = 0;
  DirtyRectData = DDAMetaData::GetDirtyRectData((DDAMetaData *)a1, *(_DWORD *)(a1 + 24));
  if ( !*(_DWORD *)(a1 + 24) )
    return 0LL;
  while ( 1 )
  {
    result = RectsOverlap(a2, DirtyRectData, a3);
    if ( (_DWORD)result )
      break;
    ++v6;
    DirtyRectData = v9 + 1;
    if ( v6 >= *(_DWORD *)(a1 + 24) )
      return 0LL;
  }
  return result;
}
