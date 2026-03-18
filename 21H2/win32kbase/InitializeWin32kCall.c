/*
 * XREFs of InitializeWin32kCall @ 0x1C00AB8EC
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1C02E4310 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ?ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z @ 0x1C00AB99C (-ResolveApiSetHost@@YAJPEAU_Win32kApiSet@@PEAX@Z.c)
 *     ?SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z @ 0x1C00ABEB0 (-SetWin32kSilo@@YAPEAU_EJOB@@AEAPEAX@Z.c)
 */

__int64 __fastcall InitializeWin32kCall(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  __int64 CurrentProcess; // rax
  int v6; // edi
  struct _EJOB *v7; // rsi
  wchar_t ***v8; // rbx
  void *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2, a3, a4);
  v10 = *(void **)(PsGetProcessPeb(CurrentProcess) + 104);
  v6 = 0;
  v7 = SetWin32kSilo(&v10);
  if ( off_1C028D758 )
  {
    v8 = &off_1C028D758;
    do
    {
      v4 = ResolveApiSetHost((struct _Win32kApiSet *)(&Win32kApiSetTable + 3 * v6), v10);
      if ( v4 < 0 )
        break;
      v8 += 3;
      ++v6;
    }
    while ( *v8 );
  }
  if ( v7 )
    PsDetachSiloFromCurrentThread(v7);
  return (unsigned int)v4;
}
