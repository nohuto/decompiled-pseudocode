/*
 * XREFs of InitializeWin32kCall @ 0x1C009C580
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C029A770 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x1C009C630 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 *     ?SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z @ 0x1C009CBC8 (-SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z.c)
 */

__int64 __fastcall InitializeWin32kCall(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 CurrentProcess; // rax
  int v4; // edi
  struct _EJOB *v5; // rsi
  wchar_t ***v6; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v8 = *(void **)(PsGetProcessPeb(CurrentProcess) + 104);
  v4 = 0;
  v5 = SetWin32kSilo(&v8);
  if ( off_1C02492D8 )
  {
    v6 = &off_1C02492D8;
    do
    {
      v2 = ResolveApiSetHost((struct _Win32kApiSet *)(&Win32kApiSetTable + 2 * v4), v8);
      if ( v2 < 0 )
        break;
      v6 += 2;
      ++v4;
    }
    while ( *v6 );
  }
  if ( v5 )
    PsDetachSiloFromCurrentThread(v5);
  return (unsigned int)v2;
}
