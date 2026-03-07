bool __fastcall IsVirtualModeSupported(struct D3DKMT_PATHMODALITY_DESCRIPTOR *a1)
{
  char v1; // dl

  v1 = 0;
  if ( _bittest64((const signed __int64 *)a1, 0x33u) )
    return *((_BYTE *)a1 + 129) != 0;
  return v1;
}
