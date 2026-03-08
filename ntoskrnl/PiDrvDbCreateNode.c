/*
 * XREFs of PiDrvDbCreateNode @ 0x14081C92C
 * Callers:
 *     PiDrvDbRegisterNode @ 0x14081C38C (PiDrvDbRegisterNode.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     KeInitializeTimerEx @ 0x140237DB0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140305660 (KeInitializeDpc.c)
 *     ExInitializeResourceLite @ 0x14030FAB0 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwCreateEvent @ 0x140412C10 (ZwCreateEvent.c)
 *     _SysCtxRegOpenKey @ 0x1406D4350 (_SysCtxRegOpenKey.c)
 *     RtlCreateUnicodeString @ 0x140747D00 (RtlCreateUnicodeString.c)
 *     ExpAllocateStringRoutine @ 0x140777DB0 (ExpAllocateStringRoutine.c)
 *     PiDrvDbDestroyNode @ 0x14096CEBC (PiDrvDbDestroyNode.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDrvDbCreateNode(PCWSTR Source, int a2, const WCHAR *a3, const WCHAR *a4, _QWORD *a5)
{
  int appended; // ebx
  __int64 Pool2; // rax
  _QWORD *v11; // rdi
  _WORD *v12; // r15
  unsigned __int16 v13; // ax
  __int64 StringRoutine; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  int v17; // eax
  _QWORD *v18; // rax
  HANDLE Handle; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF

  Handle = 0LL;
  appended = 0;
  memset(&ObjectAttributes, 0, 44);
  Pool2 = ExAllocatePool2(64LL, 520LL, 1650749520LL);
  v11 = (_QWORD *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  v12 = (_WORD *)(Pool2 + 16);
  *(_DWORD *)(Pool2 + 64) = a2;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(Pool2 + 16), Source) )
    goto LABEL_22;
  if ( a3 )
  {
    if ( !RtlCreateUnicodeString((PUNICODE_STRING)v11 + 2, a3) )
      goto LABEL_22;
  }
  else
  {
    v13 = *v12 + 38;
    *((_WORD *)v11 + 16) = 0;
    *((_WORD *)v11 + 17) = v13;
    StringRoutine = ExpAllocateStringRoutine(v13);
    v11[5] = StringRoutine;
    if ( !StringRoutine )
      goto LABEL_22;
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 2, L"\\REGISTRY\\MACHINE\\");
    if ( appended < 0 )
      goto LABEL_23;
    appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 2, Source);
    if ( appended < 0 )
      goto LABEL_23;
  }
  if ( a4 )
  {
    if ( RtlCreateUnicodeString((PUNICODE_STRING)v11 + 3, a4) )
      goto LABEL_11;
LABEL_22:
    appended = -1073741670;
    goto LABEL_23;
  }
  v15 = *v12 + 58;
  *((_WORD *)v11 + 24) = 0;
  *((_WORD *)v11 + 25) = v15;
  v16 = ExpAllocateStringRoutine(v15);
  v11[7] = v16;
  if ( !v16 )
    goto LABEL_22;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 3, L"\\SystemRoot\\System32\\config\\");
  if ( appended < 0 )
    goto LABEL_23;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)v11 + 3, Source);
  if ( appended < 0 )
    goto LABEL_23;
LABEL_11:
  if ( (v11[8] & 4) != 0 )
  {
    appended = ExInitializeResourceLite((PERESOURCE)(v11 + 11));
    if ( appended < 0 )
      goto LABEL_23;
    *((_BYTE *)v11 + 192) = 1;
    KeInitializeTimerEx((PKTIMER)(v11 + 33), NotificationTimer);
    KeInitializeDpc((PRKDPC)(v11 + 41), (PKDEFERRED_ROUTINE)PiDrvDbUnloadNodeDpcRoutine, v11);
    v11[53] = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwCreateEvent((PHANDLE)v11 + 59, 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( appended < 0 )
      goto LABEL_23;
    *((_BYTE *)v11 + 489) = 1;
    v11[60] = 0xFFFFFFFFLL;
  }
  if ( (v11[8] & 0x10) != 0 )
  {
    appended = SysCtxRegOpenKey(0LL, 0LL, v11[5], 0, 0x2000000u, (__int64)&Handle);
    if ( appended < 0
      || (appended = SysCtxRegOpenKey(
                       0LL,
                       (__int64)Handle,
                       (__int64)L"DriverDatabase",
                       0,
                       0x2000000u,
                       (__int64)(v11 + 9)),
          ZwClose(Handle),
          appended < 0) )
    {
LABEL_23:
      PiDrvDbDestroyNode(v11);
      return (unsigned int)appended;
    }
  }
  v17 = *((_DWORD *)v11 + 16);
  *((_DWORD *)v11 + 124) = 259;
  if ( (v17 & 0x40) == 0 )
  {
    v18 = (_QWORD *)qword_140C5AC68;
    if ( *(__int64 **)qword_140C5AC68 != &PiDrvDbNodeList )
      __fastfail(3u);
    *v11 = &PiDrvDbNodeList;
    v11[1] = v18;
    *v18 = v11;
    qword_140C5AC68 = (__int64)v11;
  }
  *a5 = v11;
  return (unsigned int)appended;
}
