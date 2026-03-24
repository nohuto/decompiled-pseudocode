/*
 * XREFs of RemoveHmodDependency @ 0x1C002031C
 * Callers:
 *     FreeHook @ 0x1C001FF90 (FreeHook.c)
 *     DestroyEventHook @ 0x1C0022770 (DestroyEventHook.c)
 *     _RegisterUserApiHook @ 0x1C011CC58 (_RegisterUserApiHook.c)
 *     _UnregisterUserApiHook @ 0x1C0136740 (_UnregisterUserApiHook.c)
 *     _UnregisterDManipHook @ 0x1C01E6420 (_UnregisterDManipHook.c)
 * Callees:
 *     ??0?$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ @ 0x1C00208C8 (--0-$CLockDomainExclusiveInUserCrit@VDLT_CLIENTLIB@@@@QEAA@XZ.c)
 *     __report_rangecheckfailure @ 0x1C01655E0 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall RemoveHmodDependency(int a1)
{
  __int64 v1; // rbx
  tagDomLock *v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>::CLockDomainExclusiveInUserCrit<DLT_CLIENTLIB>(&v3);
  if ( (int)v1 < catomSysTableEntries && (*((_DWORD *)&acatomSysDepends + v1))-- == 1 )
  {
    if ( *((_DWORD *)&acatomSysUse + v1) )
    {
      ++gcSysExpunge;
      LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) |= 1 << v1;
    }
    else
    {
      if ( (unsigned __int64)(2 * v1) >= 0x40 )
        _report_rangecheckfailure();
      *((_WORD *)&aatomSysLoaded + v1) = 0;
    }
  }
  tagDomLock::UnLockExclusive(v3);
}
