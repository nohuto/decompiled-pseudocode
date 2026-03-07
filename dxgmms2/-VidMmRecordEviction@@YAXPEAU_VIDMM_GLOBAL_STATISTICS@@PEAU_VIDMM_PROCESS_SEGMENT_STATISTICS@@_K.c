void __fastcall VidMmRecordEviction(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // r9d
  int v5; // r9d
  int v6; // r9d

  ++*(_DWORD *)(a1 + 272);
  *(_QWORD *)(a1 + 280) += a3;
  v4 = a4 - 102;
  if ( v4 )
  {
    v5 = v4 - 8;
    if ( v5 )
    {
      v6 = v5 - 90;
      if ( v6 )
      {
        if ( v6 == 7 )
        {
          ++*(_DWORD *)(a1 + 288);
          *(_QWORD *)(a1 + 296) += a3;
          *(_QWORD *)(a2 + 104) += a3;
        }
      }
      else
      {
        ++*(_DWORD *)(a1 + 320);
        *(_QWORD *)(a1 + 328) += a3;
      }
    }
    else
    {
      ++*(_DWORD *)(a1 + 352);
      *(_QWORD *)(a1 + 360) += a3;
    }
  }
  else
  {
    ++*(_DWORD *)(a1 + 336);
    *(_QWORD *)(a1 + 344) += a3;
  }
}
