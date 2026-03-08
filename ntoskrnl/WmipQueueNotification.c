/*
 * XREFs of WmipQueueNotification @ 0x1409DE654
 * Callers:
 *     WmipWriteWnodeToObject @ 0x1405F97A4 (WmipWriteWnodeToObject.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQueueNotification(PRKEVENT Event, char **a2, unsigned int *a3)
{
  char *v3; // rbp
  unsigned int v5; // esi
  unsigned int v6; // ebx
  char *v7; // r15
  unsigned int v9; // edx
  struct _KEVENT *v10; // r12
  unsigned int v11; // r14d
  char *Pool2; // rax
  void *v13; // rcx
  char *v14; // rcx
  unsigned int v17; // [rsp+68h] [rbp+10h]

  v3 = *a2;
  v5 = *((_DWORD *)a2 + 4);
  v6 = 0;
  v7 = a2[1];
  v9 = *a3;
  v10 = Event;
  v17 = *a3;
  v11 = (*((_DWORD *)a2 + 5) + *a3 + 7) & 0xFFFFFFF8;
  if ( !v3 || v11 > v5 )
  {
    if ( v11 > 0x80000 )
      goto LABEL_7;
    if ( v11 > v5 )
      v5 = (v11 + 0x3FFF) & 0xFFFFC000;
    Pool2 = (char *)ExAllocatePool2(256LL, v5, 1885957463LL);
    v3 = Pool2;
    if ( !Pool2 )
    {
LABEL_7:
      ++*((_DWORD *)a2 + 6);
      return (unsigned int)-1073741670;
    }
    memset(Pool2, 0, v5);
    if ( *a2 )
    {
      memmove(v3, *a2, *((unsigned int *)a2 + 5));
      v13 = *a2;
      v7 += v3 - *a2;
      a2[1] = v7;
      ExFreePoolWithTag(v13, 0);
    }
    v9 = v17;
    v10 = Event;
    *a2 = v3;
    *((_DWORD *)a2 + 4) = v5;
  }
  v14 = &v3[*((unsigned int *)a2 + 5)];
  if ( v7 )
    *((_DWORD *)v7 + 3) = (_DWORD)v14 - (_DWORD)v7;
  a2[1] = v14;
  *((_DWORD *)a2 + 5) = v11;
  memmove(v14, a3, v9);
  KeSetEvent(v10, 0, 0);
  return v6;
}
