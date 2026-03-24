/*
 * XREFs of ResFwBackgroundTransition @ 0x1409F3408
 * Callers:
 *     BgpFwLibraryEnable @ 0x14039C888 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x1409F107C (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x1409F3F0C (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x1409F3FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x1409F1470 (ResFwpPageOutBackground.c)
 *     ResFwpPageInBackground @ 0x1409F344C (ResFwpPageInBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rcx
  void *v5; // rcx
  PVOID v6; // rbx

  if ( a1 )
  {
    v4 = (unsigned int)(a1 - 1);
    if ( (_DWORD)v4 )
    {
      if ( (_DWORD)v4 == 1 && (dword_140C134F0 & 0xC00) != 0xC00 )
      {
        v5 = qword_140C13538;
        if ( qword_140C13538 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C13538, 0LL);
          BgpFwFreeMemory((__int64)v5, a2, a3, a4);
        }
        v6 = qword_140C13540;
        if ( qword_140C13540 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C13540, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v6, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(Size) = 0;
      }
    }
    else
    {
      ResFwpPageOutBackground(v4, a2, a3, a4);
    }
  }
  else
  {
    ResFwpPageInBackground();
  }
}
