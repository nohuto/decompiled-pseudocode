/*
 * XREFs of MiLeapPrefetch @ 0x14062F4D4
 * Callers:
 *     MiInPagePageTable @ 0x140345FA0 (MiInPagePageTable.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 *     MiPrefetchJumpVad @ 0x14062FBB8 (MiPrefetchJumpVad.c)
 * Callees:
 *     MiUnlockVadTree @ 0x140330EC8 (MiUnlockVadTree.c)
 *     MiLockVadTree @ 0x1403334B4 (MiLockVadTree.c)
 */

__int64 __fastcall MiLeapPrefetch(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rsi
  unsigned __int64 v3; // rbx
  _QWORD *v4; // r15
  unsigned int v5; // edi
  unsigned __int64 *v6; // r14
  unsigned __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rdx
  char Queue; // al
  _KPROCESS *Process; // rbp
  KIRQL v11; // r9
  unsigned __int64 i; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  _QWORD **v16; // rax
  unsigned __int64 v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // r8

  v2 = a1 + 3;
  v3 = a2;
  v4 = a1 + 1;
  v5 = 1;
  v6 = a1 + 4;
  if ( a2 )
    goto LABEL_27;
  v7 = *(_QWORD *)(*v4 + 16LL * *v2) + (*v6 << 12);
  if ( v7 <= 0x7FFFFFFEFFFFLL )
  {
    CurrentThread = KeGetCurrentThread();
    Queue = (char)CurrentThread[1].Queue;
    if ( Queue >= 0 && ((unsigned __int8)~(BYTE1(CurrentThread[1].Queue) >> 6) & ((Queue & 3) == 0)) != 0 )
    {
      Process = CurrentThread->ApcState.Process;
      v11 = MiLockVadTree(0);
      if ( (Process[1].DirectoryTableBase & 0x2000000000LL) == 0 )
      {
        i = *(_QWORD *)&Process[1].Spare2[15];
        if ( i )
        {
          v13 = v7 >> 12;
          while ( 1 )
          {
            v14 = *(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32);
            if ( v13 < v14 )
            {
              v15 = *(_QWORD *)i;
            }
            else
            {
              if ( v13 <= (*(unsigned int *)(i + 28) | ((unsigned __int64)*(unsigned __int8 *)(i + 33) << 32)) )
                goto LABEL_31;
              v15 = *(_QWORD *)(i + 8);
            }
            if ( !v15 )
              break;
            i = v15;
          }
          if ( v14 < v13 )
          {
            v16 = *(_QWORD ***)(i + 8);
            v17 = i;
            if ( v16 )
            {
              v18 = *v16;
              for ( i = *(_QWORD *)(i + 8); v18; v18 = (_QWORD *)*v18 )
                i = (unsigned __int64)v18;
            }
            else
            {
              while ( 1 )
              {
                i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( !i || *(_QWORD *)i == v17 )
                  break;
                v17 = i;
              }
            }
            if ( !i )
            {
              MiUnlockVadTree(0, v11);
LABEL_24:
              ++*v2;
              *v6 = 0LL;
              return v5;
            }
          }
          v3 = (*(unsigned int *)(i + 24) | ((unsigned __int64)*(unsigned __int8 *)(i + 32) << 32)) << 12;
          MiUnlockVadTree(0, v11);
LABEL_27:
          v20 = (_QWORD *)(*v4 + 16LL * *v2);
          v21 = *v20 & 0xFFFFFFFFFFFFF000uLL;
          if ( v3 >= v21 && v3 < v21 + (((*(_DWORD *)v20 & 0xFFF) + v20[1] + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
          {
            *v6 = (v3 - v21) >> 12;
            return v5;
          }
          goto LABEL_24;
        }
      }
      v5 = 0;
LABEL_31:
      MiUnlockVadTree(0, v11);
    }
  }
  return v5;
}
