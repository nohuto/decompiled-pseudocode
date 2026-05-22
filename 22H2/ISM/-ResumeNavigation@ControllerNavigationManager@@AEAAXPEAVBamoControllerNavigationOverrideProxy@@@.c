/*
 * XREFs of ?ResumeNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011E008
 * Callers:
 *     ?SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverrideProxy@@@Z @ 0x18011E134 (-SetCurrentStateWithOverride@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationOverr.c)
 *     ?OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ @ 0x18011E760 (-OnDisconnected@ControllerNavigationOverrideProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x18011D134 (-NavigationResumed@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z.c)
 *     ?NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z @ 0x180121520 (-NavigationResume@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@@Z.c)
 */

void __fastcall ControllerNavigationManager::ResumeNavigation(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationOverrideProxy *a2)
{
  unsigned int v2; // esi
  struct tagRECT v4; // xmm6
  struct tagPOINT v5; // rdi
  char *v6; // rbx
  _QWORD *v7; // r14
  _QWORD *i; // rbx
  ControllerProcessor *v9; // rcx
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v4 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    v6 = (char *)a2 + 8;
    v2 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 40LL))((char *)a2 + 8);
    v4 = *(struct tagRECT *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 48LL))(v6);
    v5 = *(struct tagPOINT *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v6 + 56LL))(v6);
  }
  v10 = v4;
  InputETW::ControllerNavigationManager::NavigationResumed(&v10, v5);
  v7 = (_QWORD *)*((_QWORD *)this + 9);
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    v9 = (ControllerProcessor *)i[3];
    v10 = v4;
    ControllerProcessor::NavigationResume(v9, v2, &v10, v5);
  }
  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, 0LL);
}
