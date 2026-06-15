/*
 * XREFs of sub_18013738C @ 0x18013738C
 * Callers:
 *     sub_180137110 @ 0x180137110 (sub_180137110.c)
 * Callees:
 *     sub_18005F1A8 @ 0x18005F1A8 (sub_18005F1A8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013738C(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 56));
  v3 = 0;
  if ( *(_QWORD *)(a1 + 144) )
  {
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 72LL))(v4, *(_QWORD *)(a1 + 144));
      if ( v3 < 0 )
        goto LABEL_15;
      *(_QWORD *)(a1 + 144) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 152) )
  {
    v6 = *(_QWORD *)(a1 + 48);
    if ( v6 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 104LL))(v6, *(_QWORD *)(a1 + 152));
      if ( v3 < 0 )
        goto LABEL_15;
      *(_QWORD *)(a1 + 152) = 0LL;
    }
  }
  if ( *(_QWORD *)(a1 + 160) )
  {
    v7 = *(_QWORD *)(a1 + 48);
    if ( v7 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 88LL))(v7, *(_QWORD *)(a1 + 160));
      if ( v3 < 0 )
        goto LABEL_15;
      *(_QWORD *)(a1 + 160) = 0LL;
    }
  }
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_15:
  sub_18005F1A8(v5, (__int64)"UnregAppDepNotification result", v3);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)v3;
}
