__int64 __fastcall DMMVIDEOPRESENTTARGET::ReferenceDisplayManagerObject(
        DMMVIDEOPRESENTTARGET *this,
        struct DXGDISPLAYMANAGEROBJECT **a2)
{
  __int64 v2; // rax

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 68);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    *a2 = (struct DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 68);
  }
  return 0LL;
}
