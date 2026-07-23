/*
 * XREFs of SleepstudyHelperCreateBlockerFromGuid @ 0x14024AA40
 * Callers:
 *     SleepstudyHelper_RegisterComponentEx @ 0x1408FB5C0 (SleepstudyHelper_RegisterComponentEx.c)
 * Callees:
 *     SleepstudyHelperSetBlockerFriendlyName @ 0x14024AB40 (SleepstudyHelperSetBlockerFriendlyName.c)
 *     memset @ 0x140414300 (memset.c)
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x140616FC0 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SSHSupportAllocatePaged @ 0x1406197BC (SSHSupportAllocatePaged.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerFromGuid(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6)
{
  _DWORD *v6; // rdi
  _DWORD *Paged; // rax
  __int128 v12; // xmm1
  int v13; // ebx

  v6 = 0LL;
  if ( a1 && a2 && a3 && a4 && a5 <= 6 && a6 )
  {
    Paged = (_DWORD *)SSHSupportAllocatePaged(0x50uLL, *(_DWORD *)(a1 + 24));
    v6 = Paged;
    if ( !Paged )
      return (unsigned int)-1073741811;
    memset(Paged, 0, 0x50uLL);
    *(_QWORD *)v6 = a1;
    v6[2] = a5;
    *((_OWORD *)v6 + 1) = *a2;
    v12 = *a3;
    *((_BYTE *)v6 + 72) = 1;
    *((_OWORD *)v6 + 2) = v12;
    v13 = SleepstudyHelperSetBlockerFriendlyName(v6, a4);
    if ( v13 >= 0 )
    {
      *a6 = v6;
      return 0;
    }
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v6 )
    SleepstudyHelperDestroyBlockerBuilder(v6);
  return (unsigned int)v13;
}
