/*
 * XREFs of ?CaptureSchedulerLogs@DXGGLOBAL@@QEAAXXZ @ 0x1C030D630
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0020F18 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGGLOBAL::CaptureSchedulerLogs(DXGGLOBAL *this)
{
  _QWORD **v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _QWORD *v6; // rcx
  _BYTE v7[16]; // [rsp+20h] [rbp-38h] BYREF
  char v8[8]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v9; // [rsp+38h] [rbp-20h]
  char v10; // [rsp+40h] [rbp-18h]

  v1 = (_QWORD **)((char *)this + 768);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGGLOBAL *)((char *)this + 672), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v2 = *v1;
  while ( v2 != v1 && v2 )
  {
    v3 = v2;
    v2 = (_QWORD *)*v2;
    if ( v3[366] )
    {
      _m_prefetchw(v3 + 3);
      v4 = v3[3];
      while ( v4 )
      {
        v5 = v4;
        v4 = _InterlockedCompareExchange64(v3 + 3, v4 + 1, v4);
        if ( v5 == v4 )
        {
          LOBYTE(v4) = 1;
          break;
        }
      }
      if ( (_BYTE)v4 )
      {
        v9 = v3;
        v10 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
        if ( *((_DWORD *)v3 + 50) == 1 )
        {
          v6 = (_QWORD *)v3[366];
          if ( !*(_BYTE *)(v6[2] + 209LL) )
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v6[92] + 8LL) + 56LL))(v6[93]);
        }
        if ( v10 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v8);
      }
    }
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
