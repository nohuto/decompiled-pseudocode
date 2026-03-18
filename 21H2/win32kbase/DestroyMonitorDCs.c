/*
 * XREFs of DestroyMonitorDCs @ 0x1C005D530
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C002DE80 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C002E140 (GreUnlockVisRgn.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 *     HdevFromMonitor @ 0x1C0067F70 (HdevFromMonitor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DestroyMonitorDCs(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 *v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  int v9; // ecx
  int v10; // ecx

  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5), a2, a3);
  v5 = (__int64 *)((char *)gpDispInfo + 24);
  v6 = *((_QWORD *)gpDispInfo + 3);
  if ( v6 )
  {
    do
    {
      if ( *(_QWORD *)(v6 + 88) && (unsigned int)HdevFromMonitor() == -1 )
      {
        v9 = *(_DWORD *)(v6 + 64);
        if ( v9 >= 0 )
        {
          DestroyCacheDC(v5, *(_QWORD *)(v6 + 8), v4);
        }
        else
        {
          *(_QWORD *)(v6 + 88) = 0LL;
          v10 = v9 | 0x4000000;
          *(_DWORD *)(v6 + 64) = v10;
          if ( (v10 & 0x4000) != 0 )
          {
            if ( qword_1C029B808 )
            {
              qword_1C029B808(*(_QWORD *)(v6 + 8), 0LL);
              v10 = *(_DWORD *)(v6 + 64);
            }
            *(_QWORD *)(v6 + 32) = 0LL;
            *(_DWORD *)(v6 + 64) = v10 & 0xFFFFBFFF;
          }
        }
      }
      v7 = *v5;
      if ( v6 == *v5 )
      {
        v7 = *(_QWORD *)v6;
        v5 = (__int64 *)v6;
      }
      v6 = v7;
    }
    while ( v7 );
  }
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5), v3, v4);
}
