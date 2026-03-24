/*
 * XREFs of ?NotifyOnChanged@CCompositionTextLine@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801BCC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionTextLine::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v6; // r8
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 80) )
  {
    *(float *)&v9 = *(float *)(a1 + 72) + *(float *)(a1 + 64);
    *((float *)&v9 + 1) = (float)(*(float *)(a1 + 76) + *(float *)(a1 + 68)) + *(float *)(a1 + 88);
    *((_QWORD *)&v9 + 1) = __PAIR64__(*((float *)&v9 + 1) + *(float *)(a1 + 96), *(float *)&v9 + *(float *)(a1 + 92));
    v6 = *(__int64 **)(a1 + 104);
    v7 = *v6;
    *(_OWORD *)(v6 + 11) = v9;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64 *))(v7 + 72))(v6, 0LL, v6);
  }
  return CResource::NotifyOnChanged(a1, a2, a3);
}
