/*
 * XREFs of ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x180029840
 * Callers:
 *     ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x180015574 (-CanBeRemoved@CProcess@@QEAAHXZ.c)
 *     ?GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ @ 0x180016910 (-GetScreenReaderPolicyVolume@CProcess@@UEAAMXZ.c)
 *     ?IsScreenReaderProcess@CProcess@@UEAA_NXZ @ 0x180016950 (-IsScreenReaderProcess@CProcess@@UEAA_NXZ.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001E848 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_BOOL8 __fastcall TsSessionIdIsAScreenReaderProcess(DWORD a1, int a2, float *a3)
{
  BOOL v6; // edi
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  __int64 *i; // rax
  struct TSSession *v10; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  if ( !(unsigned int)TsSessionFromSessionId(a1, 1, 0LL, &v10) )
  {
    for ( i = (__int64 *)*((_QWORD *)v10 + 22); i && *((_DWORD *)i + 4) != a2; i = (__int64 *)*i )
      ;
    v6 = i != 0LL;
    if ( a3 )
      *a3 = *((float *)v10 + 56);
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return v6;
}
