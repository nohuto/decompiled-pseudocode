__int64 __fastcall MULTISURF::bLoadSource(MULTISURF *this, HDEV a2)
{
  unsigned int v3; // r10d
  __int64 ****v4; // r9
  __int64 **i; // rcx

  v3 = 1;
  if ( *((_QWORD *)this + 3) )
  {
    v4 = (__int64 ****)*((_QWORD *)this + 10);
    if ( v4 )
    {
      for ( i = **v4; i; i = (__int64 **)*i )
      {
        if ( i[6] == (__int64 *)a2 )
        {
          *((_QWORD *)this + 11) = v4[1][*((unsigned int *)i + 4)];
          break;
        }
      }
      if ( !*((_QWORD *)this + 11) )
        *((_QWORD *)this + 11) = *(_QWORD *)this + 24LL;
    }
    else
    {
      return (unsigned int)MULTISURF::bLoadSourceNotMetaDEVBITMAP(this, a2);
    }
  }
  return v3;
}
