/*
 * XREFs of ?GetHDR10MetaData@CFlipExBuffer@@UEBAJPEAUDXGI_HDR_METADATA_HDR10@@@Z @ 0x1C007D6D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::GetHDR10MetaData(CFlipExBuffer *this, struct DXGI_HDR_METADATA_HDR10 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d

  v2 = *((_QWORD *)this + 46);
  v3 = -1073741823;
  if ( v2 )
  {
    v3 = 0;
    *(_OWORD *)a2 = *(_OWORD *)v2;
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v2 + 16);
    *((_DWORD *)a2 + 6) = *(_DWORD *)(v2 + 24);
  }
  return v3;
}
