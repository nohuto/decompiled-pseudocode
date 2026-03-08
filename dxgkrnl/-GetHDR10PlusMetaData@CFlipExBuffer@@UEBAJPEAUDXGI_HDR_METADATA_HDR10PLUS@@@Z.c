/*
 * XREFs of ?GetHDR10PlusMetaData@CFlipExBuffer@@UEBAJPEAUDXGI_HDR_METADATA_HDR10PLUS@@@Z @ 0x1C007D710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipExBuffer::GetHDR10PlusMetaData(CFlipExBuffer *this, struct DXGI_HDR_METADATA_HDR10PLUS *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d

  v2 = *((_QWORD *)this + 46);
  v3 = -1073741823;
  if ( v2 )
  {
    v3 = 0;
    *(_OWORD *)a2 = *(_OWORD *)v2;
    *((_OWORD *)a2 + 1) = *(_OWORD *)(v2 + 16);
    *((_OWORD *)a2 + 2) = *(_OWORD *)(v2 + 32);
    *((_OWORD *)a2 + 3) = *(_OWORD *)(v2 + 48);
    *((_QWORD *)a2 + 8) = *(_QWORD *)(v2 + 64);
  }
  return v3;
}
