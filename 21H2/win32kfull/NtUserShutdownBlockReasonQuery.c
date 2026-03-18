/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C0119FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C002393C (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  ULONG64 v7; // rcx
  int v8; // edi
  __int64 v9; // rdx
  char *Prop; // r15
  unsigned int *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _DWORD *v15; // rdx
  __int64 v16; // rax

  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  if ( v6 )
  {
    Prop = (char *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1u);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87LL, v9);
      goto LABEL_4;
    }
    v12 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v12 = (unsigned int *)MmUserProbeAddress;
    v13 = *v12;
    if ( (unsigned int)v13 > 0x101 )
      v13 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v13 )
        goto LABEL_3;
      v14 = v13;
      ProbeForWrite(a2, 2 * v13, 2u);
      RtlStringCchCopyW((char *)a2, v14, Prop);
    }
    v7 = MmUserProbeAddress;
    v15 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v15 = (_DWORD *)MmUserProbeAddress;
    *v15 = *v15;
    v16 = -1LL;
    do
      ++v16;
    while ( *(_WORD *)&Prop[2 * v16] );
    *a3 = v16 + 1;
    v8 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
