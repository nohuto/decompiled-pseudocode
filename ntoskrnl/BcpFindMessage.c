/*
 * XREFs of BcpFindMessage @ 0x140B99148
 * Callers:
 *     BcpGetProgressMessages @ 0x1403811E0 (BcpGetProgressMessages.c)
 *     BgpBcInitializeCriticalMode @ 0x140B991D4 (BgpBcInitializeCriticalMode.c)
 * Callees:
 *     ResFwFindMessage @ 0x140AEA0A8 (ResFwFindMessage.c)
 */

unsigned __int16 *__fastcall BcpFindMessage(unsigned int a1)
{
  unsigned __int16 *result; // rax
  unsigned int v3; // r8d
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned __int16 v6; // dx
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx

  if ( a1 != 1090551832 || (result = Dst) == 0LL )
  {
    result = ResFwFindMessage(a1);
    if ( !result )
    {
      if ( a1 > 0x41008018 )
      {
        switch ( a1 )
        {
          case 0x41008019u:
            return L"Please release the power button.";
          case 0x41008020u:
            return L"We just need a few more seconds to shut down.";
          case 0x41008021u:
            return L"It is now safe to power off the system.";
          case 0xC1008001:
            return L"Your device ran into a problem and needs to restart.";
          case 0xC1008003:
            return L"If you call a support person, give them this info:";
          case 0xC1008008:
            return L"We're just collecting some error info, and then we'll restart for you.";
          case 0xC1008012:
          case 0xC1008013:
            return L"%1% complete";
        }
      }
      else
      {
        if ( a1 == 1090551832 )
          return L"https://www.windows.com/stopcode";
        v8 = a1 - 1090551814;
        if ( !v8 )
          return L"1";
        v9 = v8 - 3;
        if ( !v9 )
          return L"We're just collecting some error info, and then you can restart.";
        v10 = v9 - 7;
        if ( !v10 )
          return L"We'll restart for you.";
        v11 = v10 - 1;
        if ( !v11 )
          return L"You can restart.";
        v12 = v11 - 3;
        if ( !v12 )
          return L"What failed:";
        v13 = v12 - 1;
        if ( !v13 )
          return L"Stop Code:";
        v14 = v13 - 1;
        if ( !v14 )
          return L"For more information about this issue and possible fixes, visit ";
        if ( v14 == 1 )
          return L"Your Windows Insider Build ran into a problem and needs to restart.";
      }
      return 0LL;
    }
    v3 = 0;
    v4 = -1LL;
    do
      ++v4;
    while ( result[v4] );
    if ( v4 )
    {
      v5 = 0LL;
      do
      {
        v6 = result[v5];
        if ( v6 == 13 || v6 == 10 )
          result[v5] = 0;
        ++v3;
        v7 = -1LL;
        v5 = v3;
        do
          ++v7;
        while ( result[v7] );
      }
      while ( v3 < v7 );
    }
  }
  return result;
}
