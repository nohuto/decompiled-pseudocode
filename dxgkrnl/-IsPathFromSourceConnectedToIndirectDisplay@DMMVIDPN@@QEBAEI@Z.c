/*
 * XREFs of ?IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN@@QEBAEI@Z @ 0x1C03B4600
 * Callers:
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C019E8D0 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPN::IsPathFromSourceConnectedToIndirectDisplay(DMMVIDPN *this, int a2)
{
  DMMVIDPN *v2; // r8
  _QWORD *v3; // r10
  __int64 v5; // rax
  DMMVIDPN *v6; // rcx

  v2 = (DMMVIDPN *)*((_QWORD *)this + 15);
  v3 = 0LL;
  if ( v2 != (DMMVIDPN *)((char *)this + 120) )
    v3 = (_QWORD *)((char *)v2 - 8);
  while ( 1 )
  {
    if ( !v3 )
      return 0;
    if ( *(_DWORD *)(v3[11] + 24LL) == a2 )
    {
      v5 = v3[12];
      if ( *(_DWORD *)(*(_QWORD *)(v5 + 96) + 84LL) == 15
        || (unsigned int)(*(_DWORD *)(*(_QWORD *)(v5 + 96) + 84LL) - 16) < 2 )
      {
        break;
      }
    }
    v6 = (DMMVIDPN *)v3[1];
    v3 = (_QWORD *)((char *)v6 - 8);
    if ( v6 == (DMMVIDPN *)((char *)this + 120) )
      v3 = 0LL;
  }
  return 1;
}
