__int64 __fastcall DMMVIDEOPRESENTTARGET::ExchangeDisplayManagerObject(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGDISPLAYMANAGEROBJECT *a2,
        struct DXGDISPLAYMANAGEROBJECT *a3)
{
  struct DXGDISPLAYMANAGEROBJECT *v3; // rax

  v3 = (struct DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 68);
  if ( v3 != a2 )
  {
    if ( v3 != a3 )
    {
      WdLogSingleEntry0(2LL);
      return 3221225506LL;
    }
    *((_QWORD *)this + 68) = a2;
  }
  return 0LL;
}
