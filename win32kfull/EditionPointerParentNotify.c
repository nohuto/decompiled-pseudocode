__int64 __fastcall EditionPointerParentNotify(__int64 a1, void *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 80);
  v12[2] = 0LL;
  result = GetDesktopWindow(v3);
  if ( v3 != result )
  {
    result = *(_QWORD *)(v3 + 40);
    if ( (*(_BYTE *)(result + 24) & 4) == 0 )
    {
      v9 = gptiCurrent;
      v12[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v12;
      v12[1] = 0LL;
      do
      {
        LOBYTE(v9) = *(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0xC0;
        if ( (_BYTE)v9 != 64 )
          break;
        v3 = *(_QWORD *)(v3 + 104);
        ThreadLockExchange(v3, (__int64)v12);
        xxxSendPointerMessageWorker(v3, 528LL, a3, 0LL, 0LL, 177);
        v11 = SGDGetUserSessionState(v10);
      }
      while ( !CTouchProcessor::BreakEditionParentNotifyLoop(*(CTouchProcessor **)(v11 + 3424), a2) );
      return ThreadUnlock1(v9, v7, v8);
    }
  }
  return result;
}
