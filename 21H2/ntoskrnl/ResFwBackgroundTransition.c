/*
 * XREFs of ResFwBackgroundTransition @ 0x1409F4408
 * Callers:
 *     BgpFwLibraryEnable @ 0x14039C9D8 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x1409F207C (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x1409F4F0C (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x1409F4FE8 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BEB0 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039C3F8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C448 (BgpFwAcquireLock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x1409F2470 (ResFwpPageOutBackground.c)
 *     ResFwpPageInBackground @ 0x1409F444C (ResFwpPageInBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_140C134F0 & 0xC00) != 0xC00 )
      {
        v2 = qword_140C13538;
        if ( qword_140C13538 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C13538, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140C13540;
        if ( qword_140C13540 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C13540, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v3, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(Size) = 0;
      }
    }
    else
    {
      ResFwpPageOutBackground();
    }
  }
  else
  {
    ResFwpPageInBackground();
  }
}
