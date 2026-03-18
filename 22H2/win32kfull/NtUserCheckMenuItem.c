/*
 * XREFs of NtUserCheckMenuItem @ 0x1C01CD620
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _CheckMenuItem @ 0x1C0221F30 (_CheckMenuItem.c)
 */

__int64 __fastcall NtUserCheckMenuItem(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]
  char v18; // [rsp+60h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v18);
  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v17 = 0LL;
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    UserSetLastError(1004);
LABEL_3:
    v6 = -1;
    goto LABEL_9;
  }
  v7 = ValidateHmenu(a1);
  v17 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v16, v7);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v16)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x40) != 0 )
  {
    goto LABEL_3;
  }
  v8 = v17;
  if ( !v17 )
    v8 = *(_QWORD *)v16[0];
  v6 = CheckMenuItem(v8, a2, a3);
LABEL_9:
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v16);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v18, v9, v10);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v6;
}
