/*
 * XREFs of ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C014A71E
 * Callers:
 *     ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C014A79A (-SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(CInputQueueProp *this, struct tagWND *a2)
{
  char v4; // cl
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *((_BYTE *)this + 48);
  if ( a2 == *((struct tagWND **)this + 2) )
  {
    if ( !v4 && *((_QWORD *)this + 5) )
      HMAssignmentUnlock((char *)this + 40);
    *((_QWORD *)this + 5) = a2;
    *((_BYTE *)this + 48) = 1;
  }
  else
  {
    if ( v4 )
    {
      *((_QWORD *)this + 5) = 0LL;
      *((_BYTE *)this + 48) = 0;
    }
    v5[0] = (char *)this + 40;
    v5[1] = a2;
    HMAssignmentLock(v5, 0LL);
  }
}
