/*
 * XREFs of NtUserShutdownBlockReasonQuery @ 0x1C00EE360
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C010A9B4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall NtUserShutdownBlockReasonQuery(__int64 a1, volatile void *a2, unsigned int *a3)
{
  __int64 v6; // rax
  ULONG64 v7; // rcx
  int v8; // edi
  const unsigned __int16 *Prop; // r15
  unsigned int *v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _DWORD *v14; // rdx
  __int64 v15; // rax

  EnterSharedCrit(a1, a2, a3);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  if ( v6 )
  {
    Prop = (const unsigned __int16 *)GetProp(v6, (unsigned __int16)gatomShutdownBlockingReason, 1u);
    if ( !Prop )
    {
LABEL_3:
      UserSetLastError(87);
      goto LABEL_4;
    }
    v11 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v11 = (unsigned int *)MmUserProbeAddress;
    v12 = *v11;
    if ( (unsigned int)v12 > 0x101 )
      v12 = 257LL;
    if ( a2 )
    {
      if ( !(_DWORD)v12 )
        goto LABEL_3;
      v13 = v12;
      ProbeForWrite(a2, 2 * v12, 2u);
      RtlStringCchCopyW((unsigned __int16 *)a2, v13, Prop);
    }
    v7 = MmUserProbeAddress;
    v14 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v14 = (_DWORD *)MmUserProbeAddress;
    *v14 = *v14;
    v15 = -1LL;
    do
      ++v15;
    while ( Prop[v15] );
    *a3 = v15 + 1;
    v8 = 1;
  }
LABEL_4:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
