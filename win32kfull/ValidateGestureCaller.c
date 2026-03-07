__int64 __fastcall ValidateGestureCaller(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  v3 = *(_QWORD *)(a1 + 456);
  if ( v3 == grpdeskRitInput && v3 == *(_QWORD *)(a2 + 24) )
  {
    if ( (unsigned __int8)CheckAccess(*(_QWORD *)(a1 + 424) + 864LL, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL) + 864LL) )
      return 1LL;
    UserSetLastError(5);
    EtwTraceUIPIMsgError(*(_QWORD *)(a1 + 424), *(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL), 281LL, 0LL, 0LL);
  }
  else
  {
    UserSetLastError(5);
  }
  return 0LL;
}
