__int64 __fastcall HotKeyToWindow(__int64 a1)
{
  int v1; // ebx
  __int64 i; // rdx

  v1 = a1;
  for ( i = *(_QWORD *)(SGDGetUserSessionState(a1) + 12720); ; i = *(_QWORD *)(i + 16) )
  {
    if ( !i )
      return 0LL;
    if ( *(_DWORD *)(i + 8) == v1 )
      break;
  }
  return *(_QWORD *)i & -(__int64)((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)i + 40LL) + 31LL) & 0x10) != 0);
}
