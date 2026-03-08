/*
 * XREFs of InitializeWin32kCall @ 0x1C00E255C
 * Callers:
 *     EditionBaseDriverEntryInitialize @ 0x1C00E24D0 (EditionBaseDriverEntryInitialize.c)
 * Callees:
 *     ?SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z @ 0x1C00E260C (-SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z.c)
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x1C00E2644 (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 */

__int64 __fastcall InitializeWin32kCall(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 CurrentProcess; // rax
  int v5; // edi
  struct _EJOB *v6; // rsi
  wchar_t ***v7; // rbx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3);
  v9 = *(void **)(PsGetProcessPeb(CurrentProcess) + 104);
  v5 = 0;
  v6 = SetWin32kSilo(&v9);
  if ( off_1C03571C8 )
  {
    v7 = &off_1C03571C8;
    do
    {
      v3 = ResolveApiSetHost((struct _Win32kApiSet *)&(&Win32kApiSetTable)[3 * v5], v9);
      if ( v3 < 0 )
        break;
      v7 += 3;
      ++v5;
    }
    while ( *v7 );
  }
  if ( v6 )
    PsDetachSiloFromCurrentThread(v6);
  return (unsigned int)v3;
}
