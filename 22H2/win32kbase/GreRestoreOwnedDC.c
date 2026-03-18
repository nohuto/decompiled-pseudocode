/*
 * XREFs of GreRestoreOwnedDC @ 0x1C0039180
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0038DD8 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003BD24 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003BD68 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0043040 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     EngSetLastError @ 0x1C00AADD0 (EngSetLastError.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C0159C64 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 */

__int64 __fastcall GreRestoreOwnedDC(HDC a1, int a2)
{
  __int64 v3; // rcx
  struct OBJECT *v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rax
  __int64 v8; // rdx
  unsigned int v9; // eax
  struct OBJECT *v10[7]; // [rsp+30h] [rbp-38h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v4 = v10[0];
  v5 = 0;
  if ( v10[0]
    && (v6 = SGDGetSessionState(v3),
        (*((_DWORD *)GdiHandleManager::GetEntryFromObject(*(GdiHandleManager **)(*(_QWORD *)(v6 + 24) + 8008LL), v4) + 2) & 0xFFFFFFFE) != 0) )
  {
    if ( *((unsigned __int16 *)v10[0] + 6) > 1u )
    {
      v8 = *((_QWORD *)v10[0] + 6);
      if ( v8 )
        v9 = *(_DWORD *)(v8 + 40);
      else
        v9 = 0;
      TraceLoggingWriteUnsupportedGdiUsage(8LL, v9, *((unsigned __int16 *)v10[0] + 6), 0LL, 0LL);
    }
    else
    {
      v5 = GrepRestoreDCOBJ(v10, a2);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v10);
  return v5;
}
