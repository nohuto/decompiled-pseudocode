/*
 * XREFs of WmipCopyFromEventQueues @ 0x1409DD5AC
 * Callers:
 *     WmipReceiveNotifications @ 0x1402F642C (WmipReceiveNotifications.c)
 * Callees:
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

LONG __fastcall WmipCopyFromEventQueues(
        struct _KEVENT **a1,
        unsigned int a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        char a7)
{
  __int64 v7; // rsi
  char *v8; // r11
  struct _KEVENT **v9; // r14
  struct _KEVENT **v10; // r8
  __int64 i; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax
  unsigned int v17; // ecx
  int v18; // r12d
  void *v19; // r13
  __int64 *v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r15
  unsigned int *v23; // rdi
  size_t v24; // r8
  unsigned int v25; // ebx
  __int64 v26; // rax
  struct _KEVENT *v27; // rdi
  LONG result; // eax
  __int64 v29; // rdi
  struct _KEVENT *v30; // rsi
  unsigned __int64 v31; // rbx
  _DWORD *v32; // [rsp+80h] [rbp+18h]

  v32 = a3;
  v7 = a2;
  v8 = (char *)a3;
  v9 = a1;
  if ( a2 )
  {
    v10 = a1 + 1;
    for ( i = a2; i; --i )
    {
      v12 = (__int64)*(v10 - 1);
      if ( a7 )
      {
        v13 = *(_QWORD *)(v12 + 96);
        if ( !v13 || !*(_DWORD *)(v12 + 116) )
          goto LABEL_10;
        *v10 = (struct _KEVENT *)v13;
        *(_WORD *)(v13 + 10) = 0;
        LODWORD((*v10)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v12 + 120) << 16;
        *(_DWORD *)(v12 + 120) = 0;
      }
      else
      {
        v14 = *(_QWORD *)(v12 + 128);
        if ( !v14 || !*(_DWORD *)(v12 + 148) )
        {
LABEL_10:
          *v10 = 0LL;
          goto LABEL_11;
        }
        *v10 = (struct _KEVENT *)v14;
        *(_WORD *)(v14 + 10) = 0;
        LODWORD((*v10)->Header.WaitListHead.Flink) |= *(unsigned __int16 *)(v12 + 152) << 16;
        *(_DWORD *)(v12 + 152) = 0;
      }
LABEL_11:
      v10 += 2;
    }
  }
  v15 = -1;
  v16 = 0x7FFFFFFFFFFFFFFFLL;
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      v20 = (__int64 *)(v9 + 1);
      do
      {
        v21 = *v20;
        if ( *v20 && *(_QWORD *)(v21 + 16) < v16 )
        {
          v16 = *(_QWORD *)(v21 + 16);
          v15 = v17;
        }
        ++v17;
        v20 += 2;
      }
      while ( v17 < (unsigned int)v7 );
      if ( v15 == -1 )
        break;
      v22 = 2LL * v15;
      v19 = v8;
      v23 = (unsigned int *)v9[2 * v15 + 1];
      v24 = *v23;
      v25 = (v24 + 7) & 0xFFFFFFF8;
      memmove(v8, v23, v24);
      v18 += v25;
      v32[3] = v25;
      v8 = (char *)v32 + v25;
      v26 = v23[3];
      v32 = v8;
      if ( (_DWORD)v26 )
        v27 = (struct _KEVENT *)((char *)v23 + v26);
      else
        v27 = 0LL;
      v15 = -1;
      v9[v22 + 1] = v27;
      v16 = 0x7FFFFFFFFFFFFFFFLL;
      v17 = 0;
    }
  }
  *a6 = v19;
  result = (int)a5;
  *a5 = v18;
  if ( (_DWORD)v7 )
  {
    v29 = v7;
    do
    {
      v30 = *v9;
      v31 = (unsigned __int64)&(*v9)[5].Header.WaitListHead + (-(__int64)(a7 != 0) & 0xFFFFFFFFFFFFFFE0uLL);
      if ( *(_QWORD *)v31 )
      {
        ExFreePoolWithTag(*(PVOID *)v31, 0);
        *(_QWORD *)v31 = 0LL;
        *(_DWORD *)(v31 + 20) = 0;
        *(_QWORD *)(v31 + 8) = 0LL;
      }
      result = KeResetEvent(v30);
      v9 += 2;
      --v29;
    }
    while ( v29 );
  }
  return result;
}
