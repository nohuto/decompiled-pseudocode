void __fastcall WIDEPATHOBJ::vAddPoint(WIDEPATHOBJ *this, const struct _POINTFIX *a2)
{
  struct _POINTFIX *v2; // r8

  v2 = (struct _POINTFIX *)*((_QWORD *)this + 16);
  if ( (unsigned __int64)v2 < *((_QWORD *)this + 17) )
  {
    *v2 = *a2;
    *((_QWORD *)this + 16) += 8LL;
  }
  else
  {
    WIDEPATHOBJ::vGrowPathAndAddPoint(this, a2, 0LL, 0);
  }
}
