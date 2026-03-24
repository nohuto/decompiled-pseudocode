/*
 * XREFs of ?CheckClipboardAccessForIntegrityLevel@@YAHUtagUIPI_INFO@@0@Z @ 0x1C003013C
 * Callers:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C002F970 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00300BC (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     NtUserGetUpdatedClipboardFormats @ 0x1C01FBD90 (NtUserGetUpdatedClipboardFormats.c)
 *     _GetPriorityClipboardFormat @ 0x1C021F268 (_GetPriorityClipboardFormat.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckClipboardAccessForIntegrityLevel(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r8d
  unsigned int *v3; // r9
  __int64 v4; // rdx
  int v5; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF
  int v9; // [rsp+44h] [rbp+1Ch]

  v7 = a2;
  v2 = 0;
  v3 = (unsigned int *)&unk_1C032A048;
  do
  {
    if ( a1 >= *v3 && a1 < *((_DWORD *)&gaClipILDef + 6 * v2 + 8) )
      break;
    ++v2;
    v3 += 6;
  }
  while ( v2 < 5 );
  if ( v2 > 4 )
  {
LABEL_10:
    v8 = dword_1C032A0C0;
    v5 = dword_1C032A0C4;
  }
  else
  {
    while ( 1 )
    {
      v4 = v2 + 1;
      if ( *((_DWORD *)&gaClipILDef + 6 * v4 + 5) )
        break;
      ++v2;
      if ( (unsigned int)v4 >= 5 )
        goto LABEL_10;
    }
    v8 = *((_DWORD *)&gaClipILDef + 6 * v2 + 2);
    v5 = *((_DWORD *)&gaClipILDef + 6 * v2 + 3);
  }
  v9 = v5;
  return (unsigned __int8)CheckAccess(&v8, &v7);
}
