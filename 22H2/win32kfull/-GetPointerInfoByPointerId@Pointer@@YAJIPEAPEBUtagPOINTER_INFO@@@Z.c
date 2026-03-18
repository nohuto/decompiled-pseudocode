/*
 * XREFs of ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0227D10
 * Callers:
 *     ?ValidatePointer@HideInkCursorProvider@@AEBAJI@Z @ 0x1C0242B9C (-ValidatePointer@HideInkCursorProvider@@AEBAJI@Z.c)
 *     ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C02437C0 (-GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z.c)
 *     ?ValidatePointer@InkDevice@@AEBAJI@Z @ 0x1C02449A0 (-ValidatePointer@InkDevice@@AEBAJI@Z.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0157706 (-GetPointerInfoByPointerMsgId@Pointer@@YAJ_KPEAPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C5A6C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall Pointer::GetPointerInfoByPointerId(
        Pointer *this,
        const struct tagPOINTER_INFO **a2,
        const struct tagPOINTER_INFO **a3,
        __int64 a4)
{
  __int16 v5; // bx
  struct tagTHREADINFO *v6; // rax
  struct _LIST_ENTRY *ThreadPointerData; // rax
  const struct tagPOINTER_INFO **v8; // r8
  unsigned int v10; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v5 = (__int16)this;
  v6 = PtiCurrentShared((__int64)this, (__int64)a2, (__int64)a3, a4);
  ThreadPointerData = GetThreadPointerData((struct _LIST_ENTRY *)((char *)v6 + 1128), v5, &v10, 0LL);
  if ( ThreadPointerData )
    return Pointer::GetPointerInfoByPointerMsgId((Pointer *)ThreadPointerData, a2, v8);
  else
    return 3221225485LL;
}
