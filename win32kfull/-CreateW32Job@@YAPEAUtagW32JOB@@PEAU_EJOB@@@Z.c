/*
 * XREFs of ?CreateW32Job@@YAPEAUtagW32JOB@@PEAU_EJOB@@@Z @ 0x1C003BC90
 * Callers:
 *     UserJobCallout @ 0x1C003C000 (UserJobCallout.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003E858 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C003E900 (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct tagW32JOB *__fastcall CreateW32Job(struct _EJOB *a1, __int64 a2, __int64 a3, int a4)
{
  char v5; // di
  bool v6; // dl
  __int64 v7; // rax
  _QWORD *v8; // rbx
  int v9; // edx
  int v10; // r8d

  v5 = 1;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      a4,
      4,
      13,
      15,
      (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
      (char)a1);
  v7 = Win32AllocPoolZInit(64LL, 1651143509LL);
  v8 = (_QWORD *)v7;
  if ( !v7 )
    return 0LL;
  if ( (int)CreateGlobalAtomTable(v7 + 16) < 0 )
  {
    Win32FreePool(v8);
    return 0LL;
  }
  *v8 = gpJobsList;
  gpJobsList = v8;
  v8[1] = a1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = v5;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_qq(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v10,
      (_DWORD)gFullLog,
      4,
      13,
      16,
      (__int64)&WPP_40f4441d6cab3733bd466f1475637ae2_Traceguids,
      (char)v8,
      (char)a1);
  }
  return (struct tagW32JOB *)v8;
}
