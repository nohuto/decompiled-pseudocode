/*
 * XREFs of ZwWin32CreateSection @ 0x1C000D6D8
 * Callers:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C000D29C (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C000D7F0 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C0286674 (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     ZwWin32CreateSectionRetainHandle @ 0x1C000D734 (ZwWin32CreateSectionRetainHandle.c)
 */

__int64 __fastcall ZwWin32CreateSection(int a1, int a2, int a3, int a4, ULONG a5, int a6, void *a7, HANDLE Handle)
{
  int v8; // ebx
  int v10; // [rsp+28h] [rbp-30h]
  void *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  Handle = 0LL;
  v8 = ZwWin32CreateSectionRetainHandle(a1, a2, a3, a4, a5, v10, a7, v11, v12, &Handle);
  if ( v8 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v8;
}
