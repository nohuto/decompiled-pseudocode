void __fastcall FastRegion::Internal::CRgnData::StepIterator(
        FastRegion::Internal::CRgnData *this,
        struct FastRegion::CRegion::Iterator *a2)
{
  int v3; // eax
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  v3 = *((_DWORD *)a2 + 8) + 1;
  *((_DWORD *)a2 + 8) = v3;
  if ( v3 >= *((_DWORD *)a2 + 9) )
  {
    while ( 1 )
    {
      v4 = *((_QWORD *)a2 + 2) + 8LL;
      *((_QWORD *)a2 + 2) = v4;
      v5 = v4 + *(int *)(v4 + 4);
      *((_QWORD *)a2 + 3) = v5;
      v6 = (__int64)(v4 + 8 + *(int *)(v4 + 12) - v5) >> 3;
      *((_DWORD *)a2 + 9) = v6;
      if ( (_DWORD)v6 )
        break;
      if ( v4 >= *((_QWORD *)a2 + 1) )
        return;
    }
    *((_DWORD *)a2 + 8) = 0;
  }
}
