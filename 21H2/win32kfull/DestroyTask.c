/*
 * XREFs of DestroyTask @ 0x1C01E5640
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     _PostMessage @ 0x1C00A5270 (_PostMessage.c)
 */

void __fastcall DestroyTask(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // r8
  struct _KEVENT *v12; // rcx
  __int64 *v13; // rcx
  __int64 *v14; // rax
  int *v15; // rcx
  struct _KEVENT *v16; // rcx
  char v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 360);
  v4 = *(_QWORD *)(a2 + 616);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v17);
  if ( !v4 )
    goto LABEL_21;
  if ( (*(_BYTE *)(v4 + 34) & 1) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 464) + 168LL);
    if ( v7 )
      PostMessage(v7, 1114, 0, 0);
  }
  v8 = *(_QWORD **)(v4 + 24);
  if ( v8 )
  {
    v9 = (_QWORD *)gpwtiFirst;
    v10 = (_QWORD *)gpwtiFirst;
    if ( (_QWORD *)gpwtiFirst != v8 )
    {
      do
      {
        v11 = (_QWORD *)*v10;
        if ( !*v10 )
          break;
        v9 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v11 != v8 );
    }
    if ( (_QWORD *)*v9 == v8 )
    {
      *v9 = *v8;
      v8 = *(_QWORD **)(v4 + 24);
    }
    v12 = (struct _KEVENT *)v8[4];
    if ( v12 != (struct _KEVENT *)-1LL )
    {
      if ( !v12 )
      {
LABEL_15:
        Win32FreePool(*(_QWORD *)(v4 + 24));
        goto LABEL_16;
      }
      KeSetEvent(v12, 1, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v4 + 24) + 32LL));
      v8 = *(_QWORD **)(v4 + 24);
    }
    v8[4] = 0LL;
    goto LABEL_15;
  }
LABEL_16:
  *(_DWORD *)(gpsi + 4972LL) -= *(_DWORD *)(v4 + 8);
  v13 = (__int64 *)(v2 + 16);
  v14 = *(__int64 **)(v2 + 16);
  if ( v14 )
  {
    while ( 1 )
    {
      v5 = *v14;
      if ( v14 == (__int64 *)v4 )
        break;
      v13 = v14;
      v14 = (__int64 *)*v14;
      if ( !v5 )
        goto LABEL_21;
    }
    *v13 = v5;
    Win32FreePool(v4);
    *(_QWORD *)(a2 + 616) = 0LL;
  }
LABEL_21:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v17, v5, v6);
  if ( *(_QWORD *)(v2 + 8) == a2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( a2 == *(_QWORD *)(v2 + 56) )
    {
      *(_QWORD *)(v2 + 56) = 0LL;
      --*(_DWORD *)(v2 + 64);
    }
    v15 = *(int **)(v2 + 16);
    if ( v15 )
    {
      while ( v15[2] <= 0 )
      {
        v15 = *(int **)v15;
        if ( !v15 )
        {
          v16 = *(struct _KEVENT **)(v2 + 32);
          goto LABEL_29;
        }
      }
      v16 = *(struct _KEVENT **)(*((_QWORD *)v15 + 2) + 736LL);
LABEL_29:
      KeSetEvent(v16, 1, 0);
    }
  }
}
