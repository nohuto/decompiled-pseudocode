/*
 * XREFs of ?AddComponent@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238A64
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z @ 0x1C0238F50 (-xxxSetHost@CoreWindowProp@@SAJPEAUtagWND@@0@Z.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00821A8 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     ?xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x1C009DA04 (-xxxSetWindowBand@@YAHPEAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z @ 0x1C0238CC4 (-FindComponent@CoreWindowProp@@KAPEAUComponent@1@PEAUtagWND@@0PEAPEAU21@@Z.c)
 */

__int64 __fastcall CoreWindowProp::AddComponent(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rdx
  __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v15 = 0LL;
  if ( CWindowProp::GetProp<CoreWindowProp>((__int64)a1, &v15) )
  {
    v6 = v15;
    if ( *(_DWORD *)(v15 + 24) )
    {
      if ( !CoreWindowProp::FindComponent(a1, a2, 0LL) )
      {
        v7 = (_QWORD *)Win32AllocPoolZInit(16LL, 1920430933LL);
        if ( !v7 )
          return (unsigned int)-1073741801;
        *v7 = *(_QWORD *)(v6 + 40);
        v7[1] = a2;
        *(_QWORD *)(v6 + 40) = v7;
        ++*(_DWORD *)(v6 + 48);
      }
      if ( *(_DWORD *)(*((_QWORD *)a2 + 5) + 236LL) != *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL) )
      {
        AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v15);
        v14[2] = 0LL;
        v14[0] = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = v14;
        v14[1] = a2;
        HMLockObject(a2);
        xxxSetWindowBand(a2, 0LL, *(_DWORD *)(*((_QWORD *)a1 + 5) + 236LL), 7);
        ThreadUnlock1(v9, v8, v10);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v15, v11, v12);
      }
      return v3;
    }
  }
  UserSetLastError(5LL, v5);
  return 3221225506LL;
}
