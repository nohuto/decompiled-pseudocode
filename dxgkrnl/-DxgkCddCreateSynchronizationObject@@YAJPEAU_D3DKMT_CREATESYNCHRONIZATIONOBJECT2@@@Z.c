__int64 __fastcall DxgkCddCreateSynchronizationObject(struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *a1)
{
  if ( a1->Info.Type == D3DDDI_MONITORED_FENCE )
    a1->Info.Flags.Value |= 0x80u;
  return DxgkCreateSynchronizationObjectImpl((ULONG64)a1, 0xFu, 0LL, 0LL, 0LL);
}
