__int64 __fastcall MULTISURF::bLoadSource(MULTISURF *this, HDEV *a2)
{
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = 1;
  if ( *((_QWORD *)this + 3) )
  {
    v4 = *((_QWORD *)this + 10);
    if ( v4 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8LL * *((unsigned int *)a2 + 4));
      *((_QWORD *)this + 11) = v5;
      if ( !v5 )
        *((_QWORD *)this + 11) = *(_QWORD *)this + 24LL;
    }
    else
    {
      return (unsigned int)MULTISURF::bLoadSourceNotMetaDEVBITMAP(this, a2[6]);
    }
  }
  return v3;
}
