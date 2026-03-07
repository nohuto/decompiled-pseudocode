__int64 __fastcall XCLIPOBJ::bRecordRun(XCLIPOBJ *this, int *a2)
{
  __int64 v2; // r8
  int v3; // r9d
  int v4; // eax

  v2 = *((_QWORD *)this + 18);
  v3 = *a2;
  v4 = *(_DWORD *)(v2 + 28);
  if ( *a2 > v4 )
  {
    if ( v4 == *(_DWORD *)(v2 + 56) )
    {
      *(_DWORD *)(*(_QWORD *)(v2 + 48) - 4LL) = v3;
    }
    else
    {
      if ( **(_DWORD **)(v2 + 40) == *(_DWORD *)(v2 + 36) )
      {
        *(_DWORD *)(v2 + 32) = v3;
        return 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(v2 + 48) + 4LL) = v3;
      **(_DWORD **)(*((_QWORD *)this + 18) + 48LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 28LL) + 1;
      ++**(_DWORD **)(*((_QWORD *)this + 18) + 40LL);
      *(_QWORD *)(*((_QWORD *)this + 18) + 48LL) += 8LL;
    }
    *(_DWORD *)(*((_QWORD *)this + 18) + 56LL) = *a2;
  }
  return 1LL;
}
