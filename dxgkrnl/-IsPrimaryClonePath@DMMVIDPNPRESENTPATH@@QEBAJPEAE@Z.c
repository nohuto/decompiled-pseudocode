/*
 * XREFs of ?IsPrimaryClonePath@DMMVIDPNPRESENTPATH@@QEBAJPEAE@Z @ 0x1C03B4E60
 * Callers:
 *     ?SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0007ED8 (-SetRotationSupport@DMMVIDPNPRESENTPATH@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0014550 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z @ 0x1C01B076C (-GetMostImportantVidPnPathTargetsFromSource@@YAJPEBVDMMVIDPNTOPOLOGY@@IQEAI@Z.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::IsPrimaryClonePath(DMMVIDPNPRESENTPATH *this, bool *a2)
{
  __int64 v2; // rbx
  unsigned int v5; // ebp
  __int64 Container; // rax
  __int64 result; // rax
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 11);
  v8 = -1;
  v5 = *(_DWORD *)(v2 + 24);
  if ( !*(_QWORD *)(v2 + 40) )
    WdLogSingleEntry0(1LL);
  Container = ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v2 + 40) + 64LL);
  result = GetMostImportantVidPnPathTargetsFromSource((const struct DMMVIDPNTOPOLOGY *)(Container + 96), v5, &v8);
  if ( (int)result >= 0 )
    *a2 = v8 == *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  return result;
}
