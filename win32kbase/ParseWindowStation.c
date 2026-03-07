__int64 __fastcall ParseWindowStation(__int64 a1)
{
  void *v1; // rdi
  __int64 v3; // rcx
  _WORD *v5; // rax
  int v6; // r9d
  POBJECT_TYPE *v7; // rdx

  v1 = *(void **)a1;
  **(_QWORD **)(a1 + 64) = 0LL;
  v3 = *(_QWORD *)(a1 + 40);
  if ( *(_WORD *)v3 )
  {
    v5 = *(_WORD **)(v3 + 8);
    if ( *v5 == 92 )
    {
      *(_QWORD *)(v3 + 8) = v5 + 1;
      **(_WORD **)(a1 + 40) -= 2;
      *(_WORD *)(*(_QWORD *)(a1 + 40) + 2LL) -= 2;
    }
    if ( wcschr(*(const wchar_t **)(*(_QWORD *)(a1 + 40) + 8LL), 0x5Cu) )
      return 3221225529LL;
    v7 = *(POBJECT_TYPE **)(a1 + 8);
    if ( v7 == ExDesktopObjectType )
    {
      LOBYTE(v6) = *(_BYTE *)(a1 + 24);
      return ApiSetEditionParseDesktop(
               *(_QWORD *)a1,
               (_DWORD)v7,
               *(_QWORD *)(a1 + 16),
               v6,
               *(_DWORD *)(a1 + 28),
               *(_QWORD *)(a1 + 32),
               *(_QWORD *)(a1 + 40),
               *(_QWORD *)(a1 + 48),
               *(_QWORD *)(a1 + 56),
               *(_QWORD *)(a1 + 64));
    }
  }
  else if ( *(_QWORD *)(a1 + 8) == ExWindowStationObjectType )
  {
    ObfReferenceObject(v1);
    **(_QWORD **)(a1 + 64) = v1;
    return 0LL;
  }
  return 3221225508LL;
}
