/*
 * XREFs of ValidateParentDepth @ 0x1C0039CD8
 * Callers:
 *     ValidateNewParent @ 0x1C0039AAC (ValidateNewParent.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 */

__int64 __fastcall ValidateParentDepth(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *v3; // r8
  unsigned int i; // r9d
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx
  unsigned int v7; // edi
  __int64 CurrentProcessWin32Process; // rax
  bool v9; // cf
  bool v10; // zf
  _QWORD *v12; // rax
  unsigned int v13; // eax

  v2 = 0;
  v3 = a1;
  for ( i = 1; a2; ++i )
  {
    DesktopWindow = GetDesktopWindow(a2, a2);
    if ( v6 == DesktopWindow )
      break;
    a2 = *(_QWORD *)(v6 + 104);
  }
  v7 = i;
  if ( v3 && v3[14] )
  {
    a1 = v3;
    while ( 1 )
    {
      while ( v3[14] )
      {
        v3 = (_QWORD *)v3[14];
        ++i;
      }
      v12 = (_QWORD *)v3[11];
      if ( !v12 )
        break;
LABEL_22:
      v3 = v12;
    }
    v13 = i;
    if ( i <= v7 )
      v13 = v7;
    v7 = v13;
    while ( 1 )
    {
      v3 = (_QWORD *)v3[13];
      --i;
      if ( v3 == a1 )
        break;
      v12 = (_QWORD *)v3[11];
      if ( v12 )
        goto LABEL_22;
    }
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v9 = v7 < gNestedWindowLimit;
  v10 = v7 == gNestedWindowLimit;
  if ( v7 <= gNestedWindowLimit )
  {
    if ( v7 > *(_DWORD *)(CurrentProcessWin32Process + 1088) )
      *(_DWORD *)(CurrentProcessWin32Process + 1088) = v7;
    v9 = v7 < gNestedWindowLimit;
    v10 = v7 == gNestedWindowLimit;
  }
  LOBYTE(v2) = v9 || v10;
  return v2;
}
