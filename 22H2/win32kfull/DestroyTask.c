/*
 * XREFs of DestroyTask @ 0x1C01EA410
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069A50 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069AAC (--1UserAtomicCheck@@QEAA@XZ.c)
 */

void __fastcall DestroyTask(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // r8
  struct _KEVENT *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int *v14; // rcx
  struct _KEVENT *v15; // rcx
  char v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 360);
  v4 = *(_QWORD *)(a2 + 616);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  if ( !v4 )
    goto LABEL_21;
  if ( (*(_BYTE *)(v4 + 34) & 1) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a2 + 464) + 168LL);
    if ( v5 )
      PostMessage(v5, 1114, 0, 0);
  }
  v6 = *(_QWORD **)(v4 + 24);
  if ( v6 )
  {
    v7 = (_QWORD *)gpwtiFirst;
    v8 = (_QWORD *)gpwtiFirst;
    if ( (_QWORD *)gpwtiFirst != v6 )
    {
      do
      {
        v9 = (_QWORD *)*v8;
        if ( !*v8 )
          break;
        v7 = v8;
        v8 = (_QWORD *)*v8;
      }
      while ( v9 != v6 );
    }
    if ( (_QWORD *)*v7 == v6 )
    {
      *v7 = *v6;
      v6 = *(_QWORD **)(v4 + 24);
    }
    v10 = (struct _KEVENT *)v6[4];
    if ( v10 != (struct _KEVENT *)-1LL )
    {
      if ( !v10 )
      {
LABEL_15:
        Win32FreePool(*(void **)(v4 + 24));
        goto LABEL_16;
      }
      KeSetEvent(v10, 1, 0);
      ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(v4 + 24) + 32LL));
      v6 = *(_QWORD **)(v4 + 24);
    }
    v6[4] = 0LL;
    goto LABEL_15;
  }
LABEL_16:
  *(_DWORD *)(gpsi + 4972LL) -= *(_DWORD *)(v4 + 8);
  v11 = (_QWORD *)(v2 + 16);
  v12 = *(_QWORD **)(v2 + 16);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *v12;
      if ( v12 == (_QWORD *)v4 )
        break;
      v11 = v12;
      v12 = (_QWORD *)*v12;
      if ( !v13 )
        goto LABEL_21;
    }
    *v11 = v13;
    Win32FreePool((void *)v4);
    *(_QWORD *)(a2 + 616) = 0LL;
  }
LABEL_21:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  if ( *(_QWORD *)(v2 + 8) == a2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    if ( a2 == *(_QWORD *)(v2 + 56) )
    {
      *(_QWORD *)(v2 + 56) = 0LL;
      --*(_DWORD *)(v2 + 64);
    }
    v14 = *(int **)(v2 + 16);
    if ( v14 )
    {
      while ( v14[2] <= 0 )
      {
        v14 = *(int **)v14;
        if ( !v14 )
        {
          v15 = *(struct _KEVENT **)(v2 + 32);
          goto LABEL_29;
        }
      }
      v15 = *(struct _KEVENT **)(*((_QWORD *)v14 + 2) + 736LL);
LABEL_29:
      KeSetEvent(v15, 1, 0);
    }
  }
}
