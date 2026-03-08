/*
 * XREFs of ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800F6FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CCompositionLight::NotifyOnChanged(__int64 a1, unsigned int a2, __int64 a3)
{
  char v3; // si
  char v7; // al
  _BYTE *v8; // rcx

  v3 = 0;
  if ( a2 == 11 || a2 == 1 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 256LL))(a1);
    v8 = (_BYTE *)(a1 + 168);
    if ( !v7 || !*v8 )
      v3 = 1;
    *v8 = v7;
    if ( v3 )
      goto LABEL_5;
  }
  else if ( a2 == 5 )
  {
LABEL_5:
    CResource::NotifyOnChanged(a1, a2, a3);
  }
}
