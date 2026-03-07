bool __fastcall DXGDISPLAYMANAGEROBJECT::ContainsTarget(DXGDISPLAYMANAGEROBJECT *this, struct _LUID a2, int a3)
{
  bool v6; // bl
  _BYTE v8[16]; // [rsp+20h] [rbp-48h] BYREF
  void **v9; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+38h] [rbp-30h]
  struct _LUID v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+50h] [rbp-18h]

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v11 = a2;
  v12 = a3;
  v9 = &SetElement::`vftable';
  v10 = 0LL;
  v6 = Set<DXGTARGETENTRY>::FindByValue((__int64)this + 80) != 0;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v6;
}
