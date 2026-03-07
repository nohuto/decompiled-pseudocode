char __fastcall CRegionGeometry::IsSameGeometry(CRegionGeometry *this, const struct CGeometry *a2)
{
  char v2; // bl
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // r8
  __int64 v10; // rcx

  v2 = 0;
  if ( a2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(const struct CGeometry *, __int64))(*(_QWORD *)a2 + 56LL))(a2, 142LL) )
    {
      v5 = *((_QWORD *)this + 19);
      v6 = *((_QWORD *)this + 18);
      v7 = *((_QWORD *)a2 + 18);
      if ( (((v5 - v6) ^ (*((_QWORD *)a2 + 19) - v7)) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v2 = 1;
        v9 = v7 - v6;
        while ( v6 != v5 )
        {
          if ( !(unsigned __int8)operator==(v6, v9 + v6) )
            return 0;
          v6 = v10 + 16;
        }
      }
    }
  }
  return v2;
}
