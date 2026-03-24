/*
 * XREFs of DeleteProperties @ 0x1C0086040
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     UserGlobalAtomTableCallout @ 0x1C008615C (UserGlobalAtomTableCallout.c)
 *     ??0?$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ @ 0x1C0086274 (--0-$CLockDomainExclusive@VDLT_JOB@@@@QEAA@XZ.c)
 *     UserDeleteAtomFromAtomTable @ 0x1C00862C0 (UserDeleteAtomFromAtomTable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DeleteProperties(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // esi
  __int64 v4; // rbx
  __int16 v5; // cx
  __int64 v6; // rcx
  __int64 v7; // rbp
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = *(_DWORD *)(v2 + 4);
  v4 = v2 + 8;
  if ( v3 )
  {
    do
    {
      v5 = *(_WORD *)(v4 + 10);
      if ( (v5 & 1) != 0 )
      {
        if ( (v5 & 0x8001) == 0x8001 )
        {
          (***(void (__fastcall ****)(_QWORD))v4)(*(_QWORD *)v4);
        }
        else if ( (v5 & 8) != 0 )
        {
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)(a1 + 24) + 128LL), 0, *(PVOID *)v4);
        }
        else if ( (v5 & 4) == 0 )
        {
          Win32FreePool(*(_QWORD *)v4);
        }
      }
      CLockDomainExclusive<DLT_JOB>::CLockDomainExclusive<DLT_JOB>(v8);
      v7 = UserGlobalAtomTableCallout();
      if ( (*(_BYTE *)(v4 + 10) & 2) != 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 820) & 0x4000000) == 0
        && v7 )
      {
        UserDeleteAtomFromAtomTable(v7, *(unsigned __int16 *)(v4 + 8));
      }
      v4 += 16LL;
      --v3;
    }
    while ( v3 );
    v2 = *(_QWORD *)(a1 + 144);
  }
  Win32FreePool(v2);
  *(_QWORD *)(a1 + 144) = 0LL;
}
