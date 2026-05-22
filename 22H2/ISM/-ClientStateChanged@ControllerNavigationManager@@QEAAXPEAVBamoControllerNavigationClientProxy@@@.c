/*
 * XREFs of ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011CC08
 * Callers:
 *     ?OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ @ 0x18011E7F0 (-OnEnabledChanged@ControllerNavigationClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z @ 0x18011CD44 (-ClientStateChanged@ControllerNavigationManager@InputETW@@SAXKUtagRECT@@UtagPOINT@@@Z.c)
 *     ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011E0E8 (-SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientP.c)
 */

void __fastcall ControllerNavigationManager::ClientStateChanged(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebp
  __int64 v8; // rax
  const char *v9; // r9
  __int64 v10; // rdx
  __int64 *v11; // r8
  __int64 v12; // rdx
  __int64 *i; // rax
  __int64 *v14; // rcx
  struct tagRECT v15; // xmm6
  struct tagPOINT *v16; // rax
  struct tagRECT v17; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+50h] [rbp+8h]

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a2 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a2 + 4) + 16LL));
  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  v7 = *(_DWORD *)(v4 + 32);
  v19 = v7;
  do
  {
    v8 = *((unsigned __int8 *)&v19 + v5++);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  while ( v5 < 4 );
  v9 = (const char *)*((_QWORD *)this + 19);
  v10 = v6 & *((_QWORD *)this + 22);
  v11 = (__int64 *)*((_QWORD *)this + 17);
  v12 = 2 * v10;
  for ( i = *(__int64 **)&v9[8 * v12]; ; i = (__int64 *)*i )
  {
    v14 = *(__int64 **)&v9[8 * v12] == v11 ? (__int64 *)*((_QWORD *)this + 17) : **(__int64 ***)&v9[8 * v12 + 8];
    if ( i == v14 )
      break;
    if ( *((_DWORD *)i + 4) == v7 )
      goto LABEL_11;
  }
  i = (__int64 *)*((_QWORD *)this + 17);
LABEL_11:
  if ( i == v11 || (struct BamoControllerNavigationClientProxy *)i[3] != a2 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      326LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllernavigationmanager.cpp",
      v9);
    JUMPOUT(0x18011CD3CLL);
  }
  v15 = *(struct tagRECT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 48LL))((char *)a2 + 8);
  v16 = (struct tagPOINT *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 56LL))((char *)a2 + 8);
  v17 = v15;
  InputETW::ControllerNavigationManager::ClientStateChanged(v7, &v17, *v16);
  if ( *((_DWORD *)this + 56) == v7 )
    ControllerNavigationManager::SetCurrentStateWithClient(this, a2);
}
