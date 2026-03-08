/*
 * XREFs of ?CheckAndUnRegisterDefaultAnimations@CInteractionTracker@@AEAA_NPEAUIUnknown@@@Z @ 0x18022E5DC
 * Callers:
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18022FD00 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

char __fastcall CInteractionTracker::CheckAndUnRegisterDefaultAnimations(
        CInteractionTracker *this,
        struct IUnknown *a2)
{
  char *v2; // rbx
  char v5; // di
  struct CResource *v6; // rdx
  _QWORD v8[2]; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+30h] [rbp-8h] BYREF

  v2 = (char *)v8;
  v8[0] = *((_QWORD *)this + 58);
  v8[1] = *((_QWORD *)this + 59);
  v5 = 0;
  do
  {
    v6 = *(struct CResource **)v2;
    if ( *(_QWORD *)v2 && v6 == (struct CResource *)a2 )
    {
      v5 = 1;
      CResource::UnRegisterNotifierInternal(this, v6);
      *(_BYTE *)(*(_QWORD *)v2 + 216LL) &= ~1u;
    }
    v2 += 8;
  }
  while ( v2 != &v9 );
  return v5;
}
