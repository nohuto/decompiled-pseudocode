void __fastcall DoQueuedSyncPaint(struct tagWND *a1, unsigned int a2, struct tagTHREADINFO *a3)
{
  unsigned __int64 v3; // rdi
  struct tagTHREADINFO *v5; // rdx
  __int64 v7; // rcx
  __int64 i; // rbx
  _QWORD *v9; // rdx
  _QWORD *v10; // rax

  v3 = a2;
  v5 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 2);
  if ( v5 == a3 )
    goto LABEL_25;
  v7 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v7 + 17) & 0xA) != 0xA || (*(_BYTE *)(v7 + 31) & 0x10) == 0 )
    goto LABEL_25;
  v9 = (_QWORD *)((char *)v5 + 520);
  v10 = (_QWORD *)*v9;
  if ( (_QWORD *)*v9 == v9 )
  {
LABEL_16:
    QueueNotifyTransformableMessage(a1, 0x88u, v3, 0LL, 1, 0);
    SetOrClrWF(1, (__int64 *)a1, 0x280u, 1);
  }
  else
  {
    while ( *((_DWORD *)v10 + 22) != 136 || (struct tagWND *)v10[12] != a1 )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        goto LABEL_16;
    }
  }
  if ( a1 == (struct tagWND *)GetDesktopWindow((__int64)a1) )
  {
LABEL_25:
    if ( (v3 & 0x20) != 0 || (v3 & 4) != 0 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
    {
      for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(i + 40) + 31LL) & 0x40) == 0 || a3 == *(struct tagTHREADINFO **)(i + 16) )
          DoQueuedSyncPaint((struct tagWND *)i, v3, a3);
      }
    }
  }
}
