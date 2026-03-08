/*
 * XREFs of InternalGetClipboardMetadata @ 0x1C02004BC
 * Callers:
 *     NtUserGetClipboardMetadata @ 0x1C01D1AF0 (NtUserGetClipboardMetadata.c)
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0012468 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C00BD7B8 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall InternalGetClipboardMetadata(__int64 a1, _DWORD *a2)
{
  unsigned int v3; // esi
  int v4; // ecx
  __int64 result; // rax
  struct tagWINDOWSTATION *v6; // rax
  int v7; // ebx
  struct tagCLIP *ClipFormat; // rax
  __int64 v9; // rcx
  int v10; // eax

  v3 = a1;
  if ( *a2 != 1 )
  {
    v4 = 87;
LABEL_3:
    UserSetLastError(v4);
    return 0LL;
  }
  v6 = CheckClipboardAccess(a1);
  v7 = 0;
  if ( !v6 )
  {
    v4 = 5;
    goto LABEL_3;
  }
  ClipFormat = FindClipFormat(v6, v3, 1);
  if ( !ClipFormat )
  {
    v4 = 1168;
    goto LABEL_3;
  }
  v9 = *((_QWORD *)ClipFormat + 1);
  if ( !v9 || (v10 = 0, v9 == 3) )
    v10 = 1;
  a2[1] = v10;
  result = 1LL;
  LOBYTE(v7) = (unsigned __int64)(v9 - 1) <= 3;
  a2[2] = v7;
  return result;
}
