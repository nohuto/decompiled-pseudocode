__int64 __fastcall IoRecordIoAttribution(unsigned __int64 a1, _DWORD *a2)
{
  __int64 DiskIoAttribution; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  int v6; // eax
  int v7; // ebx

  if ( *a2 == 1 )
  {
    DiskIoAttribution = IopFindDiskIoAttribution(a1);
    v4 = DiskIoAttribution;
    if ( DiskIoAttribution )
    {
      v5 = DiskIoAttribution;
      while ( 1 )
      {
        v6 = a2[1];
        if ( (v6 & 0x800) == 0 || (v6 & 0x200) != 0 || *(_QWORD *)(v5 + 176) )
        {
          v7 = IopRecordIoAttribution(v5, a2, 0LL);
          if ( v7 < 0 )
            break;
        }
        v5 = *(_QWORD *)(v5 + 176);
        if ( !v5 )
        {
          v7 = 0;
          break;
        }
      }
      IoDiskIoAttributionDereference(v4);
    }
    else
    {
      return (unsigned int)-1073741816;
    }
  }
  else
  {
    return (unsigned int)-1073741735;
  }
  return (unsigned int)v7;
}
