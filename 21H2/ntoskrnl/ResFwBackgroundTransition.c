/*
 * XREFs of ResFwBackgroundTransition @ 0x140AADBBC
 * Callers:
 *     BgpFwLibraryEnable @ 0x1403AA8D8 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x140AAB07C (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x140AAE918 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140AAE9F4 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ResFwpPageOutBackground @ 0x140AAB7D4 (ResFwpPageOutBackground.c)
 *     ResFwpPageInBackground @ 0x140AADC00 (ResFwpPageInBackground.c)
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
      if ( v1 == 1 && (dword_140C0DF90 & 0xC00) != 0xC00 )
      {
        v2 = qword_140C0DFD8;
        if ( qword_140C0DFD8 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C0DFD8, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140C0DFE0;
        if ( qword_140C0DFE0 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140C0DFE0, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v3, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(dword_140C0DFE8) = 0;
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
