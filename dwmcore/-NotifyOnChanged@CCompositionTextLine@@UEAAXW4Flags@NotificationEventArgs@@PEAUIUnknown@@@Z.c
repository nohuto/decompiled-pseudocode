/*
 * XREFs of ?NotifyOnChanged@CCompositionTextLine@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180223CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionTextLine::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  float v6; // xmm1_4
  __int64 *v7; // rcx
  __int64 v8; // rax
  float v10[6]; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 80) )
  {
    v10[0] = *(float *)(a1 + 64) + *(float *)(a1 + 72);
    v10[2] = v10[0] + *(float *)(a1 + 92);
    v10[1] = (float)(*(float *)(a1 + 68) + *(float *)(a1 + 76)) + *(float *)(a1 + 88);
    v6 = v10[1] + *(float *)(a1 + 96);
    v7 = *(__int64 **)(a1 + 104);
    v8 = *v7;
    v10[3] = v6;
    *((_OWORD *)v7 + 6) = *(_OWORD *)v10;
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64 *))(v8 + 72))(v7, 0LL, v7);
  }
  return CResource::NotifyOnChanged(a1, a2, a3);
}
