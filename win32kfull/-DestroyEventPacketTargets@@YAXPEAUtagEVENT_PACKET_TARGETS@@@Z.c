void __fastcall DestroyEventPacketTargets(struct tagEVENT_PACKET_TARGETS *a1)
{
  int v1; // edi
  _QWORD *v3; // rsi

  v1 = 0;
  if ( *(int *)a1 > 0 )
  {
    v3 = (_QWORD *)((char *)a1 + 8);
    do
    {
      if ( *v3 )
        HMAssignmentUnlock((char *)a1 + 8 * v1 + 8);
      ++v1;
      ++v3;
    }
    while ( v1 < *(_DWORD *)a1 );
  }
  Win32FreePool(a1);
}
