/*
 * XREFs of ?AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z @ 0x1C004CCB8
 * Callers:
 *     ??2@YAPEAX_KPEAVDXGK_LOG@@II@Z @ 0x1C0001830 (--2@YAPEAX_KPEAVDXGK_LOG@@II@Z.c)
 *     ?AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z @ 0x1C004CCB8 (-AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z.c)
 * Callees:
 *     ?AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z @ 0x1C004CCB8 (-AllocateLogEntry@DXGK_LOG@@AEAAPEAUDXGK_LOG_ENTRY@@II@Z.c)
 */

struct DXGK_LOG_ENTRY *__fastcall DXGK_LOG::AllocateLogEntry(DXGK_LOG *this, char a2, unsigned int a3)
{
  unsigned int v4; // ecx
  struct DXGK_LOG_ENTRY *LogEntry; // rax
  struct DXGK_LOG_ENTRY *result; // rax
  int v7; // edi
  unsigned int v8; // r9d
  unsigned int v9; // ebp
  __int64 v10; // rbx

  v4 = *((_DWORD *)this + 2);
  if ( a3 <= v4 )
  {
    v7 = *((_DWORD *)this + 3);
    v8 = v4 - 1;
    v9 = v7 + a3;
    if ( a3 + ((v4 - 1) & v7) > v4 )
    {
      v7 = v9 & ~v8;
      v9 = v7 + a3;
    }
    v10 = *(_QWORD *)this + (v7 & v8);
    *(_DWORD *)(v10 + 8) = *((_DWORD *)this + 4);
    *(_DWORD *)(v10 + 16) = a2 & 0x3F;
    *(_DWORD *)(v10 + 12) = a3;
    KeQuerySystemTimePrecise(v10);
    result = (struct DXGK_LOG_ENTRY *)v10;
    *((_DWORD *)this + 4) = v7;
    *((_DWORD *)this + 3) = v9;
  }
  else
  {
    LogEntry = DXGK_LOG::AllocateLogEntry(this, a2, 0x18u);
    *((_DWORD *)LogEntry + 4) |= 0x40u;
    return 0LL;
  }
  return result;
}
