__int64 __fastcall xxxDoSyncPaint(struct tagWND *a1, unsigned int a2)
{
  __int64 i; // r8
  __int64 v5; // r9
  __int64 result; // rax

  for ( i = *((_QWORD *)a1 + 13); i; i = *(_QWORD *)(i + 104) )
  {
    v5 = *(_QWORD *)(i + 40);
    if ( (*(_BYTE *)(v5 + 31) & 2) != 0 )
      break;
    if ( *(_QWORD *)(v5 + 136) || (*(_BYTE *)(v5 + 17) & 0x10) != 0 )
      return result;
  }
  DoQueuedSyncPaint(a1, a2, gptiCurrent);
  return xxxInternalDoSyncPaint(a1, a2);
}
