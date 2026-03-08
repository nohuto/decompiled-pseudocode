/*
 * XREFs of ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C0203030
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C0203030 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 * Callees:
 *     ?UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z @ 0x1C0203030 (-UnlockNotifyWindow@@YAXPEAUtagMENU@@@Z.c)
 */

void __fastcall UnlockNotifyWindow(struct tagMENU *a1)
{
  int v2; // ebx
  struct tagMENU **v3; // rdi

  v2 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 44LL);
  if ( v2 )
  {
    v3 = (struct tagMENU **)(*((_QWORD *)a1 + 11) + 16LL);
    do
    {
      --v2;
      if ( *v3 )
        UnlockNotifyWindow(*v3);
      v3 += 12;
    }
    while ( v2 );
  }
  HMAssignmentUnlock((char *)a1 + 80);
}
