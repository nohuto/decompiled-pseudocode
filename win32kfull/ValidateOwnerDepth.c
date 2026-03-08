/*
 * XREFs of ValidateOwnerDepth @ 0x1C00DDC94
 * Callers:
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateOwnerDepth(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  bool v6; // cf
  bool v7; // zf

  v2 = 1;
  v3 = 0;
  while ( a2 )
  {
    if ( a2 == a1 )
      return 0LL;
    a2 = *(_QWORD *)(a2 + 120);
    ++v2;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v6 = v2 < gNestedWindowLimit;
  v7 = v2 == gNestedWindowLimit;
  if ( v2 <= gNestedWindowLimit )
  {
    if ( v2 > *(_DWORD *)(v5 + 1092) )
      *(_DWORD *)(v5 + 1092) = v2;
    v6 = v2 < gNestedWindowLimit;
    v7 = v2 == gNestedWindowLimit;
  }
  LOBYTE(v3) = v6 || v7;
  return v3;
}
