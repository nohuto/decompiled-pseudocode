bool __fastcall CHitTestContext::InteractionMatchesHitTest(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  char v6; // bl

  if ( (_DWORD)a2 != 4 )
    return (unsigned int)(a2 - 5) > 1
        || (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)(a3 + 64) + 88LL))(
             a3 + 64,
             a2,
             *(unsigned int *)(a1 + 100),
             0LL) != 0;
  v5 = *(unsigned int *)(a1 + 104);
  v6 = 0;
  if ( !(_DWORD)v5
    || (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(a3 + 64) + 88LL))(
         a3 + 64,
         4LL,
         v5,
         0LL) )
  {
    return 1;
  }
  return v6;
}
