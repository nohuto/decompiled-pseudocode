/*
 * XREFs of ZwWin32CreateSection @ 0x1C028A700
 * Callers:
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C00A8CFC (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@_N@Z @ 0x1C02897DC (-ObtainSectionForNetworkedFontFile@@YAJPEAU_UNICODE_STRING@@PEAU_FILEVIEW@@PEAU_OBJECT_ATTRIBUTE.c)
 * Callees:
 *     ZwWin32CreateSectionRetainHandle @ 0x1C00A8A30 (ZwWin32CreateSectionRetainHandle.c)
 */

__int64 __fastcall ZwWin32CreateSection(
        _QWORD *a1,
        __int64 a2,
        struct _OBJECT_ATTRIBUTES *a3,
        union _LARGE_INTEGER *a4,
        ULONG a5,
        int a6,
        void *a7,
        HANDLE Handle)
{
  NTSTATUS v8; // ebx
  int v10; // [rsp+28h] [rbp-30h]
  void *v11; // [rsp+38h] [rbp-20h]
  int v12; // [rsp+40h] [rbp-18h]

  Handle = 0LL;
  v8 = ZwWin32CreateSectionRetainHandle(a1, a2, a3, a4, a5, v10, a7, v11, v12, &Handle);
  if ( v8 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v8;
}
