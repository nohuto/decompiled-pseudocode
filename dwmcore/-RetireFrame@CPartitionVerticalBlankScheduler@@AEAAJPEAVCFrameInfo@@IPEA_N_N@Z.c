__int64 __fastcall CPartitionVerticalBlankScheduler::RetireFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3,
        bool *a4,
        bool a5)
{
  struct CFrameInfo *v7; // rbx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  int v11; // r9d
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  char v15; // si
  unsigned int i; // esi
  __int64 v18; // rcx
  unsigned __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 QuadPart; // [rsp+88h] [rbp+20h] BYREF

  v7 = a2;
  *a4 = 0;
  if ( !*((_BYTE *)a2 + 169) )
    goto LABEL_19;
  if ( !*((_BYTE *)a2 + 174) )
  {
    v9 = *((_QWORD *)this + 526);
    if ( *(_QWORD *)(v9 + 72) - *((_QWORD *)a2 + 10) > g_qpcFrequency.QuadPart )
    {
      LOBYTE(a2) = 1;
      goto LABEL_5;
    }
    LOBYTE(a2) = 0;
    if ( *((_DWORD *)v7 + 8) <= *(_DWORD *)(v9 + 112) )
    {
LABEL_5:
      *((_BYTE *)v7 + 174) = 1;
      v10 = *(_QWORD *)(*((_QWORD *)this + 526) + 120LL);
      if ( v10 <= *((_QWORD *)v7 + 11) + 1LL )
        v10 = *((_QWORD *)v7 + 11) + 1LL;
      *((_QWORD *)v7 + 13) = v10;
      v11 = *(_DWORD *)(*((_QWORD *)this + 526) + 116LL);
      *((_DWORD *)v7 + 14) = v11;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xqxxqq_EventWriteTransfer(
          *(unsigned __int8 *)(*((_QWORD *)this + 526) + 224LL),
          (_DWORD)a2,
          *(_QWORD *)v7,
          v11,
          v11,
          v10,
          (char)a2,
          *(_BYTE *)(*((_QWORD *)this + 526) + 224LL));
      goto LABEL_9;
    }
    *((_BYTE *)v7 + 174) = 0;
  }
LABEL_9:
  if ( *((_BYTE *)v7 + 174) || a5 )
  {
    v12 = *((_QWORD *)v7 + 13);
    v13 = *((_QWORD *)v7 + 11) + 1LL;
    *((_BYTE *)v7 + 174) = 1;
    *((_BYTE *)v7 + 170) = 1;
    if ( v12 <= v13 )
      v12 = v13;
    *((_QWORD *)v7 + 12) = v12;
    if ( *(_QWORD *)v7 )
    {
      v14 = *((_QWORD *)this + 526);
      v19 = *(_QWORD *)(v14 + 240);
      QuadPart = g_qpcFrequency.QuadPart;
      if ( *((_BYTE *)v7 + 172) )
      {
        if ( *(_BYTE *)(v14 + 172) )
        {
          v15 = 0;
          if ( *((_DWORD *)v7 + 14) > *((_DWORD *)v7 + 12) )
          {
            v15 = 1;
            CScheduleStatistics::TraceGlitch(
              2 - (*(_BYTE *)(*((_QWORD *)g_pComposition + 27) + 577LL) != 0),
              v7,
              &QuadPart,
              &v19);
          }
          if ( v15 )
          {
            ++dword_1803E2A28;
            if ( byte_1803E2B88 )
              ++dword_1803E2A04;
            if ( byte_1803E2B89 )
              ++dword_1803E2A00;
            ++*((_QWORD *)this + 578);
          }
        }
      }
    }
    *((_DWORD *)this + 1051) = a3;
    CPartitionVerticalBlankScheduler::CheckAndNotifyAboutLongFrames(this);
  }
LABEL_19:
  if ( *((_BYTE *)v7 + 170) || !*((_BYTE *)v7 + 169) )
  {
    for ( i = 0; i < *((_DWORD *)v7 + 50); ++i )
    {
      v18 = *(_QWORD *)(*((_QWORD *)v7 + 22) + 8LL * i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 40LL))(v18);
    }
    *((_DWORD *)v7 + 50) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)v7 + 176, 8LL);
    *a4 = 1;
  }
  return 0LL;
}
