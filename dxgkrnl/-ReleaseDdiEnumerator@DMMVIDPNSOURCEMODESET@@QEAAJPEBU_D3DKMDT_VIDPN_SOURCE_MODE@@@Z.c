__int64 __fastcall DMMVIDPNSOURCEMODESET::ReleaseDdiEnumerator(
        DMMVIDPNSOURCEMODESET *this,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a2)
{
  char *v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223192336LL;
  }
  v2 = (char *)(&a2[-1].Format.Text + 4);
  if ( a2[-1].Format.Graphics.Stride != 305419896 )
  {
    WdLogSingleEntry1(2LL, &a2[-1].Format.Text + 4);
    return 3223192336LL;
  }
  v3 = *((_QWORD *)&a2[-1].Format.Text + 3);
  if ( v3
    && !DoublyLinkedList<DMMVIDPNSOURCEMODE,DoubleLinkedListElementDeleter<DMMVIDPNSOURCEMODE>>::ContainsByReference(
          (__int64)this + 32,
          v3) )
  {
    WdLogSingleEntry2(2LL, v2, v4);
    return 3223192368LL;
  }
  else
  {
    operator delete(v2);
    return 0LL;
  }
}
