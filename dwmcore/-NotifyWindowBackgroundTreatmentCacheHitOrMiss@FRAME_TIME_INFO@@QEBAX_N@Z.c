void __fastcall FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(FRAME_TIME_INFO *this, char a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)this;
  if ( a2 )
    ++*(_DWORD *)(v2 + 36);
  else
    ++*(_DWORD *)(v2 + 40);
}
