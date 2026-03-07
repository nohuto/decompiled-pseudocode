__int64 __fastcall VidSchResumeSchedulerForSource(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (_DWORD)a2 )
    return VidSchiResumeFlipQueues(a1, a2);
  return result;
}
