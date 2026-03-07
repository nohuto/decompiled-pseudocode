void __fastcall WinlogonWinSpaceCallback(__int64 a1)
{
  __int64 v1; // rdx

  switch ( a1 )
  {
    case -11LL:
      v1 = 14LL;
      break;
    case -10LL:
      v1 = 12LL;
      break;
    case -9LL:
      v1 = 10LL;
      break;
    case -8LL:
      v1 = 8LL;
      break;
    default:
      return;
  }
  PostShellHookMessagesEx(0x38u, v1, 0LL);
}
