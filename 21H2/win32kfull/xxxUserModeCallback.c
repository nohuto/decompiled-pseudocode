/*
 * XREFs of xxxUserModeCallback @ 0x1C0233AA8
 * Callers:
 *     xxxMNStartMenu @ 0x1C0222640 (xxxMNStartMenu.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C0136788 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C01367B0 (--1LeaveEnterCrit@@QEAA@XZ.c)
 */

__int64 xxxUserModeCallback(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, ...)
{
  int v7; // ebx
  LeaveEnterCrit *v8; // rcx
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF
  int v12; // [rsp+6Ch] [rbp+24h]
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, a4);
  v12 = HIDWORD(a4);
  v10[0] = 0LL;
  v11 = 0;
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)va);
  EtwTraceBeginCallback(a1);
  v7 = KeUserModeCallback(a1, a2, a3, v10, &v11);
  EtwTraceEndCallback(a1);
  LeaveEnterCrit::~LeaveEnterCrit(v8);
  if ( v7 < 0 )
    return (unsigned int)v7;
  result = 3221225473LL;
  if ( !v11 )
    return (unsigned int)v7;
  return result;
}
