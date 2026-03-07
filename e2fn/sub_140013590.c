__int64 __fastcall sub_140013590(__int64 a1, _DWORD *a2)
{
  _DWORD *v4; // rax
  int v5; // r9d
  int v6; // edx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax

  v4 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 144) + 8LL))(*(_QWORD *)(a1 + 144));
  v5 = *(_DWORD *)(a1 - 24);
  v6 = *(_DWORD *)(a1 - 8);
  v7 = v5 & (unsigned int)(*v4 - 1);
  if ( (_DWORD)v7 == v6 )
  {
LABEL_5:
    _InterlockedIncrement64((volatile signed __int64 *)(a1 + 128));
    return 3221225473LL;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 64);
    while ( *(_DWORD *)(v8 + 8 * v7 + 4) != 1 )
    {
      v7 = v5 & (unsigned int)(v7 - 1);
      if ( (_DWORD)v7 == v6 )
        goto LABEL_5;
    }
    *a2 = *(_DWORD *)(v8 + 8 * v7);
    result = 0LL;
    *(_DWORD *)(a1 - 12) = v7;
  }
  return result;
}
