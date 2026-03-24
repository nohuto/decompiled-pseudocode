/*
 * XREFs of ?SearchIconCache@@YAPEAUtagCURSOR@@PEAU1@GPEAU_UNICODE_STRING@@0PEAUtagCURSORFIND@@@Z @ 0x1C0049AF0
 * Callers:
 *     ?_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z @ 0x1C0049A50 (-_FindExistingCursorIcon@@YAPEAUtagCURSOR@@GPEAU_UNICODE_STRING@@PEAU1@PEAUtagCURSORFIND@@@Z.c)
 * Callees:
 *     ?ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z @ 0x1C0049BCC (-ResStrCmp@@YAHPEAU_UNICODE_STRING@@0@Z.c)
 */

struct tagCURSOR *__fastcall SearchIconCache(
        struct tagCURSOR *a1,
        __int16 a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSOR *a4,
        struct tagCURSORFIND *a5)
{
  struct tagCURSOR *v8; // rbx
  int v10; // eax
  int v11; // ecx
  int v12; // eax

  v8 = a1;
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    if ( a4 && v8 == a4 )
      return a4;
    if ( a2 == *((_WORD *)v8 + 36)
      && (*((_DWORD *)v8 + 20) & 0x1004) == 4
      && *((_WORD *)v8 + 37) == *((_WORD *)a5 + 4)
      && (unsigned int)ResStrCmp(a3, (struct _UNICODE_STRING *)((char *)v8 + 56)) )
    {
      if ( (*((_DWORD *)v8 + 20) & 8) != 0 )
        break;
      v10 = *((_DWORD *)a5 + 3);
      if ( !v10 || *((_DWORD *)v8 + 35) == v10 )
      {
        v11 = *((_DWORD *)a5 + 4);
        if ( !v11 || *((_DWORD *)v8 + 36) >> 1 == v11 )
        {
          v12 = *((_DWORD *)a5 + 5);
          if ( !v12 || *((_DWORD *)v8 + 34) == v12 )
            break;
        }
      }
    }
    v8 = (struct tagCURSOR *)*((_QWORD *)v8 + 4);
    if ( !v8 )
      return 0LL;
  }
  return v8;
}
