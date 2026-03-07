__int64 __fastcall HmgModifyHandleType(__int64 a1)
{
  unsigned int v2; // edi
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r14
  struct _ENTRY *Entry; // rbp
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int EtwGdiHandleType; // eax
  __int64 result; // rax

  v2 = (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000;
  v3 = *(GdiHandleManager **)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v4 = GdiHandleManager::DecodeIndex(v3, v2);
  v5 = *((_QWORD *)v3 + 2);
  Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v5, v4, 0);
  v7 = GdiHandleManager::DecodeIndex(v3, v2);
  v9 = 0LL;
  v10 = *(_DWORD *)(v5 + 2056);
  v11 = v7;
  v12 = v10 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16);
  if ( v7 < (unsigned int)v12 )
  {
    v8 = 1LL;
    if ( v7 >= v10 )
      v12 = ((v7 - v10) >> 16) + 1;
    else
      v12 = 0LL;
    v13 = *(_QWORD *)(v5 + 8LL * (unsigned int)v12 + 8);
    if ( (_DWORD)v12 )
    {
      v8 = ((1 - (_DWORD)v12) << 16) - v10;
      v11 = (unsigned int)(v8 + v11);
    }
    if ( (unsigned int)v11 < *(_DWORD *)(v13 + 20) )
    {
      v8 = (unsigned __int64)(unsigned int)v11 >> 8;
      v12 = 2LL * (unsigned __int8)v11;
      v9 = *(_QWORD **)(*(_QWORD *)(**(_QWORD **)(v13 + 24) + 8 * v8) + 16LL * (unsigned __int8)v11 + 8);
    }
  }
  LOBYTE(v12) = *((_BYTE *)Entry + 14);
  EtwGdiHandleType = GetEtwGdiHandleType(v12, v8, v11);
  EtwTraceGdiTransformHandle(*v9, a1, EtwGdiHandleType);
  *((_WORD *)Entry + 6) = WORD1(a1);
  result = a1;
  *v9 = a1;
  return result;
}
