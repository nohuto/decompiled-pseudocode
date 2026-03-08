/*
 * XREFs of ?GetDebugString@CBackdropVisualImageKey@@QEBA?BVDbgString@DwmDbg@@XZ @ 0x180217444
 * Callers:
 *     ?LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z @ 0x18004CF18 (-LogEtwEvent@CBackdropVisualImage@@QEBAXVDbgString@DwmDbg@@0@Z.c)
 * Callees:
 *     ??0DbgString@DwmDbg@@QEAA@QEBDZZ @ 0x18008883C (--0DbgString@DwmDbg@@QEAA@QEBDZZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

char **__fastcall CBackdropVisualImageKey::GetDebugString(__int64 a1, char **a2)
{
  __int64 v2; // rbx
  int v4; // r9d
  void *v5; // rbx
  void *lpMem; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  DwmDbg::DbgString::DbgString((char **)&lpMem, "0x%p", *(const void **)a1);
  v4 = v2;
  v5 = lpMem;
  DwmDbg::DbgString::DbgString(a2, "%s, 0x%x", (const char *)lpMem, v4);
  if ( v5 )
    operator delete(v5);
  return a2;
}
