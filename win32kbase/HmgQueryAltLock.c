__int64 __fastcall HmgQueryAltLock(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // r11
  __int64 v5; // r8
  unsigned int v6; // r9d
  unsigned int v7; // r10d
  unsigned int v8; // ecx
  __int64 v9; // rax

  v1 = a1;
  v2 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 24) + 8008LL);
  v3 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)v2, (unsigned __int16)v1 | (v1 >> 8) & 0xFF0000);
  v4 = *(_QWORD *)(v2 + 16);
  v5 = 0LL;
  v6 = v3;
  v7 = *(_DWORD *)(v4 + 2056);
  if ( v3 < v7 + ((*(unsigned __int16 *)(v4 + 2) + 0xFFFF) << 16) )
  {
    if ( v3 >= v7 )
      v8 = ((v3 - v7) >> 16) + 1;
    else
      v8 = 0;
    v9 = *(_QWORD *)(v4 + 8LL * v8 + 8);
    if ( v8 )
      v6 += ((1 - v8) << 16) - v7;
    if ( v6 < *(_DWORD *)(v9 + 20) )
      v5 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v6 >> 8))
                     + 16LL * (unsigned __int8)v6
                     + 8);
  }
  return *(unsigned int *)(v5 + 8);
}
