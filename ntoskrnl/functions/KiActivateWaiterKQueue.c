char __fastcall KiActivateWaiterKQueue(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rcx
  _QWORD *v6; // rax

  LODWORD(v1) = *(_DWORD *)(a1 + 40);
  if ( (unsigned int)v1 < *(_DWORD *)(a1 + 44) )
  {
    v3 = a1 + 24;
    v4 = *(_QWORD **)(a1 + 24);
    if ( v4 != (_QWORD *)(a1 + 24) )
    {
      v1 = (_QWORD *)(a1 + 8);
      if ( (_QWORD *)*v1 != v1 )
      {
        v5 = *v4;
        v6 = (_QWORD *)v4[1];
        if ( *(_QWORD **)(*v4 + 8LL) == v4 && (_QWORD *)*v6 == v4 )
        {
          *v6 = v5;
          *(_QWORD *)(v5 + 8) = v6;
          *v4 = 0LL;
          LOBYTE(v1) = KiWakeQueueWaiter((__int64)KeGetCurrentPrcb(), a1, (__int64)v4);
          if ( (_BYTE)v1 )
          {
            --*(_DWORD *)(a1 + 4);
            goto LABEL_3;
          }
          v1 = *(_QWORD **)v3;
          if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) == v3 )
          {
            *v4 = v1;
            v4[1] = v3;
            v1[1] = v4;
            *(_QWORD *)v3 = v4;
            goto LABEL_3;
          }
        }
        __fastfail(3u);
      }
    }
  }
LABEL_3:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return (char)v1;
}
