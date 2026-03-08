/*
 * XREFs of ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00D76B8
 * Callers:
 *     ?SetLPITEMInfoNoRedraw@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@@PEAU_UNICODE_STRING@@PEAH@Z @ 0x1C00A6ADC (-SetLPITEMInfoNoRedraw@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagMENUITEMINFOW@.c)
 *     NtUserCreateMenu @ 0x1C00E4DE0 (NtUserCreateMenu.c)
 *     NtUserCreatePopupMenu @ 0x1C00ED870 (NtUserCreatePopupMenu.c)
 * Callees:
 *     CheckGrantedAccess @ 0x1C00D7810 (CheckGrantedAccess.c)
 *     ??$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z @ 0x1C00D783C (--$InitLookAsideRef@UtagMENU@@@@YAEPEAUtagMENU@@@Z.c)
 */

struct tagMENU *__fastcall InternalCreateMenu(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdi

  v4 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *(_QWORD *)(gptiCurrent + 592LL)
    && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 896LL), 4LL) )
  {
    return 0LL;
  }
  LOBYTE(a3) = 2;
  v5 = HMAllocObject(gptiCurrent, v4, a3);
  v6 = v5;
  v7 = v5;
  if ( v5 )
  {
    if ( (unsigned __int8)InitLookAsideRef<tagMENU>(v5) )
    {
      if ( a1 )
      {
        *(_DWORD *)(*(_QWORD *)(v7 + 40) + 40LL) = 1;
        *(_OWORD *)(v7 + 128) = 0LL;
        *(_DWORD *)(v7 + 144) = 0;
      }
    }
    else
    {
      HMFreeObject(v6);
      return 0LL;
    }
  }
  return (struct tagMENU *)v6;
}
