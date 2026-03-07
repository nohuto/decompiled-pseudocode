void __fastcall vFindAndReplaceRFONT(struct PDEVOBJ *this, struct PDEVOBJ *a2, struct PDEVOBJ *a3)
{
  struct RFONT *i; // r9
  struct RFONT *j; // r8
  struct RFONT *k; // r8
  struct RFONT *m; // r8
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  v10 = *((_QWORD *)Gre::Base::Globals(this) + 3);
  GreAcquireSemaphore(v10);
  for ( i = PDEVOBJ::prfntActive(this); i; i = (struct RFONT *)*((_QWORD *)i + 84) )
  {
    if ( *((_QWORD *)i + 12) == *(_QWORD *)a2 )
      *((_QWORD *)i + 12) = *(_QWORD *)a3;
    if ( *((_QWORD *)i + 13) == *(_QWORD *)a2 )
      *((_QWORD *)i + 13) = *(_QWORD *)a3;
  }
  for ( j = PDEVOBJ::prfntInactive(this); j; j = (struct RFONT *)*((_QWORD *)j + 84) )
  {
    if ( *((_QWORD *)j + 12) == *(_QWORD *)a2 )
      *((_QWORD *)j + 12) = *(_QWORD *)a3;
    if ( *((_QWORD *)j + 13) == *(_QWORD *)a2 )
      *((_QWORD *)j + 13) = *(_QWORD *)a3;
  }
  for ( k = PDEVOBJ::prfntActive(this); k; k = (struct RFONT *)*((_QWORD *)k + 62) )
  {
    if ( *((_QWORD *)k + 12) == *(_QWORD *)a2 )
      *((_QWORD *)k + 12) = *(_QWORD *)a3;
    if ( *((_QWORD *)k + 13) == *(_QWORD *)a2 )
      *((_QWORD *)k + 13) = *(_QWORD *)a3;
  }
  for ( m = PDEVOBJ::prfntInactive(this); m; m = (struct RFONT *)*((_QWORD *)m + 62) )
  {
    if ( *((_QWORD *)m + 12) == *(_QWORD *)a2 )
      *((_QWORD *)m + 12) = *(_QWORD *)a3;
    if ( *((_QWORD *)m + 13) == *(_QWORD *)a2 )
      *((_QWORD *)m + 13) = *(_QWORD *)a3;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
}
