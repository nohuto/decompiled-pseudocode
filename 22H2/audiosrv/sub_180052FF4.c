/*
 * XREFs of sub_180052FF4 @ 0x180052FF4
 * Callers:
 *     sub_1800533B8 @ 0x1800533B8 (sub_1800533B8.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052E04 @ 0x180052E04 (sub_180052E04.c)
 *     sub_18005319C @ 0x18005319C (sub_18005319C.c)
 *     sub_1800532DC @ 0x1800532DC (sub_1800532DC.c)
 *     sub_18005334C @ 0x18005334C (sub_18005334C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800F665C @ 0x1800F665C (sub_1800F665C.c)
 *     sub_1800F6770 @ 0x1800F6770 (sub_1800F6770.c)
 *     sub_1800F6794 @ 0x1800F6794 (sub_1800F6794.c)
 *     sub_1800F6840 @ 0x1800F6840 (sub_1800F6840.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180052FF4(struct _FILETIME a1)
{
  unsigned int v1; // ebx
  int PersistedStateLocation; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  int v9; // edi
  _QWORD v11[8]; // [rsp+40h] [rbp-40h] BYREF
  void *retaddr; // [rsp+98h] [rbp+18h]
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A0h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+A8h] [rbp+28h]

  SystemTimeAsFileTime = a1;
  EnterCriticalSection(&stru_18019EF98);
  v14 = &stru_18019EF98;
  v1 = 0;
  if ( !byte_18019EF90 )
  {
    PersistedStateLocation = RtlGetPersistedStateLocation(
                               L"AudioJournal",
                               0LL,
                               L"SOFTWARE\\Microsoft\\Multimedia\\Audio\\Journal",
                               0LL,
                               &word_18019F528,
                               520,
                               0LL);
    if ( PersistedStateLocation < 0 )
    {
      v1 = sub_1800F6770(
             retaddr,
             83LL,
             "avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
             (unsigned int)PersistedStateLocation);
    }
    else
    {
      memset(&unk_18019F078, 0, 0x4B0uLL);
      dword_18019F4F0 = 100;
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      qword_18019F070 = (__int64)SystemTimeAsFileTime;
      if ( (unsigned int)sub_18005334C() == 1 )
      {
        v5 = *(_QWORD *)sub_1800532DC(v4, &SystemTimeAsFileTime);
        qword_18019F070 = v5;
        if ( !v5 )
        {
          GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
          qword_18019F070 = (__int64)SystemTimeAsFileTime;
          sub_1800F6840(&byte_18019EF90, L"LastLogTime", 11LL, &qword_18019F070, 8);
        }
        if ( (int)sub_18005319C(v5, &unk_18019F078) < 0 )
          sub_1800F6794(&byte_18019EF90, &unk_18019F078);
        if ( (int)sub_18005319C(v6, &unk_18019F2D0) < 0 )
          sub_1800F6794(&byte_18019EF90, &unk_18019F2D0);
        if ( (int)sub_18005319C(v7, &unk_18019F460) < 0 )
          sub_1800F6794(&byte_18019EF90, &unk_18019F460);
      }
      else
      {
        LOBYTE(v3) = 1;
        sub_1800F665C(&byte_18019EF90, v3);
      }
      v11[0] = off_180154B68;
      v11[1] = &byte_18019EF90;
      v11[7] = v11;
      v8 = sub_180052E04(
             (__int64)&unk_18019EFC0,
             180000LL,
             0xDBBA0u,
             (__int64)v11,
             (struct _TP_TIMER ***)&qword_18019F068);
      v9 = v8;
      if ( v8 < 0 )
      {
        sub_18004BD84((int)retaddr, 124, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp", v8);
        v1 = v9;
      }
      else
      {
        byte_18019EF90 = 1;
      }
    }
  }
  LeaveCriticalSection(&stru_18019EF98);
  return v1;
}
