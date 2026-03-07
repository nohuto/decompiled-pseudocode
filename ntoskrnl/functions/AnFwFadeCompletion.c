void AnFwFadeCompletion()
{
  if ( (dword_140C0E3B0 & 0xC00) != 0xC00 )
  {
    LogFwStat(0LL, 7LL, 0LL);
    BgpFwReleaseLock();
    KeWaitForSingleObject(&stru_140D16700, Executive, 0, 0, 0LL);
    BgpFwAcquireLock();
    if ( qword_140C0B508 )
    {
      BgpGxRectangleDestroy(qword_140C0B508);
      qword_140C0B508 = 0LL;
    }
    if ( qword_140C0B538 )
    {
      BgpGxRectangleDestroy(qword_140C0B538);
      qword_140C0B538 = 0LL;
    }
    if ( qword_140C0B540 )
    {
      BgpGxRectangleDestroy(qword_140C0B540);
      qword_140C0B540 = 0LL;
    }
    if ( qword_140C0B548 )
    {
      BgpGxRectangleDestroy(qword_140C0B548);
      qword_140C0B548 = 0LL;
    }
    if ( qword_140C0B578 )
    {
      BgpGxRectangleDestroy(qword_140C0B578);
      qword_140C0B578 = 0LL;
    }
    if ( qword_140C0B580 )
    {
      BgpGxRectangleDestroy(qword_140C0B580);
      qword_140C0B580 = 0LL;
    }
  }
}
