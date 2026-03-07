void __fastcall DripsBlockerTrackingHelper::ResetDAM(DripsBlockerTrackingHelper *this)
{
  _DWORD *v1; // rcx
  __int64 v2; // rax

  v1 = (_DWORD *)((char *)this + 108);
  v2 = 64LL;
  do
  {
    if ( *((_BYTE *)v1 - 4) )
      *v1 = 0;
    v1 += 1180;
    --v2;
  }
  while ( v2 );
}
