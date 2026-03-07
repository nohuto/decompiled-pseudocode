bool __fastcall DxgkDispMgrIsTargetOwned(DXGDISPLAYMANAGEROBJECT **a1, struct _LUID a2, int a3)
{
  return DXGDISPLAYMANAGEROBJECT::ContainsTarget(*a1, a2, a3);
}
