/*
 * XREFs of IsMDIItem @ 0x1C023B184
 * Callers:
 *     ?MBC_RightJustifyMenu@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C023A5CC (-MBC_RightJustifyMenu@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMDIItem(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned int v2; // ecx
  unsigned __int64 v3; // rax

  v1 = *a1;
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 4) & 0x20000000) != 0 )
  {
    v3 = *(_QWORD *)(v1 + 96);
    if ( v3 )
      return v3 <= 7;
  }
  return v2;
}
