bool __fastcall DirectComposition::CConnection::CFrameStats::SetCurrentStats(
        DirectComposition::CConnection::CFrameStats *this,
        struct tagCOMPOSITION_CONFIRM_FRAME_INFO *a2)
{
  bool v2; // bl
  char *v5; // rdx
  unsigned int v6; // eax
  unsigned int i; // edx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  DirectComposition::CConnection *v11; // rcx
  unsigned int v12; // esi
  __int64 v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  __int64 v18; // rdx
  __int64 v19; // r8
  bool result; // al
  unsigned __int64 v21; // rdx

  v2 = 0;
  if ( !*((_BYTE *)this + 1) )
  {
    v21 = *((_QWORD *)this + 1);
    if ( v21 )
      DirectComposition::CConnection::DiscardFrame(this, v21);
  }
  v5 = (char *)*((_QWORD *)this + 5);
  *((_BYTE *)this + 1) = 0;
  if ( v5 && v5 != (char *)this + 48 )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v5);
    *((_QWORD *)this + 5) = 0LL;
  }
  *((_QWORD *)this + 1) = *(_QWORD *)a2;
  *((_OWORD *)this + 1) = *(_OWORD *)((char *)a2 + 8);
  *((_QWORD *)this + 4) = *((_QWORD *)a2 + 3);
  v6 = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 1) = v6;
  if ( v6 > 4 )
  {
    v11 = (DirectComposition::CConnection *)*((_QWORD *)a2 + 5);
  }
  else
  {
    for ( i = 0; i < v6; v6 = *((_DWORD *)this + 1) )
    {
      v8 = i++;
      v9 = 104 * v8;
      v10 = *((_QWORD *)a2 + 5);
      *(_OWORD *)((char *)this + v9 + 48) = *(_OWORD *)(v9 + v10);
      *(_OWORD *)((char *)this + v9 + 64) = *(_OWORD *)(v9 + v10 + 16);
      *(_OWORD *)((char *)this + v9 + 80) = *(_OWORD *)(v9 + v10 + 32);
      *(_OWORD *)((char *)this + v9 + 96) = *(_OWORD *)(v9 + v10 + 48);
      *(_OWORD *)((char *)this + v9 + 112) = *(_OWORD *)(v9 + v10 + 64);
      *(_OWORD *)((char *)this + v9 + 128) = *(_OWORD *)(v9 + v10 + 80);
      *(_QWORD *)((char *)this + v9 + 144) = *(_QWORD *)(v9 + v10 + 96);
    }
    v11 = (DirectComposition::CConnection::CFrameStats *)((char *)this + 48);
  }
  *((_QWORD *)this + 5) = v11;
  v12 = 0;
  if ( !v6 )
    goto LABEL_25;
  do
  {
    v11 = (DirectComposition::CConnection *)(104LL * v12);
    v13 = *((_QWORD *)this + 5);
    if ( *(_QWORD *)((char *)v11 + v13 + 40)
      && (v14 = *(_DWORD *)((char *)v11 + v13 + 56)) != 0
      && v14 <= *(_DWORD *)((char *)v11 + v13 + 80) )
    {
      if ( !v12 )
      {
        DirectComposition::CConnection::RetireFrame(
          v11,
          *((_QWORD *)this + 1),
          (const struct tagCOMPOSITION_STATS *)(v13 + 80));
        *((_BYTE *)this + 1) = 1;
      }
    }
    else
    {
      *(_DWORD *)((char *)v11 + v13 + 80) = 0;
      *(_DWORD *)((char *)v11 + *((_QWORD *)this + 5) + 84) = 0;
      *(_DWORD *)((char *)v11 + *((_QWORD *)this + 5) + 88) = 0;
      *(_QWORD *)((char *)v11 + *((_QWORD *)this + 5) + 96) = 0LL;
    }
    v15 = *((_DWORD *)this + 1);
    ++v12;
  }
  while ( v12 < v15 );
  if ( !v15 || !*(_QWORD *)(*((_QWORD *)this + 5) + 40LL) )
  {
LABEL_25:
    DirectComposition::CConnection::DiscardFrame(v11, *((_QWORD *)this + 1));
    *((_BYTE *)this + 1) = 1;
  }
  v16 = *((_DWORD *)this + 1);
  v17 = 0;
  if ( v16 )
  {
    v18 = *((_QWORD *)this + 5);
    while ( 1 )
    {
      v19 = 104LL * v17;
      if ( *(_QWORD *)(v19 + v18 + 40) )
      {
        if ( *(_DWORD *)(v19 + v18 + 56) && !*(_DWORD *)(v19 + v18 + 80) )
          break;
      }
      if ( ++v17 >= v16 )
        goto LABEL_24;
    }
  }
  else
  {
LABEL_24:
    v2 = 1;
  }
  result = v2;
  *(_BYTE *)this = v2;
  return result;
}
